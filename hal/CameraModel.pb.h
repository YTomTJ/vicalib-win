// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CameraModel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CameraModel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CameraModel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Pose.pb.h"
#include "Matrix.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CameraModel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CameraModel_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CameraModel_2eproto;
namespace hal {
class CameraModelMsg;
struct CameraModelMsgDefaultTypeInternal;
extern CameraModelMsgDefaultTypeInternal _CameraModelMsg_default_instance_;
}  // namespace hal
PROTOBUF_NAMESPACE_OPEN
template<> ::hal::CameraModelMsg* Arena::CreateMaybeMessage<::hal::CameraModelMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace hal {

// ===================================================================

class CameraModelMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hal.CameraModelMsg) */ {
 public:
  inline CameraModelMsg() : CameraModelMsg(nullptr) {}
  ~CameraModelMsg() override;
  explicit PROTOBUF_CONSTEXPR CameraModelMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CameraModelMsg(const CameraModelMsg& from);
  CameraModelMsg(CameraModelMsg&& from) noexcept
    : CameraModelMsg() {
    *this = ::std::move(from);
  }

  inline CameraModelMsg& operator=(const CameraModelMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline CameraModelMsg& operator=(CameraModelMsg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CameraModelMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const CameraModelMsg* internal_default_instance() {
    return reinterpret_cast<const CameraModelMsg*>(
               &_CameraModelMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CameraModelMsg& a, CameraModelMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(CameraModelMsg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CameraModelMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CameraModelMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CameraModelMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CameraModelMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CameraModelMsg& from) {
    CameraModelMsg::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CameraModelMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hal.CameraModelMsg";
  }
  protected:
  explicit CameraModelMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kTypeFieldNumber = 9,
    kPoseLocalCameraFieldNumber = 7,
    kParamsFieldNumber = 8,
    kSerialNumberFieldNumber = 3,
    kIndexFieldNumber = 2,
    kVersionFieldNumber = 4,
    kWidthFieldNumber = 5,
    kHeightFieldNumber = 6,
  };
  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional string type = 9;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  const std::string& type() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_type(ArgT0&& arg0, ArgT... args);
  std::string* mutable_type();
  PROTOBUF_NODISCARD std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // optional .hal.PoseMsg pose_local_camera = 7;
  bool has_pose_local_camera() const;
  private:
  bool _internal_has_pose_local_camera() const;
  public:
  void clear_pose_local_camera();
  const ::hal::PoseMsg& pose_local_camera() const;
  PROTOBUF_NODISCARD ::hal::PoseMsg* release_pose_local_camera();
  ::hal::PoseMsg* mutable_pose_local_camera();
  void set_allocated_pose_local_camera(::hal::PoseMsg* pose_local_camera);
  private:
  const ::hal::PoseMsg& _internal_pose_local_camera() const;
  ::hal::PoseMsg* _internal_mutable_pose_local_camera();
  public:
  void unsafe_arena_set_allocated_pose_local_camera(
      ::hal::PoseMsg* pose_local_camera);
  ::hal::PoseMsg* unsafe_arena_release_pose_local_camera();

  // optional .hal.VectorMsg params = 8;
  bool has_params() const;
  private:
  bool _internal_has_params() const;
  public:
  void clear_params();
  const ::hal::VectorMsg& params() const;
  PROTOBUF_NODISCARD ::hal::VectorMsg* release_params();
  ::hal::VectorMsg* mutable_params();
  void set_allocated_params(::hal::VectorMsg* params);
  private:
  const ::hal::VectorMsg& _internal_params() const;
  ::hal::VectorMsg* _internal_mutable_params();
  public:
  void unsafe_arena_set_allocated_params(
      ::hal::VectorMsg* params);
  ::hal::VectorMsg* unsafe_arena_release_params();

  // optional int64 serial_number = 3;
  bool has_serial_number() const;
  private:
  bool _internal_has_serial_number() const;
  public:
  void clear_serial_number();
  int64_t serial_number() const;
  void set_serial_number(int64_t value);
  private:
  int64_t _internal_serial_number() const;
  void _internal_set_serial_number(int64_t value);
  public:

  // optional int32 index = 2;
  bool has_index() const;
  private:
  bool _internal_has_index() const;
  public:
  void clear_index();
  int32_t index() const;
  void set_index(int32_t value);
  private:
  int32_t _internal_index() const;
  void _internal_set_index(int32_t value);
  public:

  // optional uint32 version = 4;
  bool has_version() const;
  private:
  bool _internal_has_version() const;
  public:
  void clear_version();
  uint32_t version() const;
  void set_version(uint32_t value);
  private:
  uint32_t _internal_version() const;
  void _internal_set_version(uint32_t value);
  public:

  // optional uint32 width = 5;
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  uint32_t width() const;
  void set_width(uint32_t value);
  private:
  uint32_t _internal_width() const;
  void _internal_set_width(uint32_t value);
  public:

  // optional uint32 height = 6;
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  uint32_t height() const;
  void set_height(uint32_t value);
  private:
  uint32_t _internal_height() const;
  void _internal_set_height(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:hal.CameraModelMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
    ::hal::PoseMsg* pose_local_camera_;
    ::hal::VectorMsg* params_;
    int64_t serial_number_;
    int32_t index_;
    uint32_t version_;
    uint32_t width_;
    uint32_t height_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CameraModel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CameraModelMsg

// optional string name = 1;
inline bool CameraModelMsg::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CameraModelMsg::has_name() const {
  return _internal_has_name();
}
inline void CameraModelMsg::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CameraModelMsg::name() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CameraModelMsg::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.name)
}
inline std::string* CameraModelMsg::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:hal.CameraModelMsg.name)
  return _s;
}
inline const std::string& CameraModelMsg::_internal_name() const {
  return _impl_.name_.Get();
}
inline void CameraModelMsg::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* CameraModelMsg::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* CameraModelMsg::release_name() {
  // @@protoc_insertion_point(field_release:hal.CameraModelMsg.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CameraModelMsg::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:hal.CameraModelMsg.name)
}

// optional int32 index = 2;
inline bool CameraModelMsg::_internal_has_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CameraModelMsg::has_index() const {
  return _internal_has_index();
}
inline void CameraModelMsg::clear_index() {
  _impl_.index_ = 0;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline int32_t CameraModelMsg::_internal_index() const {
  return _impl_.index_;
}
inline int32_t CameraModelMsg::index() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.index)
  return _internal_index();
}
inline void CameraModelMsg::_internal_set_index(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.index_ = value;
}
inline void CameraModelMsg::set_index(int32_t value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.index)
}

