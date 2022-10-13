// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CameraModel.proto

#include "CameraModel.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace hal {
PROTOBUF_CONSTEXPR CameraModelMsg::CameraModelMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.type_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.pose_local_camera_)*/nullptr
  , /*decltype(_impl_.params_)*/nullptr
  , /*decltype(_impl_.serial_number_)*/int64_t{0}
  , /*decltype(_impl_.index_)*/0
  , /*decltype(_impl_.version_)*/0u
  , /*decltype(_impl_.width_)*/0u
  , /*decltype(_impl_.height_)*/0u} {}
struct CameraModelMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CameraModelMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CameraModelMsgDefaultTypeInternal() {}
  union {
    CameraModelMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CameraModelMsgDefaultTypeInternal _CameraModelMsg_default_instance_;
}  // namespace hal
static ::_pb::Metadata file_level_metadata_CameraModel_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CameraModel_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CameraModel_2eproto = nullptr;

const uint32_t TableStruct_CameraModel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.index_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.serial_number_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.width_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.height_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.pose_local_camera_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.params_),
  PROTOBUF_FIELD_OFFSET(::hal::CameraModelMsg, _impl_.type_),
  0,
  5,
  4,
  6,
  7,
  8,
  2,
  3,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, -1, sizeof(::hal::CameraModelMsg)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::hal::_CameraModelMsg_default_instance_._instance,
};

const char descriptor_table_protodef_CameraModel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021CameraModel.proto\022\003hal\032\nPose.proto\032\014Ma"
  "trix.proto\"\313\001\n\016CameraModelMsg\022\014\n\004name\030\001 "
  "\001(\t\022\r\n\005index\030\002 \001(\005\022\025\n\rserial_number\030\003 \001("
  "\003\022\017\n\007version\030\004 \001(\r\022\r\n\005width\030\005 \001(\r\022\016\n\006hei"
  "ght\030\006 \001(\r\022\'\n\021pose_local_camera\030\007 \001(\0132\014.h"
  "al.PoseMsg\022\036\n\006params\030\010 \001(\0132\016.hal.VectorM"
  "sg\022\014\n\004type\030\t \001(\t"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_CameraModel_2eproto_deps[2] = {
  &::descriptor_table_Matrix_2eproto,
  &::descriptor_table_Pose_2eproto,
};
static ::_pbi::once_flag descriptor_table_CameraModel_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CameraModel_2eproto = {
    false, false, 256, descriptor_table_protodef_CameraModel_2eproto,
    "CameraModel.proto",
    &descriptor_table_CameraModel_2eproto_once, descriptor_table_CameraModel_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_CameraModel_2eproto::offsets,
    file_level_metadata_CameraModel_2eproto, file_level_enum_descriptors_CameraModel_2eproto,
    file_level_service_descriptors_CameraModel_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CameraModel_2eproto_getter() {
  return &descriptor_table_CameraModel_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CameraModel_2eproto(&descriptor_table_CameraModel_2eproto);
namespace hal {

// ===================================================================

class CameraModelMsg::_Internal {
 public:
  using HasBits = decltype(std::declval<CameraModelMsg>()._impl_._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_index(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_serial_number(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static const ::hal::PoseMsg& pose_local_camera(const CameraModelMsg* msg);
  static void set_has_pose_local_camera(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::hal::VectorMsg& params(const CameraModelMsg* msg);
  static void set_has_params(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::hal::PoseMsg&
CameraModelMsg::_Internal::pose_local_camera(const CameraModelMsg* msg) {
  return *msg->_impl_.pose_local_camera_;
}
const ::hal::VectorMsg&
CameraModelMsg::_Internal::params(const CameraModelMsg* msg) {
  return *msg->_impl_.params_;
}
void CameraModelMsg::clear_pose_local_camera() {
  if (_impl_.pose_local_camera_ != nullptr) _impl_.pose_local_camera_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void CameraModelMsg::clear_params() {
  if (_impl_.params_ != nullptr) _impl_.params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
CameraModelMsg::CameraModelMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hal.CameraModelMsg)
}
CameraModelMsg::CameraModelMsg(const CameraModelMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CameraModelMsg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_){}
    , decltype(_impl_.type_){}
    , decltype(_impl_.pose_local_camera_){nullptr}
    , decltype(_impl_.params_){nullptr}
    , decltype(_impl_.serial_number_){}
    , decltype(_impl_.index_){}
    , decltype(_impl_.version_){}
    , decltype(_impl_.width_){}
    , decltype(_impl_.height_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_type()) {
    _this->_impl_.type_.Set(from._internal_type(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_pose_local_camera()) {
    _this->_impl_.pose_local_camera_ = new ::hal::PoseMsg(*from._impl_.pose_local_camera_);
  }
  if (from._internal_has_params()) {
    _this->_impl_.params_ = new ::hal::VectorMsg(*from._impl_.params_);
  }
  ::memcpy(&_impl_.serial_number_, &from._impl_.serial_number_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.height_) -
    reinterpret_cast<char*>(&_impl_.serial_number_)) + sizeof(_impl_.height_));
  // @@protoc_insertion_point(copy_constructor:hal.CameraModelMsg)
}

inline void CameraModelMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_){}
    , decltype(_impl_.type_){}
    , decltype(_impl_.pose_local_camera_){nullptr}
    , decltype(_impl_.params_){nullptr}
    , decltype(_impl_.serial_number_){int64_t{0}}
    , decltype(_impl_.index_){0}
    , decltype(_impl_.version_){0u}
    , decltype(_impl_.width_){0u}
    , decltype(_impl_.height_){0u}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CameraModelMsg::~CameraModelMsg() {
  // @@protoc_insertion_point(destructor:hal.CameraModelMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CameraModelMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.type_.Destroy();
  if (this != internal_default_instance()) delete _impl_.pose_local_camera_;
  if (this != internal_default_instance()) delete _impl_.params_;
}

void CameraModelMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CameraModelMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:hal.CameraModelMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.type_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.pose_local_camera_ != nullptr);
      _impl_.pose_local_camera_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(_impl_.params_ != nullptr);
      _impl_.params_->Clear();
    }
  }
  if (cached_has_bits & 0x000000f0u) {
    ::memset(&_impl_.serial_number_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.width_) -
        reinterpret_cast<char*>(&_impl_.serial_number_)) + sizeof(_impl_.width_));
  }
  _impl_.height_ = 0u;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CameraModelMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "hal.CameraModelMsg.name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional int32 index = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_index(&has_bits);
          _impl_.index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 serial_number = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_serial_number(&has_bits);
          _impl_.serial_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 version = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_version(&has_bits);
          _impl_.version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 width = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_width(&has_bits);
          _impl_.width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 height = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_height(&has_bits);
          _impl_.height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.PoseMsg pose_local_camera = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose_local_camera(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.VectorMsg params = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_params(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string type = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_type();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "hal.CameraModelMsg.type");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CameraModelMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hal.CameraModelMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "hal.CameraModelMsg.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // optional int32 index = 2;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_index(), target);
  }

  // optional int64 serial_number = 3;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_serial_number(), target);
  }

  // optional uint32 version = 4;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_version(), target);
  }

  // optional uint32 width = 5;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(5, this->_internal_width(), target);
  }

  // optional uint32 height = 6;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(6, this->_internal_height(), target);
  }

  // optional .hal.PoseMsg pose_local_camera = 7;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::pose_local_camera(this),
        _Internal::pose_local_camera(this).GetCachedSize(), target, stream);
  }

  // optional .hal.VectorMsg params = 8;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, _Internal::params(this),
        _Internal::params(this).GetCachedSize(), target, stream);
  }

  // optional string type = 9;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "hal.CameraModelMsg.type");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hal.CameraModelMsg)
  return target;
}

