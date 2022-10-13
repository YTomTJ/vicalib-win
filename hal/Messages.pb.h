// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Messages.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Messages_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Messages_2eproto

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
#include "Camera.pb.h"
#include "Imu.pb.h"
#include "Pose.pb.h"
#include "Lidar.pb.h"
#include "Gamepad.pb.h"
#include "Command.pb.h"
#include "Car.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Messages_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Messages_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Messages_2eproto;
namespace hal {
class Msg;
struct MsgDefaultTypeInternal;
extern MsgDefaultTypeInternal _Msg_default_instance_;
}  // namespace hal
PROTOBUF_NAMESPACE_OPEN
template<> ::hal::Msg* Arena::CreateMaybeMessage<::hal::Msg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace hal {

// ===================================================================

class Msg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hal.Msg) */ {
 public:
  inline Msg() : Msg(nullptr) {}
  ~Msg() override;
  explicit PROTOBUF_CONSTEXPR Msg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Msg(const Msg& from);
  Msg(Msg&& from) noexcept
    : Msg() {
    *this = ::std::move(from);
  }

  inline Msg& operator=(const Msg& from) {
    CopyFrom(from);
    return *this;
  }
  inline Msg& operator=(Msg&& from) noexcept {
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
  static const Msg& default_instance() {
    return *internal_default_instance();
  }
  static inline const Msg* internal_default_instance() {
    return reinterpret_cast<const Msg*>(
               &_Msg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Msg& a, Msg& b) {
    a.Swap(&b);
  }
  inline void Swap(Msg* other) {
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
  void UnsafeArenaSwap(Msg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Msg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Msg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Msg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Msg& from) {
    Msg::MergeImpl(*this, from);
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
  void InternalSwap(Msg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hal.Msg";
  }
  protected:
  explicit Msg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCameraFieldNumber = 2,
    kImuFieldNumber = 3,
    kPoseFieldNumber = 4,
    kLidarFieldNumber = 5,
    kGamepadFieldNumber = 6,
    kCommandFieldNumber = 7,
    kVehicleStateFieldNumber = 8,
    kTimestampFieldNumber = 1,
  };
  // optional .hal.CameraMsg camera = 2;
  bool has_camera() const;
  private:
  bool _internal_has_camera() const;
  public:
  void clear_camera();
  const ::hal::CameraMsg& camera() const;
  PROTOBUF_NODISCARD ::hal::CameraMsg* release_camera();
  ::hal::CameraMsg* mutable_camera();
  void set_allocated_camera(::hal::CameraMsg* camera);
  private:
  const ::hal::CameraMsg& _internal_camera() const;
  ::hal::CameraMsg* _internal_mutable_camera();
  public:
  void unsafe_arena_set_allocated_camera(
      ::hal::CameraMsg* camera);
  ::hal::CameraMsg* unsafe_arena_release_camera();

  // optional .hal.ImuMsg imu = 3;
  bool has_imu() const;
  private:
  bool _internal_has_imu() const;
  public:
  void clear_imu();
  const ::hal::ImuMsg& imu() const;
  PROTOBUF_NODISCARD ::hal::ImuMsg* release_imu();
  ::hal::ImuMsg* mutable_imu();
  void set_allocated_imu(::hal::ImuMsg* imu);
  private:
  const ::hal::ImuMsg& _internal_imu() const;
  ::hal::ImuMsg* _internal_mutable_imu();
  public:
  void unsafe_arena_set_allocated_imu(
      ::hal::ImuMsg* imu);
  ::hal::ImuMsg* unsafe_arena_release_imu();

  // optional .hal.PoseMsg pose = 4;
  bool has_pose() const;
  private:
  bool _internal_has_pose() const;
  public:
  void clear_pose();
  const ::hal::PoseMsg& pose() const;
  PROTOBUF_NODISCARD ::hal::PoseMsg* release_pose();
  ::hal::PoseMsg* mutable_pose();
  void set_allocated_pose(::hal::PoseMsg* pose);
  private:
  const ::hal::PoseMsg& _internal_pose() const;
  ::hal::PoseMsg* _internal_mutable_pose();
  public:
  void unsafe_arena_set_allocated_pose(
      ::hal::PoseMsg* pose);
  ::hal::PoseMsg* unsafe_arena_release_pose();

  // optional .hal.LidarMsg lidar = 5;
  bool has_lidar() const;
  private:
  bool _internal_has_lidar() const;
  public:
  void clear_lidar();
  const ::hal::LidarMsg& lidar() const;
  PROTOBUF_NODISCARD ::hal::LidarMsg* release_lidar();
  ::hal::LidarMsg* mutable_lidar();
  void set_allocated_lidar(::hal::LidarMsg* lidar);
  private:
  const ::hal::LidarMsg& _internal_lidar() const;
  ::hal::LidarMsg* _internal_mutable_lidar();
  public:
  void unsafe_arena_set_allocated_lidar(
      ::hal::LidarMsg* lidar);
  ::hal::LidarMsg* unsafe_arena_release_lidar();

  // optional .hal.GamepadMsg gamepad = 6;
  bool has_gamepad() const;
  private:
  bool _internal_has_gamepad() const;
  public:
  void clear_gamepad();
  const ::hal::GamepadMsg& gamepad() const;
  PROTOBUF_NODISCARD ::hal::GamepadMsg* release_gamepad();
  ::hal::GamepadMsg* mutable_gamepad();
  void set_allocated_gamepad(::hal::GamepadMsg* gamepad);
  private:
  const ::hal::GamepadMsg& _internal_gamepad() const;
  ::hal::GamepadMsg* _internal_mutable_gamepad();
  public:
  void unsafe_arena_set_allocated_gamepad(
      ::hal::GamepadMsg* gamepad);
  ::hal::GamepadMsg* unsafe_arena_release_gamepad();

  // optional .hal.CommanderMsg command = 7;
  bool has_command() const;
  private:
  bool _internal_has_command() const;
  public:
  void clear_command();
  const ::hal::CommanderMsg& command() const;
  PROTOBUF_NODISCARD ::hal::CommanderMsg* release_command();
  ::hal::CommanderMsg* mutable_command();
  void set_allocated_command(::hal::CommanderMsg* command);
  private:
  const ::hal::CommanderMsg& _internal_command() const;
  ::hal::CommanderMsg* _internal_mutable_command();
  public:
  void unsafe_arena_set_allocated_command(
      ::hal::CommanderMsg* command);
  ::hal::CommanderMsg* unsafe_arena_release_command();

  // optional .hal.CarStateMsg vehicle_state = 8;
  bool has_vehicle_state() const;
  private:
  bool _internal_has_vehicle_state() const;
  public:
  void clear_vehicle_state();
  const ::hal::CarStateMsg& vehicle_state() const;
  PROTOBUF_NODISCARD ::hal::CarStateMsg* release_vehicle_state();
  ::hal::CarStateMsg* mutable_vehicle_state();
  void set_allocated_vehicle_state(::hal::CarStateMsg* vehicle_state);
  private:
  const ::hal::CarStateMsg& _internal_vehicle_state() const;
  ::hal::CarStateMsg* _internal_mutable_vehicle_state();
  public:
  void unsafe_arena_set_allocated_vehicle_state(
      ::hal::CarStateMsg* vehicle_state);
  ::hal::CarStateMsg* unsafe_arena_release_vehicle_state();

  // optional double timestamp = 1;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  double timestamp() const;
  void set_timestamp(double value);
  private:
  double _internal_timestamp() const;
  void _internal_set_timestamp(double value);
  public:

  // @@protoc_insertion_point(class_scope:hal.Msg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::hal::CameraMsg* camera_;
    ::hal::ImuMsg* imu_;
    ::hal::PoseMsg* pose_;
    ::hal::LidarMsg* lidar_;
    ::hal::GamepadMsg* gamepad_;
    ::hal::CommanderMsg* command_;
    ::hal::CarStateMsg* vehicle_state_;
    double timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Messages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Msg

// optional double timestamp = 1;
inline bool Msg::_internal_has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Msg::has_timestamp() const {
  return _internal_has_timestamp();
}
inline void Msg::clear_timestamp() {
  _impl_.timestamp_ = 0;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline double Msg::_internal_timestamp() const {
  return _impl_.timestamp_;
}
inline double Msg::timestamp() const {
  // @@protoc_insertion_point(field_get:hal.Msg.timestamp)
  return _internal_timestamp();
}
inline void Msg::_internal_set_timestamp(double value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.timestamp_ = value;
}
inline void Msg::set_timestamp(double value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:hal.Msg.timestamp)
}

// optional .hal.CameraMsg camera = 2;
inline bool Msg::_internal_has_camera() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.camera_ != nullptr);
  return value;
}
inline bool Msg::has_camera() const {
  return _internal_has_camera();
}
inline const ::hal::CameraMsg& Msg::_internal_camera() const {
  const ::hal::CameraMsg* p = _impl_.camera_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::CameraMsg&>(
      ::hal::_CameraMsg_default_instance_);
}
inline const ::hal::CameraMsg& Msg::camera() const {
  // @@protoc_insertion_point(field_get:hal.Msg.camera)
  return _internal_camera();
}
inline void Msg::unsafe_arena_set_allocated_camera(
    ::hal::CameraMsg* camera) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.camera_);
  }
  _impl_.camera_ = camera;
  if (camera) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.camera)
}
inline ::hal::CameraMsg* Msg::release_camera() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::hal::CameraMsg* temp = _impl_.camera_;
  _impl_.camera_ = nullptr;
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
inline ::hal::CameraMsg* Msg::unsafe_arena_release_camera() {
  // @@protoc_insertion_point(field_release:hal.Msg.camera)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::hal::CameraMsg* temp = _impl_.camera_;
  _impl_.camera_ = nullptr;
  return temp;
}
inline ::hal::CameraMsg* Msg::_internal_mutable_camera() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.camera_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::CameraMsg>(GetArenaForAllocation());
    _impl_.camera_ = p;
  }
  return _impl_.camera_;
}
inline ::hal::CameraMsg* Msg::mutable_camera() {
  ::hal::CameraMsg* _msg = _internal_mutable_camera();
  // @@protoc_insertion_point(field_mutable:hal.Msg.camera)
  return _msg;
}
inline void Msg::set_allocated_camera(::hal::CameraMsg* camera) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.camera_);
  }
  if (camera) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(camera));
    if (message_arena != submessage_arena) {
      camera = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, camera, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.camera_ = camera;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.camera)
}

