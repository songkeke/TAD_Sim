package cmd

import (
	"context"
	"encoding/binary"
	"fmt"
	"log"
	"strings"
	"txsim/cli/util"

	"github.com/golang/protobuf/jsonpb"
	"github.com/jhump/protoreflect/dynamic"
	"github.com/spf13/cobra"
	"github.com/spf13/viper"
	"nhooyr.io/websocket"
)

// flagMsgDesc holds the description of the protobuf message
var flagMsgDesc string

// ProtoMsgParseArgs contains arguments needed to parse a protobuf message
type ProtoMsgParseArgs struct {
	msgName       string
	protoFileName string
	protoSrcDir   []string
}

// receiveMsgs listens for messages from a WebSocket connection and processes them
func receiveMsgs(ctx *context.Context, conn *websocket.Conn, c chan<- bool, msgParseOpts map[string]*dynamic.Message) {
	for {
		// Read message from WebSocket connection
		msg_type, payload, err := conn.Read(*ctx)
		if err != nil {
			log.Printf("ws client read error: %s", err)
			break
		}

		//log.Printf("===== ws read: msg type -> %d msg length -> %d", msg_type, len(payload))
		// Log unexpected text message
		if msg_type == websocket.MessageText {
			log.Printf("ws read un-expected text: %s", payload)
		} else {
			idx := 0
			// Extract timestamp and message count from payload
			timestamp := binary.LittleEndian.Uint64(payload[idx:(idx + 8)])
			idx += 8
			msg_cnt := binary.LittleEndian.Uint32(payload[idx:(idx + 4)])
			idx += 4
			fmt.Printf("==================== %d msgs @ %dms ====================\n", msg_cnt, timestamp)

			// Process each message
			for i := 0; i < int(msg_cnt); i++ {
				len := binary.LittleEndian.Uint32(payload[idx:(idx + 4)])
				idx += 4
				topic := string(payload[idx:(idx + int(len))])
				idx += int(len)
				len = binary.LittleEndian.Uint32(payload[idx:(idx + 4)])
				idx += 4
				fmt.Printf("%s -> %d bytes\n", topic, len)

				// Parse the message if it matches a known topic
				if dm, ok := msgParseOpts[topic]; ok {
					msg := payload[idx:(idx + int(len))]
					err := dm.Unmarshal(msg)
					if err != nil {
						log.Println("error un-marshal msg payload.")
					}
					json_bytes, err := dm.MarshalJSONPB(&jsonpb.Marshaler{
						OrigName: true,
						EnumsAsInts: false,
						EmitDefaults: false,
						Indent: "  ",
					})
					if err != nil {
						log.Println("error marshal to json string.")
					} else {
						fmt.Printf("%s -> %s\n", topic, string(json_bytes))
					}
				}
				idx += int(len)
			}
		}
	}

	// Notify that message receiving has ended
	c <- true
}

// parseProtoFlagValue parses the value of the --proto flag
func parseProtoFlagValue() (topic string, parseArgs ProtoMsgParseArgs) {
	topicAndDesc := strings.SplitN(flagMsgDesc, ":", 2)
	if len(topicAndDesc) != 2 {
		log.Fatalln("invalid --proto value: ", flagMsgDesc)
	}
	topic = topicAndDesc[0]
	msgDesc := topicAndDesc[1]
	msgDescArray := strings.Split(msgDesc, ";")
	if len(msgDescArray) != 3 {
		log.Fatalln("invalid proto description in --proto: ", msgDesc)
	}
	parseArgs.msgName = msgDescArray[0]
	parseArgs.protoFileName = msgDescArray[1]
	parseArgs.protoSrcDir = strings.Split(msgDescArray[2], ",")
	return
}

// msgCmd represents the msg command
var msgCmd = &cobra.Command{
	Use:   "msg",
	Short: "monitoring topic messages of the TAD Sim.",
	Long: `monitoring all topic messages generated by the TAD Sim modules and optionally parsing a protobuf message of
a specified topic by --proto flag. For example:

txsim-cli data msg --proto "LOCATION:sim_msg.Location;location.proto;D:\\workspace\\my_proj\\pb_msg"`,
	Run: func(cmd *cobra.Command, args []string) {
		// Prepare message parsing options
		msgParseOpts := make(map[string]*dynamic.Message)
		if len(flagMsgDesc) > 0 {
			topic, parseArgs := parseProtoFlagValue()
			msgParseOpts[topic] = util.GetProtoMsg(parseArgs.msgName, parseArgs.protoFileName, parseArgs.protoSrcDir)
		}

		// Create a cancellable context
		ctx, cancel := context.WithCancel(context.Background())
		defer cancel()

		// Establish WebSocket connection
		conn, resp, err := websocket.Dial(ctx, fmt.Sprintf("ws://%s/api/data/raw_msg", viper.GetString(cfgKeyEndpoint)), nil)
		if err != nil {
			if resp != nil {
				log.Printf("ws client dial resp status: %s", resp.Status)
			}
			log.Printf("ws client dial error: %s.", err)
			if conn != nil {
				conn.Close(websocket.StatusInternalError, "ws client error")
			}
			return
		}
		defer conn.Close(websocket.StatusNormalClosure, "")

		// Channel to signal the end of message receiving
		c := make(chan bool)
		go receiveMsgs(&ctx, conn, c, msgParseOpts)
		go util.MonitorInterruptSignal(c)
		<-c
	},
}

func init() {
	// Add the msg command to dataCmd
	dataCmd.AddCommand(msgCmd)
	// Add the --proto flag to the msg command
	msgCmd.Flags().StringVarP(
		&flagMsgDesc, "proto", "p", "",
		"the protobuf msg description. in format TOPIC:pb_msg_name;proto_filename;proto_file_dir1,proto_file_dir2,... " +
		"e.g. --proto \"LOCATION:sim_msg.Location;location.proto;D:\\my_proj\\pb_msgs\"",
	)
}