// optional int64 serial_number = 3;
inline bool CameraModelMsg::_internal_has_serial_number() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CameraModelMsg::has_serial_number() const {
  return _internal_has_serial_number();
}
inline void CameraModelMsg::clear_serial_number() {
  _impl_.serial_number_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline int64_t CameraModelMsg::_internal_serial_number() const {
  return _impl_.serial_number_;
}
inline int64_t CameraModelMsg::serial_number() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.serial_number)
  return _internal_serial_number();
}
inline void CameraModelMsg::_internal_set_serial_number(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.serial_number_ = value;
}
inline void CameraModelMsg::set_serial_number(int64_t value) {
  _internal_set_serial_number(value);
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.serial_number)
}

// optional uint32 version = 4;
inline bool CameraModelMsg::_internal_has_version() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool CameraModelMsg::has_version() const {
  return _internal_has_version();
}
inline void CameraModelMsg::clear_version() {
  _impl_.version_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline uint32_t CameraModelMsg::_internal_version() const {
  return _impl_.version_;
}
inline uint32_t CameraModelMsg::version() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.version)
  return _internal_version();
}
inline void CameraModelMsg::_internal_set_version(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.version_ = value;
}
inline void CameraModelMsg::set_version(uint32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.version)
}

// optional uint32 width = 5;
inline bool CameraModelMsg::_internal_has_width() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool CameraModelMsg::has_width() const {
  return _internal_has_width();
}
inline void CameraModelMsg::clear_width() {
  _impl_.width_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline uint32_t CameraModelMsg::_internal_width() const {
  return _impl_.width_;
}
inline uint32_t CameraModelMsg::width() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.width)
  return _internal_width();
}
inline void CameraModelMsg::_internal_set_width(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.width_ = value;
}
inline void CameraModelMsg::set_width(uint32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.width)
}

// optional uint32 height = 6;
inline bool CameraModelMsg::_internal_has_height() const {
  bool value = (_impl_._has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool CameraModelMsg::has_height() const {
  return _internal_has_height();
}
inline void CameraModelMsg::clear_height() {
  _impl_.height_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000100u;
}
inline uint32_t CameraModelMsg::_internal_height() const {
  return _impl_.height_;
}
inline uint32_t CameraModelMsg::height() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.height)
  return _internal_height();
}
inline void CameraModelMsg::_internal_set_height(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000100u;
  _impl_.height_ = value;
}
inline void CameraModelMsg::set_height(uint32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.height)
}