// optional .hal.ImuMsg imu = 3;
inline bool Msg::_internal_has_imu() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.imu_ != nullptr);
  return value;
}
inline bool Msg::has_imu() const {
  return _internal_has_imu();
}
inline const ::hal::ImuMsg& Msg::_internal_imu() const {
  const ::hal::ImuMsg* p = _impl_.imu_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::ImuMsg&>(
      ::hal::_ImuMsg_default_instance_);
}
inline const ::hal::ImuMsg& Msg::imu() const {
  // @@protoc_insertion_point(field_get:hal.Msg.imu)
  return _internal_imu();
}
inline void Msg::unsafe_arena_set_allocated_imu(
    ::hal::ImuMsg* imu) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.imu_);
  }
  _impl_.imu_ = imu;
  if (imu) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.imu)
}
inline ::hal::ImuMsg* Msg::release_imu() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::hal::ImuMsg* temp = _impl_.imu_;
  _impl_.imu_ = nullptr;
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
inline ::hal::ImuMsg* Msg::unsafe_arena_release_imu() {
  // @@protoc_insertion_point(field_release:hal.Msg.imu)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::hal::ImuMsg* temp = _impl_.imu_;
  _impl_.imu_ = nullptr;
  return temp;
}
inline ::hal::ImuMsg* Msg::_internal_mutable_imu() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.imu_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::ImuMsg>(GetArenaForAllocation());
    _impl_.imu_ = p;
  }
  return _impl_.imu_;
}
inline ::hal::ImuMsg* Msg::mutable_imu() {
  ::hal::ImuMsg* _msg = _internal_mutable_imu();
  // @@protoc_insertion_point(field_mutable:hal.Msg.imu)
  return _msg;
}
inline void Msg::set_allocated_imu(::hal::ImuMsg* imu) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.imu_);
  }
  if (imu) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(imu));
    if (message_arena != submessage_arena) {
      imu = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, imu, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.imu_ = imu;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.imu)
}

