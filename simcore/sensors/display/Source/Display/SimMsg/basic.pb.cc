// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: basic.proto

#include "basic.pb.h"

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
namespace sim_msg {
class Vec2DefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Vec2> _instance;
} _Vec2_default_instance_;
class Vec3DefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Vec3> _instance;
} _Vec3_default_instance_;
class Vec4DefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Vec4> _instance;
} _Vec4_default_instance_;
}  // namespace sim_msg
static void InitDefaultsscc_info_Vec2_basic_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_Vec2_default_instance_;
    new (ptr) ::sim_msg::Vec2();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::Vec2::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vec2_basic_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Vec2_basic_2eproto}, {}};

static void InitDefaultsscc_info_Vec3_basic_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_Vec3_default_instance_;
    new (ptr) ::sim_msg::Vec3();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::Vec3::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vec3_basic_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Vec3_basic_2eproto}, {}};

static void InitDefaultsscc_info_Vec4_basic_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sim_msg::_Vec4_default_instance_;
    new (ptr) ::sim_msg::Vec4();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sim_msg::Vec4::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vec4_basic_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Vec4_basic_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_basic_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_basic_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_basic_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_basic_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec2, x_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec2, y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec3, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec3, x_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec3, y_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec3, z_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec4, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec4, x_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec4, y_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec4, z_),
  PROTOBUF_FIELD_OFFSET(::sim_msg::Vec4, w_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::sim_msg::Vec2)},
  { 7, -1, sizeof(::sim_msg::Vec3)},
  { 15, -1, sizeof(::sim_msg::Vec4)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sim_msg::_Vec2_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sim_msg::_Vec3_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sim_msg::_Vec4_default_instance_),
};

const char descriptor_table_protodef_basic_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013basic.proto\022\007sim_msg\"\034\n\004Vec2\022\t\n\001x\030\001 \001("
  "\001\022\t\n\001y\030\002 \001(\001\"\'\n\004Vec3\022\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 \001"
  "(\001\022\t\n\001z\030\003 \001(\001\"2\n\004Vec4\022\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 "
  "\001(\001\022\t\n\001z\030\003 \001(\001\022\t\n\001w\030\004 \001(\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_basic_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_basic_2eproto_sccs[3] = {
  &scc_info_Vec2_basic_2eproto.base,
  &scc_info_Vec3_basic_2eproto.base,
  &scc_info_Vec4_basic_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_basic_2eproto_once;
static bool descriptor_table_basic_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_basic_2eproto = {
  &descriptor_table_basic_2eproto_initialized, descriptor_table_protodef_basic_2eproto, "basic.proto", 153,
  &descriptor_table_basic_2eproto_once, descriptor_table_basic_2eproto_sccs, descriptor_table_basic_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_basic_2eproto::offsets,
  file_level_metadata_basic_2eproto, 3, file_level_enum_descriptors_basic_2eproto, file_level_service_descriptors_basic_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_basic_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_basic_2eproto), true);
namespace sim_msg {

// ===================================================================

void Vec2::InitAsDefaultInstance() {
}
class Vec2::_Internal {
 public:
};

Vec2::Vec2()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec2)
}
Vec2::Vec2(const Vec2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec2)
}

void Vec2::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

Vec2::~Vec2() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec2)
  SharedDtor();
}

void Vec2::SharedDtor() {
}

void Vec2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Vec2& Vec2::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Vec2_basic_2eproto.base);
  return *internal_default_instance();
}


void Vec2::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Vec2::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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
bool Vec2::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec2)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (9 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (17 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
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
  // @@protoc_insertion_point(parse_success:sim_msg.Vec2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec2)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Vec2::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.Vec2)
}

::PROTOBUF_NAMESPACE_ID::uint8* Vec2::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec2)
  return target;
}

size_t Vec2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec2)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 8;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec2::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec2)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec2* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Vec2>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec2)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec2)
    MergeFrom(*source);
  }
}

void Vec2::MergeFrom(const Vec2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    set_x(from.x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    set_y(from.y());
  }
}

void Vec2::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec2::CopyFrom(const Vec2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec2::IsInitialized() const {
  return true;
}

void Vec2::InternalSwap(Vec2* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Vec2::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Vec3::InitAsDefaultInstance() {
}
class Vec3::_Internal {
 public:
};

Vec3::Vec3()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec3)
}
Vec3::Vec3(const Vec3& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec3)
}

