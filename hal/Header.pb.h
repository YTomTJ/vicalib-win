// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Header.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Header_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Header_2eproto

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
#include "CameraModel.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Header_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Header_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Header_2eproto;
namespace hal {
class Header;
struct HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
}  // namespace hal
PROTOBUF_NAMESPACE_OPEN
template<> ::hal::Header* Arena::CreateMaybeMessage<::hal::Header>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace hal {

// ===================================================================

class Header final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hal.Header) */ {
 public:
  inline Header() : Header(nullptr) {}
  ~Header() override;
  explicit PROTOBUF_CONSTEXPR Header(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Header(const Header& from);
  Header(Header&& from) noexcept
    : Header() {
    *this = ::std::move(from);
  }

  inline Header& operator=(const Header& from) {
    CopyFrom(from);
    return *this;
  }
  inline Header& operator=(Header&& from) noexcept {
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
  static const Header& default_instance() {
    return *internal_default_instance();
  }
  static inline const Header* internal_default_instance() {
    return reinterpret_cast<const Header*>(
               &_Header_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Header& a, Header& b) {
    a.Swap(&b);
  }
  inline void Swap(Header* other) {
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
  void UnsafeArenaSwap(Header* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Header* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Header>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Header& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Header& from) {
    Header::MergeImpl(*this, from);
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
  void InternalSwap(Header* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hal.Header";
  }
  protected:
  explicit Header(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDescriptionFieldNumber = 3,
    kCameraModelFieldNumber = 5,
    kDateFieldNumber = 2,
    kVersionFieldNumber = 1,
  };
  // optional string description = 3;
  bool has_description() const;
  private:
  bool _internal_has_description() const;
  public:
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // optional .hal.CameraModelMsg camera_model = 5;
  bool has_camera_model() const;
  private:
  bool _internal_has_camera_model() const;
  public:
  void clear_camera_model();
  const ::hal::CameraModelMsg& camera_model() const;
  PROTOBUF_NODISCARD ::hal::CameraModelMsg* release_camera_model();
  ::hal::CameraModelMsg* mutable_camera_model();
  void set_allocated_camera_model(::hal::CameraModelMsg* camera_model);
  private:
  const ::hal::CameraModelMsg& _internal_camera_model() const;
  ::hal::CameraModelMsg* _internal_mutable_camera_model();
  public:
  void unsafe_arena_set_allocated_camera_model(
      ::hal::CameraModelMsg* camera_model);
  ::hal::CameraModelMsg* unsafe_arena_release_camera_model();

  // optional double date = 2;
  bool has_date() const;
  private:
  bool _internal_has_date() const;
  public:
  void clear_date();
  double date() const;
  void set_date(double value);
  private:
  double _internal_date() const;
  void _internal_set_date(double value);
  public:

  // required uint32 version = 1;
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

  // @@protoc_insertion_point(class_scope:hal.Header)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
    ::hal::CameraModelMsg* camera_model_;
    double date_;
    uint32_t version_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Header_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Header

// required uint32 version = 1;
inline bool Header::_internal_has_version() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Header::has_version() const {
  return _internal_has_version();
}
inline void Header::clear_version() {
  _impl_.version_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline uint32_t Header::_internal_version() const {
  return _impl_.version_;
}
inline uint32_t Header::version() const {
  // @@protoc_insertion_point(field_get:hal.Header.version)
  return _internal_version();
}
inline void Header::_internal_set_version(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.version_ = value;
}
inline void Header::set_version(uint32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:hal.Header.version)
}

// optional double date = 2;
inline bool Header::_internal_has_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Header::has_date() const {
  return _internal_has_date();
}
inline void Header::clear_date() {
  _impl_.date_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline double Header::_internal_date() const {
  return _impl_.date_;
}
inline double Header::date() const {
  // @@protoc_insertion_point(field_get:hal.Header.date)
  return _internal_date();
}
inline void Header::_internal_set_date(double value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.date_ = value;
}
inline void Header::set_date(double value) {
  _internal_set_date(value);
  // @@protoc_insertion_point(field_set:hal.Header.date)
}

// optional string description = 3;
inline bool Header::_internal_has_description() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Header::has_description() const {
  return _internal_has_description();
}
inline void Header::clear_description() {
  _impl_.description_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Header::description() const {
  // @@protoc_insertion_point(field_get:hal.Header.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Header::set_description(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.description_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:hal.Header.description)
}
inline std::string* Header::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:hal.Header.description)
  return _s;
}
inline const std::string& Header::_internal_description() const {
  return _impl_.description_.Get();
}
inline void Header::_internal_set_description(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* Header::_internal_mutable_description() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.description_.Mutable(GetArenaForAllocation());
}
inline std::string* Header::release_description() {
  // @@protoc_insertion_point(field_release:hal.Header.description)
  if (!_internal_has_description()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.description_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Header::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.description_.SetAllocated(description, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:hal.Header.description)
}

// optional .hal.CameraModelMsg camera_model = 5;
inline bool Header::_internal_has_camera_model() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.camera_model_ != nullptr);
  return value;
}
inline bool Header::has_camera_model() const {
  return _internal_has_camera_model();
}
inline const ::hal::CameraModelMsg& Header::_internal_camera_model() const {
  const ::hal::CameraModelMsg* p = _impl_.camera_model_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::CameraModelMsg&>(
      ::hal::_CameraModelMsg_default_instance_);
}
inline const ::hal::CameraModelMsg& Header::camera_model() const {
  // @@protoc_insertion_point(field_get:hal.Header.camera_model)
  return _internal_camera_model();
}
inline void Header::unsafe_arena_set_allocated_camera_model(
    ::hal::CameraModelMsg* camera_model) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.camera_model_);
  }
  _impl_.camera_model_ = camera_model;
  if (camera_model) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Header.camera_model)
}
inline ::hal::CameraModelMsg* Header::release_camera_model() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::hal::CameraModelMsg* temp = _impl_.camera_model_;
  _impl_.camera_model_ = nullptr;
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
inline ::hal::CameraModelMsg* Header::unsafe_arena_release_camera_model() {
  // @@protoc_insertion_point(field_release:hal.Header.camera_model)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::hal::CameraModelMsg* temp = _impl_.camera_model_;
  _impl_.camera_model_ = nullptr;
  return temp;
}
inline ::hal::CameraModelMsg* Header::_internal_mutable_camera_model() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.camera_model_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::CameraModelMsg>(GetArenaForAllocation());
    _impl_.camera_model_ = p;
  }
  return _impl_.camera_model_;
}
inline ::hal::CameraModelMsg* Header::mutable_camera_model() {
  ::hal::CameraModelMsg* _msg = _internal_mutable_camera_model();
  // @@protoc_insertion_point(field_mutable:hal.Header.camera_model)
  return _msg;
}
inline void Header::set_allocated_camera_model(::hal::CameraModelMsg* camera_model) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.camera_model_);
  }
  if (camera_model) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(camera_model));
    if (message_arena != submessage_arena) {
      camera_model = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, camera_model, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.camera_model_ = camera_model;
  // @@protoc_insertion_point(field_set_allocated:hal.Header.camera_model)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hal

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Header_2eproto