size_t CameraModelMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hal.CameraModelMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional string type = 9;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_type());
    }

    // optional .hal.PoseMsg pose_local_camera = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.pose_local_camera_);
    }

    // optional .hal.VectorMsg params = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.params_);
    }

    // optional int64 serial_number = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_serial_number());
    }

    // optional int32 index = 2;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_index());
    }

    // optional uint32 version = 4;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version());
    }

    // optional uint32 width = 5;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_width());
    }

  }
  // optional uint32 height = 6;
  if (cached_has_bits & 0x00000100u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_height());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CameraModelMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CameraModelMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CameraModelMsg::GetClassData() const { return &_class_data_; }


void CameraModelMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CameraModelMsg*>(&to_msg);
  auto& from = static_cast<const CameraModelMsg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hal.CameraModelMsg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_type(from._internal_type());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_pose_local_camera()->::hal::PoseMsg::MergeFrom(
          from._internal_pose_local_camera());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_params()->::hal::VectorMsg::MergeFrom(
          from._internal_params());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.serial_number_ = from._impl_.serial_number_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.index_ = from._impl_.index_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.version_ = from._impl_.version_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.width_ = from._impl_.width_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _this->_internal_set_height(from._internal_height());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CameraModelMsg::CopyFrom(const CameraModelMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hal.CameraModelMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CameraModelMsg::IsInitialized() const {
  if (_internal_has_pose_local_camera()) {
    if (!_impl_.pose_local_camera_->IsInitialized()) return false;
  }
  return true;
}

void CameraModelMsg::InternalSwap(CameraModelMsg* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.type_, lhs_arena,
      &other->_impl_.type_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CameraModelMsg, _impl_.height_)
      + sizeof(CameraModelMsg::_impl_.height_)
      - PROTOBUF_FIELD_OFFSET(CameraModelMsg, _impl_.pose_local_camera_)>(
          reinterpret_cast<char*>(&_impl_.pose_local_camera_),
          reinterpret_cast<char*>(&other->_impl_.pose_local_camera_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CameraModelMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CameraModel_2eproto_getter, &descriptor_table_CameraModel_2eproto_once,
      file_level_metadata_CameraModel_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace hal
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::hal::CameraModelMsg*
Arena::CreateMaybeMessage< ::hal::CameraModelMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hal::CameraModelMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