// optional .hal.PoseMsg pose = 4;
inline bool Msg::_internal_has_pose() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.pose_ != nullptr);
  return value;
}
inline bool Msg::has_pose() const {
  return _internal_has_pose();
}
inline const ::hal::PoseMsg& Msg::_internal_pose() const {
  const ::hal::PoseMsg* p = _impl_.pose_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::PoseMsg&>(
      ::hal::_PoseMsg_default_instance_);
}
inline const ::hal::PoseMsg& Msg::pose() const {
  // @@protoc_insertion_point(field_get:hal.Msg.pose)
  return _internal_pose();
}
inline void Msg::unsafe_arena_set_allocated_pose(
    ::hal::PoseMsg* pose) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pose_);
  }
  _impl_.pose_ = pose;
  if (pose) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.pose)
}
inline ::hal::PoseMsg* Msg::release_pose() {
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::hal::PoseMsg* temp = _impl_.pose_;
  _impl_.pose_ = nullptr;
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
inline ::hal::PoseMsg* Msg::unsafe_arena_release_pose() {
  // @@protoc_insertion_point(field_release:hal.Msg.pose)
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::hal::PoseMsg* temp = _impl_.pose_;
  _impl_.pose_ = nullptr;
  return temp;
}
inline ::hal::PoseMsg* Msg::_internal_mutable_pose() {
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::PoseMsg>(GetArenaForAllocation());
    _impl_.pose_ = p;
  }
  return _impl_.pose_;
}
inline ::hal::PoseMsg* Msg::mutable_pose() {
  ::hal::PoseMsg* _msg = _internal_mutable_pose();
  // @@protoc_insertion_point(field_mutable:hal.Msg.pose)
  return _msg;
}
inline void Msg::set_allocated_pose(::hal::PoseMsg* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose));
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.pose)
}

