// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Image.proto

#include "Image.pb.h"

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
PROTOBUF_CONSTEXPR ImageInfoMsg::ImageInfoMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.exposure_)*/0
  , /*decltype(_impl_.shutter_)*/0
  , /*decltype(_impl_.gain_)*/0
  , /*decltype(_impl_.gamma_)*/0
  , /*decltype(_impl_.baseline_)*/0
  , /*decltype(_impl_.focal_length_)*/0} {}
struct ImageInfoMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ImageInfoMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ImageInfoMsgDefaultTypeInternal() {}
  union {
    ImageInfoMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ImageInfoMsgDefaultTypeInternal _ImageInfoMsg_default_instance_;
PROTOBUF_CONSTEXPR ImageMsg::ImageMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.info_)*/nullptr
  , /*decltype(_impl_.width_)*/0u
  , /*decltype(_impl_.height_)*/0u
  , /*decltype(_impl_.timestamp_)*/0
  , /*decltype(_impl_.serial_number_)*/uint64_t{0u}
  , /*decltype(_impl_.type_)*/5121
  , /*decltype(_impl_.format_)*/6407} {}
struct ImageMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ImageMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ImageMsgDefaultTypeInternal() {}
  union {
    ImageMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ImageMsgDefaultTypeInternal _ImageMsg_default_instance_;
}  // namespace hal
static ::_pb::Metadata file_level_metadata_Image_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_Image_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Image_2eproto = nullptr;

const uint32_t TableStruct_Image_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_.exposure_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_.shutter_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_.gain_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_.gamma_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_.baseline_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageInfoMsg, _impl_.focal_length_),
  0,
  1,
  2,
  3,
  4,
  5,
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.width_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.height_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.data_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.format_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.info_),
  PROTOBUF_FIELD_OFFSET(::hal::ImageMsg, _impl_.serial_number_),
  2,
  3,
  0,
  6,
  7,
  4,
  1,
  5,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, -1, sizeof(::hal::ImageInfoMsg)},
  { 18, 32, -1, sizeof(::hal::ImageMsg)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::hal::_ImageInfoMsg_default_instance_._instance,
  &::hal::_ImageMsg_default_instance_._instance,
};

const char descriptor_table_protodef_Image_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Image.proto\022\003hal\"v\n\014ImageInfoMsg\022\020\n\010ex"
  "posure\030\001 \001(\001\022\017\n\007shutter\030\002 \001(\001\022\014\n\004gain\030\003 "
  "\001(\001\022\r\n\005gamma\030\004 \001(\001\022\020\n\010baseline\0302 \001(\001\022\024\n\014"
  "focal_length\0303 \001(\001\"\322\001\n\010ImageMsg\022\r\n\005width"
  "\030\001 \001(\r\022\016\n\006height\030\002 \001(\r\022\014\n\004data\030\003 \001(\014\022)\n\004"
  "type\030\004 \001(\0162\t.hal.Type:\020PB_UNSIGNED_BYTE\022"
  "#\n\006format\030\005 \001(\0162\013.hal.Format:\006PB_RGB\022\021\n\t"
  "timestamp\030\006 \001(\001\022\037\n\004info\030\007 \001(\0132\021.hal.Imag"
  "eInfoMsg\022\025\n\rserial_number\030\010 \001(\004*\224\001\n\004Type"
  "\022\014\n\007PB_BYTE\020\200(\022\025\n\020PB_UNSIGNED_BYTE\020\201(\022\r\n"
  "\010PB_SHORT\020\202(\022\026\n\021PB_UNSIGNED_SHORT\020\203(\022\013\n\006"
  "PB_INT\020\204(\022\024\n\017PB_UNSIGNED_INT\020\205(\022\r\n\010PB_FL"
  "OAT\020\206(\022\016\n\tPB_DOUBLE\020\212(*_\n\006Format\022\021\n\014PB_L"
  "UMINANCE\020\2112\022\013\n\006PB_RGB\020\2072\022\014\n\007PB_RGBA\020\2102\022\n"
  "\n\006PB_RAW\020\001\022\014\n\006PB_BGR\020\340\201\002\022\r\n\007PB_BGRA\020\341\201\002"
  ;
