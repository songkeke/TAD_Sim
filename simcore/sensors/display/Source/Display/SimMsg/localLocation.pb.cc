// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: localLocation.proto
#pragma warning (disable : 4125)
#include "localLocation.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_header_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Header_header_2eproto;
namespace sim_msg {
class LocalLocationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LocalLocation> _instance;
} _LocalLocation_default_instance_;
}  // namespace sim_msg
static void InitDefaultsscc_info_LocalLocation_localLocation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_LocalLocation_default_instance_;
    new (ptr) ::sim_msg::LocalLocation();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::LocalLocation::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LocalLocation_localLocation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_LocalLocation_localLocation_2eproto}, {
      &scc_info_Header_header_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_localLocation_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_localLocation_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_localLocation_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_localLocation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, header_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, x_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, y_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, vx_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, vy_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, yaw_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, yaw_v_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, time_thislocalframe_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, time_lastlocalframe_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, thisframeid_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::LocalLocation, transform_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::sim_msg::LocalLocation)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sim_msg::_LocalLocation_default_instance_),
};

const char descriptor_table_protodef_localLocation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023localLocation.proto\022\007sim_msg\032\014header.p"
  "roto\"\334\001\n\rLocalLocation\022\037\n\006header\030\001 \001(\0132\017"
  ".sim_msg.Header\022\t\n\001x\030\002 \001(\001\022\t\n\001y\030\003 \001(\001\022\n\n"
  "\002vx\030\004 \001(\001\022\n\n\002vy\030\005 \001(\001\022\013\n\003yaw\030\006 \001(\001\022\r\n\005ya"
  "w_v\030\007 \001(\001\022\033\n\023time_thisLocalFrame\030\010 \001(\001\022\033"
  "\n\023time_lastLocalFrame\030\t \001(\001\022\023\n\013thisFrame"
  "ID\030\n \001(\004\022\021\n\ttransform\030\013 \003(\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_localLocation_2eproto_deps[1] = {
  &::descriptor_table_header_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_localLocation_2eproto_sccs[1] = {
  &scc_info_LocalLocation_localLocation_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_localLocation_2eproto_once;
static bool descriptor_table_localLocation_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_localLocation_2eproto = {
  &descriptor_table_localLocation_2eproto_initialized, descriptor_table_protodef_localLocation_2eproto, "localLocation.proto", 275,
  &descriptor_table_localLocation_2eproto_once, descriptor_table_localLocation_2eproto_sccs, descriptor_table_localLocation_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_localLocation_2eproto::offsets,
  file_level_metadata_localLocation_2eproto, 1, file_level_enum_descriptors_localLocation_2eproto, file_level_service_descriptors_localLocation_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_localLocation_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_localLocation_2eproto), true);
namespace sim_msg {

// ===================================================================

void LocalLocation::InitAsDefaultInstance() {
  ::sim_msg::_LocalLocation_default_instance_._instance.get_mutable()->header_ = const_cast< ::sim_msg::Header*>(
      ::sim_msg::Header::internal_default_instance());
}
class LocalLocation::_Internal {
 public:
  static const ::sim_msg::Header& header(const LocalLocation* msg);
};

const ::sim_msg::Header&
LocalLocation::_Internal::header(const LocalLocation* msg) {
  return *msg->header_;
}
void LocalLocation::clear_header() {
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
LocalLocation::LocalLocation()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.LocalLocation)
}
LocalLocation::LocalLocation(const LocalLocation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      transform_(from.transform_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::sim_msg::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&thisframeid_) -
    reinterpret_cast<char*>(&x_)) + sizeof(thisframeid_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.LocalLocation)
}

void LocalLocation::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LocalLocation_localLocation_2eproto.base);
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&thisframeid_) -
      reinterpret_cast<char*>(&header_)) + sizeof(thisframeid_));
}

LocalLocation::~LocalLocation() {
  // @@protoc_insertion_point(destructor:sim_msg.LocalLocation)
  SharedDtor();
}