// optional .hal.LidarMsg lidar = 5;
inline bool Msg::_internal_has_lidar() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.lidar_ != nullptr);
  return value;
}
inline bool Msg::has_lidar() const {
  return _internal_has_lidar();
}
inline const ::hal::LidarMsg& Msg::_internal_lidar() const {
  const ::hal::LidarMsg* p = _impl_.lidar_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::LidarMsg&>(
      ::hal::_LidarMsg_default_instance_);
}
inline const ::hal::LidarMsg& Msg::lidar() const {
  // @@protoc_insertion_point(field_get:hal.Msg.lidar)
  return _internal_lidar();
}
inline void Msg::unsafe_arena_set_allocated_lidar(
    ::hal::LidarMsg* lidar) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.lidar_);
  }
  _impl_.lidar_ = lidar;
  if (lidar) {
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.lidar)
}
inline ::hal::LidarMsg* Msg::release_lidar() {
  _impl_._has_bits_[0] &= ~0x00000008u;
  ::hal::LidarMsg* temp = _impl_.lidar_;
  _impl_.lidar_ = nullptr;
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
inline ::hal::LidarMsg* Msg::unsafe_arena_release_lidar() {
  // @@protoc_insertion_point(field_release:hal.Msg.lidar)
  _impl_._has_bits_[0] &= ~0x00000008u;
  ::hal::LidarMsg* temp = _impl_.lidar_;
  _impl_.lidar_ = nullptr;
  return temp;
}
inline ::hal::LidarMsg* Msg::_internal_mutable_lidar() {
  _impl_._has_bits_[0] |= 0x00000008u;
  if (_impl_.lidar_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::LidarMsg>(GetArenaForAllocation());
    _impl_.lidar_ = p;
  }
  return _impl_.lidar_;
}
inline ::hal::LidarMsg* Msg::mutable_lidar() {
  ::hal::LidarMsg* _msg = _internal_mutable_lidar();
  // @@protoc_insertion_point(field_mutable:hal.Msg.lidar)
  return _msg;
}
inline void Msg::set_allocated_lidar(::hal::LidarMsg* lidar) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.lidar_);
  }
  if (lidar) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(lidar));
    if (message_arena != submessage_arena) {
      lidar = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, lidar, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  _impl_.lidar_ = lidar;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.lidar)
}