static ::_pbi::once_flag descriptor_table_Image_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Image_2eproto = {
    false, false, 599, descriptor_table_protodef_Image_2eproto,
    "Image.proto",
    &descriptor_table_Image_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Image_2eproto::offsets,
    file_level_metadata_Image_2eproto, file_level_enum_descriptors_Image_2eproto,
    file_level_service_descriptors_Image_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Image_2eproto_getter() {
  return &descriptor_table_Image_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Image_2eproto(&descriptor_table_Image_2eproto);
namespace hal {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Image_2eproto);
  return file_level_enum_descriptors_Image_2eproto[0];
}
bool Type_IsValid(int value) {
  switch (value) {
    case 5120:
    case 5121:
    case 5122:
    case 5123:
    case 5124:
    case 5125:
    case 5126:
    case 5130:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Format_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Image_2eproto);
  return file_level_enum_descriptors_Image_2eproto[1];
}
bool Format_IsValid(int value) {
  switch (value) {
    case 1:
    case 6407:
    case 6408:
    case 6409:
    case 32992:
    case 32993:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class ImageInfoMsg::_Internal {
 public:
  using HasBits = decltype(std::declval<ImageInfoMsg>()._impl_._has_bits_);
  static void set_has_exposure(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_shutter(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_gain(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_gamma(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_baseline(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_focal_length(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

ImageInfoMsg::ImageInfoMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hal.ImageInfoMsg)
}
ImageInfoMsg::ImageInfoMsg(const ImageInfoMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ImageInfoMsg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.exposure_){}
    , decltype(_impl_.shutter_){}
    , decltype(_impl_.gain_){}
    , decltype(_impl_.gamma_){}
    , decltype(_impl_.baseline_){}
    , decltype(_impl_.focal_length_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.exposure_, &from._impl_.exposure_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.focal_length_) -
    reinterpret_cast<char*>(&_impl_.exposure_)) + sizeof(_impl_.focal_length_));
  // @@protoc_insertion_point(copy_constructor:hal.ImageInfoMsg)
}

inline void ImageInfoMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.exposure_){0}
    , decltype(_impl_.shutter_){0}
    , decltype(_impl_.gain_){0}
    , decltype(_impl_.gamma_){0}
    , decltype(_impl_.baseline_){0}
    , decltype(_impl_.focal_length_){0}
  };
}

ImageInfoMsg::~ImageInfoMsg() {
  // @@protoc_insertion_point(destructor:hal.ImageInfoMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ImageInfoMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ImageInfoMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ImageInfoMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:hal.ImageInfoMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&_impl_.exposure_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.focal_length_) -
        reinterpret_cast<char*>(&_impl_.exposure_)) + sizeof(_impl_.focal_length_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ImageInfoMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional double exposure = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_exposure(&has_bits);
          _impl_.exposure_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double shutter = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_shutter(&has_bits);
          _impl_.shutter_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double gain = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _Internal::set_has_gain(&has_bits);
          _impl_.gain_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double gamma = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _Internal::set_has_gamma(&has_bits);
          _impl_.gamma_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double baseline = 50;
      case 50:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 145)) {
          _Internal::set_has_baseline(&has_bits);
          _impl_.baseline_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double focal_length = 51;
      case 51:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 153)) {
          _Internal::set_has_focal_length(&has_bits);
          _impl_.focal_length_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

uint8_t* ImageInfoMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hal.ImageInfoMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional double exposure = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_exposure(), target);
  }

  // optional double shutter = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_shutter(), target);
  }

  // optional double gain = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_gain(), target);
  }

  // optional double gamma = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(4, this->_internal_gamma(), target);
  }

  // optional double baseline = 50;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(50, this->_internal_baseline(), target);
  }

  // optional double focal_length = 51;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(51, this->_internal_focal_length(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hal.ImageInfoMsg)
  return target;
}

