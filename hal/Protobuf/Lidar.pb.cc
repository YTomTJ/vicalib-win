// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Lidar.proto

#include "Lidar.pb.h"

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
PROTOBUF_CONSTEXPR LidarMsg::LidarMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.distance_)*/nullptr
  , /*decltype(_impl_.intensity_)*/nullptr
  , /*decltype(_impl_.rotational_position_)*/nullptr
  , /*decltype(_impl_.device_time_)*/0
  , /*decltype(_impl_.system_time_)*/0
  , /*decltype(_impl_.id_)*/0} {}
struct LidarMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LidarMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LidarMsgDefaultTypeInternal() {}
  union {
    LidarMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LidarMsgDefaultTypeInternal _LidarMsg_default_instance_;
}  // namespace hal
static ::_pb::Metadata file_level_metadata_Lidar_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Lidar_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Lidar_2eproto = nullptr;

const uint32_t TableStruct_Lidar_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_.device_time_),
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_.system_time_),
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_.distance_),
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_.intensity_),
  PROTOBUF_FIELD_OFFSET(::hal::LidarMsg, _impl_.rotational_position_),
  5,
  3,
  4,
  0,
  1,
  2,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, -1, sizeof(::hal::LidarMsg)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::hal::_LidarMsg_default_instance_._instance,
};

const char descriptor_table_protodef_Lidar_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Lidar.proto\022\003hal\032\014Matrix.proto\"\262\001\n\010Lid"
  "arMsg\022\n\n\002id\030\001 \001(\005\022\023\n\013device_time\030\002 \001(\001\022\023"
  "\n\013system_time\030\003 \001(\001\022 \n\010distance\030\004 \001(\0132\016."
  "hal.MatrixMsg\022!\n\tintensity\030\005 \001(\0132\016.hal.M"
  "atrixMsg\022+\n\023rotational_position\030\006 \001(\0132\016."
  "hal.VectorMsg"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Lidar_2eproto_deps[1] = {
  &::descriptor_table_Matrix_2eproto,
};
static ::_pbi::once_flag descriptor_table_Lidar_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Lidar_2eproto = {
    false, false, 213, descriptor_table_protodef_Lidar_2eproto,
    "Lidar.proto",
    &descriptor_table_Lidar_2eproto_once, descriptor_table_Lidar_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_Lidar_2eproto::offsets,
    file_level_metadata_Lidar_2eproto, file_level_enum_descriptors_Lidar_2eproto,
    file_level_service_descriptors_Lidar_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Lidar_2eproto_getter() {
  return &descriptor_table_Lidar_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Lidar_2eproto(&descriptor_table_Lidar_2eproto);
namespace hal {

// ===================================================================

class LidarMsg::_Internal {
 public:
  using HasBits = decltype(std::declval<LidarMsg>()._impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_device_time(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_system_time(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::hal::MatrixMsg& distance(const LidarMsg* msg);
  static void set_has_distance(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::hal::MatrixMsg& intensity(const LidarMsg* msg);
  static void set_has_intensity(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::hal::VectorMsg& rotational_position(const LidarMsg* msg);
  static void set_has_rotational_position(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::hal::MatrixMsg&
LidarMsg::_Internal::distance(const LidarMsg* msg) {
  return *msg->_impl_.distance_;
}
const ::hal::MatrixMsg&
LidarMsg::_Internal::intensity(const LidarMsg* msg) {
  return *msg->_impl_.intensity_;
}
const ::hal::VectorMsg&
LidarMsg::_Internal::rotational_position(const LidarMsg* msg) {
  return *msg->_impl_.rotational_position_;
}
void LidarMsg::clear_distance() {
  if (_impl_.distance_ != nullptr) _impl_.distance_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void LidarMsg::clear_intensity() {
  if (_impl_.intensity_ != nullptr) _impl_.intensity_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void LidarMsg::clear_rotational_position() {
  if (_impl_.rotational_position_ != nullptr) _impl_.rotational_position_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
LidarMsg::LidarMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hal.LidarMsg)
}
LidarMsg::LidarMsg(const LidarMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  LidarMsg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.distance_){nullptr}
    , decltype(_impl_.intensity_){nullptr}
    , decltype(_impl_.rotational_position_){nullptr}
    , decltype(_impl_.device_time_){}
    , decltype(_impl_.system_time_){}
    , decltype(_impl_.id_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_distance()) {
    _this->_impl_.distance_ = new ::hal::MatrixMsg(*from._impl_.distance_);
  }
  if (from._internal_has_intensity()) {
    _this->_impl_.intensity_ = new ::hal::MatrixMsg(*from._impl_.intensity_);
  }
  if (from._internal_has_rotational_position()) {
    _this->_impl_.rotational_position_ = new ::hal::VectorMsg(*from._impl_.rotational_position_);
  }
  ::memcpy(&_impl_.device_time_, &from._impl_.device_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.id_) -
    reinterpret_cast<char*>(&_impl_.device_time_)) + sizeof(_impl_.id_));
  // @@protoc_insertion_point(copy_constructor:hal.LidarMsg)
}

inline void LidarMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.distance_){nullptr}
    , decltype(_impl_.intensity_){nullptr}
    , decltype(_impl_.rotational_position_){nullptr}
    , decltype(_impl_.device_time_){0}
    , decltype(_impl_.system_time_){0}
    , decltype(_impl_.id_){0}
  };
}

LidarMsg::~LidarMsg() {
  // @@protoc_insertion_point(destructor:hal.LidarMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LidarMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.distance_;
  if (this != internal_default_instance()) delete _impl_.intensity_;
  if (this != internal_default_instance()) delete _impl_.rotational_position_;
}

void LidarMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void LidarMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:hal.LidarMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.distance_ != nullptr);
      _impl_.distance_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.intensity_ != nullptr);
      _impl_.intensity_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.rotational_position_ != nullptr);
      _impl_.rotational_position_->Clear();
    }
  }
  if (cached_has_bits & 0x00000038u) {
    ::memset(&_impl_.device_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.id_) -
        reinterpret_cast<char*>(&_impl_.device_time_)) + sizeof(_impl_.id_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LidarMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional double device_time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_device_time(&has_bits);
          _impl_.device_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double system_time = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _Internal::set_has_system_time(&has_bits);
          _impl_.system_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.MatrixMsg distance = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_distance(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.MatrixMsg intensity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_intensity(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.VectorMsg rotational_position = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_rotational_position(), ptr);
          CHK_(ptr);
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

uint8_t* LidarMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hal.LidarMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // optional double device_time = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_device_time(), target);
  }

  // optional double system_time = 3;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_system_time(), target);
  }

  // optional .hal.MatrixMsg distance = 4;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::distance(this),
        _Internal::distance(this).GetCachedSize(), target, stream);
  }

  // optional .hal.MatrixMsg intensity = 5;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::intensity(this),
        _Internal::intensity(this).GetCachedSize(), target, stream);
  }

  // optional .hal.VectorMsg rotational_position = 6;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::rotational_position(this),
        _Internal::rotational_position(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hal.LidarMsg)
  return target;
}