// optional .hal.GamepadMsg gamepad = 6;
inline bool Msg::_internal_has_gamepad() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.gamepad_ != nullptr);
  return value;
}
inline bool Msg::has_gamepad() const {
  return _internal_has_gamepad();
}
inline const ::hal::GamepadMsg& Msg::_internal_gamepad() const {
  const ::hal::GamepadMsg* p = _impl_.gamepad_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::GamepadMsg&>(
      ::hal::_GamepadMsg_default_instance_);
}
inline const ::hal::GamepadMsg& Msg::gamepad() const {
  // @@protoc_insertion_point(field_get:hal.Msg.gamepad)
  return _internal_gamepad();
}
inline void Msg::unsafe_arena_set_allocated_gamepad(
    ::hal::GamepadMsg* gamepad) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.gamepad_);
  }
  _impl_.gamepad_ = gamepad;
  if (gamepad) {
    _impl_._has_bits_[0] |= 0x00000010u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000010u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.gamepad)
}
inline ::hal::GamepadMsg* Msg::release_gamepad() {
  _impl_._has_bits_[0] &= ~0x00000010u;
  ::hal::GamepadMsg* temp = _impl_.gamepad_;
  _impl_.gamepad_ = nullptr;
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
inline ::hal::GamepadMsg* Msg::unsafe_arena_release_gamepad() {
  // @@protoc_insertion_point(field_release:hal.Msg.gamepad)
  _impl_._has_bits_[0] &= ~0x00000010u;
  ::hal::GamepadMsg* temp = _impl_.gamepad_;
  _impl_.gamepad_ = nullptr;
  return temp;
}
inline ::hal::GamepadMsg* Msg::_internal_mutable_gamepad() {
  _impl_._has_bits_[0] |= 0x00000010u;
  if (_impl_.gamepad_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::GamepadMsg>(GetArenaForAllocation());
    _impl_.gamepad_ = p;
  }
  return _impl_.gamepad_;
}
inline ::hal::GamepadMsg* Msg::mutable_gamepad() {
  ::hal::GamepadMsg* _msg = _internal_mutable_gamepad();
  // @@protoc_insertion_point(field_mutable:hal.Msg.gamepad)
  return _msg;
}
inline void Msg::set_allocated_gamepad(::hal::GamepadMsg* gamepad) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.gamepad_);
  }
  if (gamepad) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(gamepad));
    if (message_arena != submessage_arena) {
      gamepad = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, gamepad, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000010u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000010u;
  }
  _impl_.gamepad_ = gamepad;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.gamepad)
}

// optional .hal.CommanderMsg command = 7;
inline bool Msg::_internal_has_command() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.command_ != nullptr);
  return value;
}
inline bool Msg::has_command() const {
  return _internal_has_command();
}
inline const ::hal::CommanderMsg& Msg::_internal_command() const {
  const ::hal::CommanderMsg* p = _impl_.command_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::CommanderMsg&>(
      ::hal::_CommanderMsg_default_instance_);
}
inline const ::hal::CommanderMsg& Msg::command() const {
  // @@protoc_insertion_point(field_get:hal.Msg.command)
  return _internal_command();
}
inline void Msg::unsafe_arena_set_allocated_command(
    ::hal::CommanderMsg* command) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.command_);
  }
  _impl_.command_ = command;
  if (command) {
    _impl_._has_bits_[0] |= 0x00000020u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000020u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.command)
}
inline ::hal::CommanderMsg* Msg::release_command() {
  _impl_._has_bits_[0] &= ~0x00000020u;
  ::hal::CommanderMsg* temp = _impl_.command_;
  _impl_.command_ = nullptr;
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
inline ::hal::CommanderMsg* Msg::unsafe_arena_release_command() {
  // @@protoc_insertion_point(field_release:hal.Msg.command)
  _impl_._has_bits_[0] &= ~0x00000020u;
  ::hal::CommanderMsg* temp = _impl_.command_;
  _impl_.command_ = nullptr;
  return temp;
}
inline ::hal::CommanderMsg* Msg::_internal_mutable_command() {
  _impl_._has_bits_[0] |= 0x00000020u;
  if (_impl_.command_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::CommanderMsg>(GetArenaForAllocation());
    _impl_.command_ = p;
  }
  return _impl_.command_;
}
inline ::hal::CommanderMsg* Msg::mutable_command() {
  ::hal::CommanderMsg* _msg = _internal_mutable_command();
  // @@protoc_insertion_point(field_mutable:hal.Msg.command)
  return _msg;
}
inline void Msg::set_allocated_command(::hal::CommanderMsg* command) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.command_);
  }
  if (command) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(command));
    if (message_arena != submessage_arena) {
      command = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, command, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000020u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000020u;
  }
  _impl_.command_ = command;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.command)
}