size_t ImageInfoMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hal.ImageInfoMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional double exposure = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double shutter = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double gain = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double gamma = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double baseline = 50;
    if (cached_has_bits & 0x00000010u) {
      total_size += 2 + 8;
    }

    // optional double focal_length = 51;
    if (cached_has_bits & 0x00000020u) {
      total_size += 2 + 8;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ImageInfoMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ImageInfoMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ImageInfoMsg::GetClassData() const { return &_class_data_; }


void ImageInfoMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ImageInfoMsg*>(&to_msg);
  auto& from = static_cast<const ImageInfoMsg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hal.ImageInfoMsg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.exposure_ = from._impl_.exposure_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.shutter_ = from._impl_.shutter_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.gain_ = from._impl_.gain_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.gamma_ = from._impl_.gamma_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.baseline_ = from._impl_.baseline_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.focal_length_ = from._impl_.focal_length_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ImageInfoMsg::CopyFrom(const ImageInfoMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hal.ImageInfoMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageInfoMsg::IsInitialized() const {
  return true;
}

void ImageInfoMsg::InternalSwap(ImageInfoMsg* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ImageInfoMsg, _impl_.focal_length_)
      + sizeof(ImageInfoMsg::_impl_.focal_length_)
      - PROTOBUF_FIELD_OFFSET(ImageInfoMsg, _impl_.exposure_)>(
          reinterpret_cast<char*>(&_impl_.exposure_),
          reinterpret_cast<char*>(&other->_impl_.exposure_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ImageInfoMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Image_2eproto_getter, &descriptor_table_Image_2eproto_once,
      file_level_metadata_Image_2eproto[0]);
}

// ===================================================================

class ImageMsg::_Internal {
 public:
  using HasBits = decltype(std::declval<ImageMsg>()._impl_._has_bits_);
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_format(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::hal::ImageInfoMsg& info(const ImageMsg* msg);
  static void set_has_info(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_serial_number(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

const ::hal::ImageInfoMsg&
ImageMsg::_Internal::info(const ImageMsg* msg) {
  return *msg->_impl_.info_;
}
ImageMsg::ImageMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hal.ImageMsg)
}
ImageMsg::ImageMsg(const ImageMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ImageMsg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.data_){}
    , decltype(_impl_.info_){nullptr}
    , decltype(_impl_.width_){}
    , decltype(_impl_.height_){}
    , decltype(_impl_.timestamp_){}
    , decltype(_impl_.serial_number_){}
    , decltype(_impl_.type_){}
    , decltype(_impl_.format_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_data()) {
    _this->_impl_.data_.Set(from._internal_data(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_info()) {
    _this->_impl_.info_ = new ::hal::ImageInfoMsg(*from._impl_.info_);
  }
  ::memcpy(&_impl_.width_, &from._impl_.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.format_) -
    reinterpret_cast<char*>(&_impl_.width_)) + sizeof(_impl_.format_));
  // @@protoc_insertion_point(copy_constructor:hal.ImageMsg)
}

inline void ImageMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.data_){}
    , decltype(_impl_.info_){nullptr}
    , decltype(_impl_.width_){0u}
    , decltype(_impl_.height_){0u}
    , decltype(_impl_.timestamp_){0}
    , decltype(_impl_.serial_number_){uint64_t{0u}}
    , decltype(_impl_.type_){5121}
    , decltype(_impl_.format_){6407}
  };
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ImageMsg::~ImageMsg() {
  // @@protoc_insertion_point(destructor:hal.ImageMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ImageMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.Destroy();
  if (this != internal_default_instance()) delete _impl_.info_;
}

void ImageMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ImageMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:hal.ImageMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.data_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.info_ != nullptr);
      _impl_.info_->Clear();
    }
  }
  if (cached_has_bits & 0x000000fcu) {
    ::memset(&_impl_.width_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.serial_number_) -
        reinterpret_cast<char*>(&_impl_.width_)) + sizeof(_impl_.serial_number_));
    _impl_.type_ = 5121;
    _impl_.format_ = 6407;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ImageMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 width = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_width(&has_bits);
          _impl_.width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 height = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_height(&has_bits);
          _impl_.height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes data = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.Type type = 4 [default = PB_UNSIGNED_BYTE];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::hal::Type_IsValid(val))) {
            _internal_set_type(static_cast<::hal::Type>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .hal.Format format = 5 [default = PB_RGB];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::hal::Format_IsValid(val))) {
            _internal_set_format(static_cast<::hal::Format>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(5, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional double timestamp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 49)) {
          _Internal::set_has_timestamp(&has_bits);
          _impl_.timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional .hal.ImageInfoMsg info = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_info(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 serial_number = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_serial_number(&has_bits);
          _impl_.serial_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ImageMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hal.ImageMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 width = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_width(), target);
  }

  // optional uint32 height = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_height(), target);
  }

  // optional bytes data = 3;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_data(), target);
  }

  // optional .hal.Type type = 4 [default = PB_UNSIGNED_BYTE];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_type(), target);
  }

  // optional .hal.Format format = 5 [default = PB_RGB];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_format(), target);
  }

  // optional double timestamp = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(6, this->_internal_timestamp(), target);
  }

  // optional .hal.ImageInfoMsg info = 7;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::info(this),
        _Internal::info(this).GetCachedSize(), target, stream);
  }

  // optional uint64 serial_number = 8;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(8, this->_internal_serial_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hal.ImageMsg)
  return target;
}