size_t LidarMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hal.LidarMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional .hal.MatrixMsg distance = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.distance_);
    }

    // optional .hal.MatrixMsg intensity = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.intensity_);
    }

    // optional .hal.VectorMsg rotational_position = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.rotational_position_);
    }

    // optional double device_time = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double system_time = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional int32 id = 1;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LidarMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    LidarMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LidarMsg::GetClassData() const { return &_class_data_; }


void LidarMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<LidarMsg*>(&to_msg);
  auto& from = static_cast<const LidarMsg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hal.LidarMsg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_distance()->::hal::MatrixMsg::MergeFrom(
          from._internal_distance());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_intensity()->::hal::MatrixMsg::MergeFrom(
          from._internal_intensity());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_rotational_position()->::hal::VectorMsg::MergeFrom(
          from._internal_rotational_position());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.device_time_ = from._impl_.device_time_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.system_time_ = from._impl_.system_time_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.id_ = from._impl_.id_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LidarMsg::CopyFrom(const LidarMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hal.LidarMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LidarMsg::IsInitialized() const {
  if (_internal_has_distance()) {
    if (!_impl_.distance_->IsInitialized()) return false;
  }
  if (_internal_has_intensity()) {
    if (!_impl_.intensity_->IsInitialized()) return false;
  }
  return true;
}

void LidarMsg::InternalSwap(LidarMsg* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LidarMsg, _impl_.id_)
      + sizeof(LidarMsg::_impl_.id_)
      - PROTOBUF_FIELD_OFFSET(LidarMsg, _impl_.distance_)>(
          reinterpret_cast<char*>(&_impl_.distance_),
          reinterpret_cast<char*>(&other->_impl_.distance_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LidarMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Lidar_2eproto_getter, &descriptor_table_Lidar_2eproto_once,
      file_level_metadata_Lidar_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace hal
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::hal::LidarMsg*
Arena::CreateMaybeMessage< ::hal::LidarMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hal::LidarMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