// optional .hal.PoseMsg pose_local_camera = 7;
inline bool CameraModelMsg::_internal_has_pose_local_camera() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.pose_local_camera_ != nullptr);
  return value;
}
inline bool CameraModelMsg::has_pose_local_camera() const {
  return _internal_has_pose_local_camera();
}
inline const ::hal::PoseMsg& CameraModelMsg::_internal_pose_local_camera() const {
  const ::hal::PoseMsg* p = _impl_.pose_local_camera_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::PoseMsg&>(
      ::hal::_PoseMsg_default_instance_);
}
inline const ::hal::PoseMsg& CameraModelMsg::pose_local_camera() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.pose_local_camera)
  return _internal_pose_local_camera();
}
inline void CameraModelMsg::unsafe_arena_set_allocated_pose_local_camera(
    ::hal::PoseMsg* pose_local_camera) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pose_local_camera_);
  }
  _impl_.pose_local_camera_ = pose_local_camera;
  if (pose_local_camera) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.CameraModelMsg.pose_local_camera)
}
inline ::hal::PoseMsg* CameraModelMsg::release_pose_local_camera() {
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::hal::PoseMsg* temp = _impl_.pose_local_camera_;
  _impl_.pose_local_camera_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::hal::PoseMsg* CameraModelMsg::unsafe_arena_release_pose_local_camera() {
  // @@protoc_insertion_point(field_release:hal.CameraModelMsg.pose_local_camera)
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::hal::PoseMsg* temp = _impl_.pose_local_camera_;
  _impl_.pose_local_camera_ = nullptr;
  return temp;
}
inline ::hal::PoseMsg* CameraModelMsg::_internal_mutable_pose_local_camera() {
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.pose_local_camera_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::PoseMsg>(GetArenaForAllocation());
    _impl_.pose_local_camera_ = p;
  }
  return _impl_.pose_local_camera_;
}
inline ::hal::PoseMsg* CameraModelMsg::mutable_pose_local_camera() {
  ::hal::PoseMsg* _msg = _internal_mutable_pose_local_camera();
  // @@protoc_insertion_point(field_mutable:hal.CameraModelMsg.pose_local_camera)
  return _msg;
}
inline void CameraModelMsg::set_allocated_pose_local_camera(::hal::PoseMsg* pose_local_camera) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pose_local_camera_);
  }
  if (pose_local_camera) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_local_camera));
    if (message_arena != submessage_arena) {
      pose_local_camera = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose_local_camera, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.pose_local_camera_ = pose_local_camera;
  // @@protoc_insertion_point(field_set_allocated:hal.CameraModelMsg.pose_local_camera)
}

// optional .hal.VectorMsg params = 8;
inline bool CameraModelMsg::_internal_has_params() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.params_ != nullptr);
  return value;
}
inline bool CameraModelMsg::has_params() const {
  return _internal_has_params();
}
inline const ::hal::VectorMsg& CameraModelMsg::_internal_params() const {
  const ::hal::VectorMsg* p = _impl_.params_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::VectorMsg&>(
      ::hal::_VectorMsg_default_instance_);
}
inline const ::hal::VectorMsg& CameraModelMsg::params() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.params)
  return _internal_params();
}
inline void CameraModelMsg::unsafe_arena_set_allocated_params(
    ::hal::VectorMsg* params) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  _impl_.params_ = params;
  if (params) {
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.CameraModelMsg.params)
}
inline ::hal::VectorMsg* CameraModelMsg::release_params() {
  _impl_._has_bits_[0] &= ~0x00000008u;
  ::hal::VectorMsg* temp = _impl_.params_;
  _impl_.params_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::hal::VectorMsg* CameraModelMsg::unsafe_arena_release_params() {
  // @@protoc_insertion_point(field_release:hal.CameraModelMsg.params)
  _impl_._has_bits_[0] &= ~0x00000008u;
  ::hal::VectorMsg* temp = _impl_.params_;
  _impl_.params_ = nullptr;
  return temp;
}
inline ::hal::VectorMsg* CameraModelMsg::_internal_mutable_params() {
  _impl_._has_bits_[0] |= 0x00000008u;
  if (_impl_.params_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::VectorMsg>(GetArenaForAllocation());
    _impl_.params_ = p;
  }
  return _impl_.params_;
}
inline ::hal::VectorMsg* CameraModelMsg::mutable_params() {
  ::hal::VectorMsg* _msg = _internal_mutable_params();
  // @@protoc_insertion_point(field_mutable:hal.CameraModelMsg.params)
  return _msg;
}
inline void CameraModelMsg::set_allocated_params(::hal::VectorMsg* params) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  if (params) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(params));
    if (message_arena != submessage_arena) {
      params = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, params, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  _impl_.params_ = params;
  // @@protoc_insertion_point(field_set_allocated:hal.CameraModelMsg.params)
}

// optional string type = 9;
inline bool CameraModelMsg::_internal_has_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CameraModelMsg::has_type() const {
  return _internal_has_type();
}
inline void CameraModelMsg::clear_type() {
  _impl_.type_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& CameraModelMsg::type() const {
  // @@protoc_insertion_point(field_get:hal.CameraModelMsg.type)
  return _internal_type();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CameraModelMsg::set_type(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.type_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:hal.CameraModelMsg.type)
}
inline std::string* CameraModelMsg::mutable_type() {
  std::string* _s = _internal_mutable_type();
  // @@protoc_insertion_point(field_mutable:hal.CameraModelMsg.type)
  return _s;
}
inline const std::string& CameraModelMsg::_internal_type() const {
  return _impl_.type_.Get();
}
inline void CameraModelMsg::_internal_set_type(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.type_.Set(value, GetArenaForAllocation());
}
inline std::string* CameraModelMsg::_internal_mutable_type() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.type_.Mutable(GetArenaForAllocation());
}
inline std::string* CameraModelMsg::release_type() {
  // @@protoc_insertion_point(field_release:hal.CameraModelMsg.type)
  if (!_internal_has_type()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.type_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.type_.IsDefault()) {
    _impl_.type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CameraModelMsg::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.type_.SetAllocated(type, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.type_.IsDefault()) {
    _impl_.type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:hal.CameraModelMsg.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hal

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CameraModel_2eproto