size_t ImageMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hal.ImageMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bytes data = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_data());
    }

    // optional .hal.ImageInfoMsg info = 7;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.info_);
    }

    // optional uint32 width = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_width());
    }

    // optional uint32 height = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_height());
    }

    // optional double timestamp = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional uint64 serial_number = 8;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_serial_number());
    }

    // optional .hal.Type type = 4 [default = PB_UNSIGNED_BYTE];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
    }

    // optional .hal.Format format = 5 [default = PB_RGB];
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_format());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ImageMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ImageMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ImageMsg::GetClassData() const { return &_class_data_; }


void ImageMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ImageMsg*>(&to_msg);
  auto& from = static_cast<const ImageMsg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hal.ImageMsg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_data(from._internal_data());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_info()->::hal::ImageInfoMsg::MergeFrom(
          from._internal_info());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.width_ = from._impl_.width_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.height_ = from._impl_.height_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.timestamp_ = from._impl_.timestamp_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.serial_number_ = from._impl_.serial_number_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.type_ = from._impl_.type_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.format_ = from._impl_.format_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ImageMsg::CopyFrom(const ImageMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hal.ImageMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageMsg::IsInitialized() const {
  return true;
}

void ImageMsg::InternalSwap(ImageMsg* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.data_, lhs_arena,
      &other->_impl_.data_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ImageMsg, _impl_.serial_number_)
      + sizeof(ImageMsg::_impl_.serial_number_)
      - PROTOBUF_FIELD_OFFSET(ImageMsg, _impl_.info_)>(
          reinterpret_cast<char*>(&_impl_.info_),
          reinterpret_cast<char*>(&other->_impl_.info_));
  swap(_impl_.type_, other->_impl_.type_);
  swap(_impl_.format_, other->_impl_.format_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ImageMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Image_2eproto_getter, &descriptor_table_Image_2eproto_once,
      file_level_metadata_Image_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace hal
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::hal::ImageInfoMsg*
Arena::CreateMaybeMessage< ::hal::ImageInfoMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hal::ImageInfoMsg >(arena);
}
template<> PROTOBUF_NOINLINE ::hal::ImageMsg*
Arena::CreateMaybeMessage< ::hal::ImageMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hal::ImageMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>