// optional .hal.CarStateMsg vehicle_state = 8;
inline bool Msg::_internal_has_vehicle_state() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.vehicle_state_ != nullptr);
  return value;
}
inline bool Msg::has_vehicle_state() const {
  return _internal_has_vehicle_state();
}
inline const ::hal::CarStateMsg& Msg::_internal_vehicle_state() const {
  const ::hal::CarStateMsg* p = _impl_.vehicle_state_;
  return p != nullptr ? *p : reinterpret_cast<const ::hal::CarStateMsg&>(
      ::hal::_CarStateMsg_default_instance_);
}
inline const ::hal::CarStateMsg& Msg::vehicle_state() const {
  // @@protoc_insertion_point(field_get:hal.Msg.vehicle_state)
  return _internal_vehicle_state();
}
inline void Msg::unsafe_arena_set_allocated_vehicle_state(
    ::hal::CarStateMsg* vehicle_state) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.vehicle_state_);
  }
  _impl_.vehicle_state_ = vehicle_state;
  if (vehicle_state) {
    _impl_._has_bits_[0] |= 0x00000040u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000040u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:hal.Msg.vehicle_state)
}
inline ::hal::CarStateMsg* Msg::release_vehicle_state() {
  _impl_._has_bits_[0] &= ~0x00000040u;
  ::hal::CarStateMsg* temp = _impl_.vehicle_state_;
  _impl_.vehicle_state_ = nullptr;
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
inline ::hal::CarStateMsg* Msg::unsafe_arena_release_vehicle_state() {
  // @@protoc_insertion_point(field_release:hal.Msg.vehicle_state)
  _impl_._has_bits_[0] &= ~0x00000040u;
  ::hal::CarStateMsg* temp = _impl_.vehicle_state_;
  _impl_.vehicle_state_ = nullptr;
  return temp;
}
inline ::hal::CarStateMsg* Msg::_internal_mutable_vehicle_state() {
  _impl_._has_bits_[0] |= 0x00000040u;
  if (_impl_.vehicle_state_ == nullptr) {
    auto* p = CreateMaybeMessage<::hal::CarStateMsg>(GetArenaForAllocation());
    _impl_.vehicle_state_ = p;
  }
  return _impl_.vehicle_state_;
}
inline ::hal::CarStateMsg* Msg::mutable_vehicle_state() {
  ::hal::CarStateMsg* _msg = _internal_mutable_vehicle_state();
  // @@protoc_insertion_point(field_mutable:hal.Msg.vehicle_state)
  return _msg;
}
inline void Msg::set_allocated_vehicle_state(::hal::CarStateMsg* vehicle_state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.vehicle_state_);
  }
  if (vehicle_state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(vehicle_state));
    if (message_arena != submessage_arena) {
      vehicle_state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, vehicle_state, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000040u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000040u;
  }
  _impl_.vehicle_state_ = vehicle_state;
  // @@protoc_insertion_point(field_set_allocated:hal.Msg.vehicle_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hal

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Messages_2eproto