void Vec3::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

Vec3::~Vec3() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec3)
  SharedDtor();
}

void Vec3::SharedDtor() {
}

void Vec3::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Vec3& Vec3::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Vec3_basic_2eproto.base);
  return *internal_default_instance();
}


void Vec3::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec3)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Vec3::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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
bool Vec3::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec3)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (9 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (17 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double z = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (25 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
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
  // @@protoc_insertion_point(parse_success:sim_msg.Vec3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec3)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Vec3::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec3)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // double z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.Vec3)
}

::PROTOBUF_NAMESPACE_ID::uint8* Vec3::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec3)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // double z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec3)
  return target;
}

size_t Vec3::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec3)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 8;
  }

  // double z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    total_size += 1 + 8;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec3::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec3)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec3* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Vec3>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec3)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec3)
    MergeFrom(*source);
  }
}

void Vec3::MergeFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec3)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    set_x(from.x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    set_y(from.y());
  }
  if (!(from.z() <= 0 && from.z() >= 0)) {
    set_z(from.z());
  }
}

void Vec3::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec3::CopyFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec3::IsInitialized() const {
  return true;
}

void Vec3::InternalSwap(Vec3* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Vec3::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Vec4::InitAsDefaultInstance() {
}
class Vec4::_Internal {
 public:
};

Vec4::Vec4()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec4)
}
Vec4::Vec4(const Vec4& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&w_) -
    reinterpret_cast<char*>(&x_)) + sizeof(w_));
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec4)
}

void Vec4::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&w_) -
      reinterpret_cast<char*>(&x_)) + sizeof(w_));
}

Vec4::~Vec4() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec4)
  SharedDtor();
}

void Vec4::SharedDtor() {
}

void Vec4::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Vec4& Vec4::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Vec4_basic_2eproto.base);
  return *internal_default_instance();
}


void Vec4::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec4)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&w_) -
      reinterpret_cast<char*>(&x_)) + sizeof(w_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Vec4::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double w = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          w_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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
bool Vec4::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec4)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (9 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (17 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double z = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (25 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double w = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (33 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &w_)));
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
  // @@protoc_insertion_point(parse_success:sim_msg.Vec4)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec4)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Vec4::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec4)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // double z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  // double w = 4;
  if (!(this->w() <= 0 && this->w() >= 0)) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(4, this->w(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sim_msg.Vec4)
}

::PROTOBUF_NAMESPACE_ID::uint8* Vec4::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec4)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // double z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  // double w = 4;
  if (!(this->w() <= 0 && this->w() >= 0)) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->w(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec4)
  return target;
}

size_t Vec4::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec4)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 8;
  }

  // double z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    total_size += 1 + 8;
  }

  // double w = 4;
  if (!(this->w() <= 0 && this->w() >= 0)) {
    total_size += 1 + 8;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec4::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec4)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec4* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Vec4>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec4)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec4)
    MergeFrom(*source);
  }
}

void Vec4::MergeFrom(const Vec4& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec4)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    set_x(from.x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    set_y(from.y());
  }
  if (!(from.z() <= 0 && from.z() >= 0)) {
    set_z(from.z());
  }
  if (!(from.w() <= 0 && from.w() >= 0)) {
    set_w(from.w());
  }
}

void Vec4::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec4)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec4::CopyFrom(const Vec4& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec4)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec4::IsInitialized() const {
  return true;
}

void Vec4::InternalSwap(Vec4* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
  swap(w_, other->w_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Vec4::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sim_msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sim_msg::Vec2* Arena::CreateMaybeMessage< ::sim_msg::Vec2 >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::Vec2 >(arena);
}
template<> PROTOBUF_NOINLINE ::sim_msg::Vec3* Arena::CreateMaybeMessage< ::sim_msg::Vec3 >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::Vec3 >(arena);
}
template<> PROTOBUF_NOINLINE ::sim_msg::Vec4* Arena::CreateMaybeMessage< ::sim_msg::Vec4 >(Arena* arena) {
  return Arena::CreateInternal< ::sim_msg::Vec4 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