void LocalLocation::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void LocalLocation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LocalLocation& LocalLocation::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LocalLocation_localLocation_2eproto.base);
  return *internal_default_instance();
}


void LocalLocation::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.LocalLocation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  transform_.Clear();
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&thisframeid_) -
      reinterpret_cast<char*>(&x_)) + sizeof(thisframeid_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* LocalLocation::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .sim_msg.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double x = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double y = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double vx = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          vx_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double vy = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          vy_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double yaw = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          yaw_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double yaw_v = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          yaw_v_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double time_thisLocalFrame = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          time_thislocalframe_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double time_lastLocalFrame = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 73)) {
          time_lastlocalframe_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // uint64 thisFrameID = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          thisframeid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double transform = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(mutable_transform(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 89) {
          add_transform(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool LocalLocation::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.LocalLocation)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .sim_msg.Header header = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double x = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (17 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (25 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vx = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (33 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vy = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (41 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double yaw = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (49 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &yaw_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double yaw_v = 7;
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (57 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &yaw_v_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double time_thisLocalFrame = 8;
      case 8: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (65 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_thislocalframe_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double time_lastLocalFrame = 9;
      case 9: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (73 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_lastlocalframe_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 thisFrameID = 10;
      case 10: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (80 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64>(
                 input, &thisframeid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double transform = 11;
      case 11: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (90 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_transform())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (89 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 90u, input, this->mutable_transform())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sim_msg.LocalLocation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.LocalLocation)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void LocalLocation::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.LocalLocation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .sim_msg.Header header = 1;
  if (this->has_header()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::header(this), output);
  }

  // double x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(2, this->x(), output);
  }

  // double y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(3, this->y(), output);
  }

  // double vx = 4;
  if (!(this->vx() <= 0 && this->vx() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(4, this->vx(), output);
  }

  // double vy = 5;
  if (!(this->vy() <= 0 && this->vy() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(5, this->vy(), output);
  }

  // double yaw = 6;
  if (!(this->yaw() <= 0 && this->yaw() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(6, this->yaw(), output);
  }

  // double yaw_v = 7;
  if (!(this->yaw_v() <= 0 && this->yaw_v() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(7, this->yaw_v(), output);
  }

  // double time_thisLocalFrame = 8;
  if (!(this->time_thislocalframe() <= 0 && this->time_thislocalframe() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(8, this->time_thislocalframe(), output);
  }

  // double time_lastLocalFrame = 9;
  if (!(this->time_lastlocalframe() <= 0 && this->time_lastlocalframe() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(9, this->time_lastlocalframe(), output);
  }

  // uint64 thisFrameID = 10;
  if (this->thisframeid() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64(10, this->thisframeid(), output);
  }

  // repeated double transform = 11;
  if (this->transform_size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTag(11, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_transform_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleArray(
      this->transform().data(), this->transform_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.LocalLocation)
}

::PROTOBUF_NAMESPACE_ID::uint8* LocalLocation::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.LocalLocation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .sim_msg.Header header = 1;
  if (this->has_header()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::header(this), target);
  }

  // double x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->x(), target);
  }

  // double y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->y(), target);
  }

  // double vx = 4;
  if (!(this->vx() <= 0 && this->vx() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->vx(), target);
  }

  // double vy = 5;
  if (!(this->vy() <= 0 && this->vy() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->vy(), target);
  }

  // double yaw = 6;
  if (!(this->yaw() <= 0 && this->yaw() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->yaw(), target);
  }

  // double yaw_v = 7;
  if (!(this->yaw_v() <= 0 && this->yaw_v() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->yaw_v(), target);
  }

  // double time_thisLocalFrame = 8;
  if (!(this->time_thislocalframe() <= 0 && this->time_thislocalframe() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->time_thislocalframe(), target);
  }

  // double time_lastLocalFrame = 9;
  if (!(this->time_lastlocalframe() <= 0 && this->time_lastlocalframe() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(9, this->time_lastlocalframe(), target);
  }

  // uint64 thisFrameID = 10;
  if (this->thisframeid() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(10, this->thisframeid(), target);
  }

  // repeated double transform = 11;
  if (this->transform_size() > 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteTagToArray(
      11,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream::WriteVarint32ToArray(
        _transform_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->transform_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.LocalLocation)
  return target;
}

size_t LocalLocation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.LocalLocation)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated double transform = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->transform_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _transform_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .sim_msg.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // double x = 2;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 8;
  }

  // double y = 3;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 8;
  }

  // double vx = 4;
  if (!(this->vx() <= 0 && this->vx() >= 0)) {
    total_size += 1 + 8;
  }

  // double vy = 5;
  if (!(this->vy() <= 0 && this->vy() >= 0)) {
    total_size += 1 + 8;
  }

  // double yaw = 6;
  if (!(this->yaw() <= 0 && this->yaw() >= 0)) {
    total_size += 1 + 8;
  }

  // double yaw_v = 7;
  if (!(this->yaw_v() <= 0 && this->yaw_v() >= 0)) {
    total_size += 1 + 8;
  }

  // double time_thisLocalFrame = 8;
  if (!(this->time_thislocalframe() <= 0 && this->time_thislocalframe() >= 0)) {
    total_size += 1 + 8;
  }

  // double time_lastLocalFrame = 9;
  if (!(this->time_lastlocalframe() <= 0 && this->time_lastlocalframe() >= 0)) {
    total_size += 1 + 8;
  }

  // uint64 thisFrameID = 10;
  if (this->thisframeid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->thisframeid());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LocalLocation::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.LocalLocation)
  GOOGLE_DCHECK_NE(&from, this);
  const LocalLocation* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LocalLocation>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.LocalLocation)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.LocalLocation)
    MergeFrom(*source);
  }
}

void LocalLocation::MergeFrom(const LocalLocation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.LocalLocation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  transform_.MergeFrom(from.transform_);
  if (from.has_header()) {
    mutable_header()->::sim_msg::Header::MergeFrom(from.header());
  }
  if (!(from.x() <= 0 && from.x() >= 0)) {
    set_x(from.x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    set_y(from.y());
  }
  if (!(from.vx() <= 0 && from.vx() >= 0)) {
    set_vx(from.vx());
  }
  if (!(from.vy() <= 0 && from.vy() >= 0)) {
    set_vy(from.vy());
  }
  if (!(from.yaw() <= 0 && from.yaw() >= 0)) {
    set_yaw(from.yaw());
  }
  if (!(from.yaw_v() <= 0 && from.yaw_v() >= 0)) {
    set_yaw_v(from.yaw_v());
  }
  if (!(from.time_thislocalframe() <= 0 && from.time_thislocalframe() >= 0)) {
    set_time_thislocalframe(from.time_thislocalframe());
  }
  if (!(from.time_lastlocalframe() <= 0 && from.time_lastlocalframe() >= 0)) {
    set_time_lastlocalframe(from.time_lastlocalframe());
  }
  if (from.thisframeid() != 0) {
    set_thisframeid(from.thisframeid());
  }
}

void LocalLocation::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.LocalLocation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalLocation::CopyFrom(const LocalLocation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.LocalLocation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalLocation::IsInitialized() const {
  return true;
}

void LocalLocation::InternalSwap(LocalLocation* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  transform_.InternalSwap(&other->transform_);
  swap(header_, other->header_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(vx_, other->vx_);
  swap(vy_, other->vy_);
  swap(yaw_, other->yaw_);
  swap(yaw_v_, other->yaw_v_);
  swap(time_thislocalframe_, other->time_thislocalframe_);
  swap(time_lastlocalframe_, other->time_lastlocalframe_);
  swap(thisframeid_, other->thisframeid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LocalLocation::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sim_msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sim_msg::LocalLocation* Arena::CreateMaybeMessage< ::sim_msg::LocalLocation >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::LocalLocation >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
