/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/firestore/admin/index.proto

#include "google/firestore/admin/index.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace google {
namespace firestore {
namespace admin {
namespace v1 {

inline constexpr Index_IndexField::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : field_path_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        value_mode_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Index_IndexField::Index_IndexField(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct Index_IndexFieldDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Index_IndexFieldDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Index_IndexFieldDefaultTypeInternal() {}
  union {
    Index_IndexField _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Index_IndexFieldDefaultTypeInternal _Index_IndexField_default_instance_;

inline constexpr Index::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : fields_{},
        name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        query_scope_{static_cast< ::google::firestore::admin::v1::Index_QueryScope >(0)},
        state_{static_cast< ::google::firestore::admin::v1::Index_State >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Index::Index(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct IndexDefaultTypeInternal {
  PROTOBUF_CONSTEXPR IndexDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~IndexDefaultTypeInternal() {}
  union {
    Index _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 IndexDefaultTypeInternal _Index_default_instance_;
}  // namespace v1
}  // namespace admin
}  // namespace firestore
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2ffirestore_2fadmin_2findex_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2ffirestore_2fadmin_2findex_2eproto[4];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2ffirestore_2fadmin_2findex_2eproto = nullptr;
const ::uint32_t TableStruct_google_2ffirestore_2fadmin_2findex_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index_IndexField, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index_IndexField, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index_IndexField, _impl_.field_path_),
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index_IndexField, _impl_.value_mode_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index, _impl_.query_scope_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index, _impl_.fields_),
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index, _impl_.state_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::google::firestore::admin::v1::Index_IndexField)},
        {12, -1, -1, sizeof(::google::firestore::admin::v1::Index)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::google::firestore::admin::v1::_Index_IndexField_default_instance_._instance,
    &::google::firestore::admin::v1::_Index_default_instance_._instance,
};
const char descriptor_table_protodef_google_2ffirestore_2fadmin_2findex_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\"google/firestore/admin/index.proto\022\031go"
    "ogle.firestore.admin.v1\032\031google/api/reso"
    "urce.proto\"\243\006\n\005Index\022\014\n\004name\030\001 \001(\t\022@\n\013qu"
    "ery_scope\030\002 \001(\0162+.google.firestore.admin"
    ".v1.Index.QueryScope\022;\n\006fields\030\003 \003(\0132+.g"
    "oogle.firestore.admin.v1.Index.IndexFiel"
    "d\0225\n\005state\030\004 \001(\0162&.google.firestore.admi"
    "n.v1.Index.State\032\275\002\n\nIndexField\022\022\n\nfield"
    "_path\030\001 \001(\t\022B\n\005order\030\002 \001(\01621.google.fire"
    "store.admin.v1.Index.IndexField.OrderH\000\022"
    "O\n\014array_config\030\003 \001(\01627.google.firestore"
    ".admin.v1.Index.IndexField.ArrayConfigH\000"
    "\"=\n\005Order\022\025\n\021ORDER_UNSPECIFIED\020\000\022\r\n\tASCE"
    "NDING\020\001\022\016\n\nDESCENDING\020\002\"9\n\013ArrayConfig\022\034"
    "\n\030ARRAY_CONFIG_UNSPECIFIED\020\000\022\014\n\010CONTAINS"
    "\020\001B\014\n\nvalue_mode\"O\n\nQueryScope\022\033\n\027QUERY_"
    "SCOPE_UNSPECIFIED\020\000\022\016\n\nCOLLECTION\020\001\022\024\n\020C"
    "OLLECTION_GROUP\020\002\"I\n\005State\022\025\n\021STATE_UNSP"
    "ECIFIED\020\000\022\014\n\010CREATING\020\001\022\t\n\005READY\020\002\022\020\n\014NE"
    "EDS_REPAIR\020\003:z\352Aw\n\036firestore.googleapis."
    "com/Index\022Uprojects/{project}/databases/"
    "{database}/collectionGroups/{collection}"
    "/indexes/{index}B\336\001\n\035com.google.firestor"
    "e.admin.v1B\nIndexProtoP\001Z>google.golang."
    "org/genproto/googleapis/firestore/admin/"
    "v1;admin\242\002\004GCFS\252\002\037Google.Cloud.Firestore"
    ".Admin.V1\312\002\037Google\\Cloud\\Firestore\\Admin"
    "\\V1\352\002#Google::Cloud::Firestore::Admin::V"
    "1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fapi_2fresource_2eproto,
};
static ::absl::once_flag descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto = {
    false,
    false,
    1129,
    descriptor_table_protodef_google_2ffirestore_2fadmin_2findex_2eproto,
    "google/firestore/admin/index.proto",
    &descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_once,
    descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_google_2ffirestore_2fadmin_2findex_2eproto::offsets,
    file_level_metadata_google_2ffirestore_2fadmin_2findex_2eproto,
    file_level_enum_descriptors_google_2ffirestore_2fadmin_2findex_2eproto,
    file_level_service_descriptors_google_2ffirestore_2fadmin_2findex_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_getter() {
  return &descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2ffirestore_2fadmin_2findex_2eproto(&descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto);
namespace google {
namespace firestore {
namespace admin {
namespace v1 {
const ::google::protobuf::EnumDescriptor* Index_IndexField_Order_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto);
  return file_level_enum_descriptors_google_2ffirestore_2fadmin_2findex_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t Index_IndexField_Order_internal_data_[] = {
    196608u, 0u, };
bool Index_IndexField_Order_IsValid(int value) {
  return 0 <= value && value <= 2;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr Index_IndexField_Order Index_IndexField::ORDER_UNSPECIFIED;
constexpr Index_IndexField_Order Index_IndexField::ASCENDING;
constexpr Index_IndexField_Order Index_IndexField::DESCENDING;
constexpr Index_IndexField_Order Index_IndexField::Order_MIN;
constexpr Index_IndexField_Order Index_IndexField::Order_MAX;
constexpr int Index_IndexField::Order_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::google::protobuf::EnumDescriptor* Index_IndexField_ArrayConfig_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto);
  return file_level_enum_descriptors_google_2ffirestore_2fadmin_2findex_2eproto[1];
}
PROTOBUF_CONSTINIT const uint32_t Index_IndexField_ArrayConfig_internal_data_[] = {
    131072u, 0u, };
bool Index_IndexField_ArrayConfig_IsValid(int value) {
  return 0 <= value && value <= 1;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr Index_IndexField_ArrayConfig Index_IndexField::ARRAY_CONFIG_UNSPECIFIED;
constexpr Index_IndexField_ArrayConfig Index_IndexField::CONTAINS;
constexpr Index_IndexField_ArrayConfig Index_IndexField::ArrayConfig_MIN;
constexpr Index_IndexField_ArrayConfig Index_IndexField::ArrayConfig_MAX;
constexpr int Index_IndexField::ArrayConfig_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::google::protobuf::EnumDescriptor* Index_QueryScope_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto);
  return file_level_enum_descriptors_google_2ffirestore_2fadmin_2findex_2eproto[2];
}
PROTOBUF_CONSTINIT const uint32_t Index_QueryScope_internal_data_[] = {
    196608u, 0u, };
bool Index_QueryScope_IsValid(int value) {
  return 0 <= value && value <= 2;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr Index_QueryScope Index::QUERY_SCOPE_UNSPECIFIED;
constexpr Index_QueryScope Index::COLLECTION;
constexpr Index_QueryScope Index::COLLECTION_GROUP;
constexpr Index_QueryScope Index::QueryScope_MIN;
constexpr Index_QueryScope Index::QueryScope_MAX;
constexpr int Index::QueryScope_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::google::protobuf::EnumDescriptor* Index_State_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto);
  return file_level_enum_descriptors_google_2ffirestore_2fadmin_2findex_2eproto[3];
}
PROTOBUF_CONSTINIT const uint32_t Index_State_internal_data_[] = {
    262144u, 0u, };
bool Index_State_IsValid(int value) {
  return 0 <= value && value <= 3;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr Index_State Index::STATE_UNSPECIFIED;
constexpr Index_State Index::CREATING;
constexpr Index_State Index::READY;
constexpr Index_State Index::NEEDS_REPAIR;
constexpr Index_State Index::State_MIN;
constexpr Index_State Index::State_MAX;
constexpr int Index::State_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class Index_IndexField::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::google::firestore::admin::v1::Index_IndexField, _impl_._oneof_case_);
};

Index_IndexField::Index_IndexField(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.firestore.admin.v1.Index.IndexField)
}
inline PROTOBUF_NDEBUG_INLINE Index_IndexField::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : field_path_(arena, from.field_path_),
        value_mode_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

Index_IndexField::Index_IndexField(
    ::google::protobuf::Arena* arena,
    const Index_IndexField& from)
    : ::google::protobuf::Message(arena) {
  Index_IndexField* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  switch (value_mode_case()) {
    case VALUE_MODE_NOT_SET:
      break;
      case kOrder:
        _impl_.value_mode_.order_ = from._impl_.value_mode_.order_;
        break;
      case kArrayConfig:
        _impl_.value_mode_.array_config_ = from._impl_.value_mode_.array_config_;
        break;
  }

  // @@protoc_insertion_point(copy_constructor:google.firestore.admin.v1.Index.IndexField)
}
inline PROTOBUF_NDEBUG_INLINE Index_IndexField::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : field_path_(arena),
        value_mode_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Index_IndexField::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Index_IndexField::~Index_IndexField() {
  // @@protoc_insertion_point(destructor:google.firestore.admin.v1.Index.IndexField)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Index_IndexField::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.field_path_.Destroy();
  if (has_value_mode()) {
    clear_value_mode();
  }
  _impl_.~Impl_();
}

void Index_IndexField::clear_value_mode() {
// @@protoc_insertion_point(one_of_clear_start:google.firestore.admin.v1.Index.IndexField)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  switch (value_mode_case()) {
    case kOrder: {
      // No need to clear
      break;
    }
    case kArrayConfig: {
      // No need to clear
      break;
    }
    case VALUE_MODE_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = VALUE_MODE_NOT_SET;
}


PROTOBUF_NOINLINE void Index_IndexField::Clear() {
// @@protoc_insertion_point(message_clear_start:google.firestore.admin.v1.Index.IndexField)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.field_path_.ClearToEmpty();
  clear_value_mode();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Index_IndexField::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 3, 0, 61, 2> Index_IndexField::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Index_IndexField_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string field_path = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Index_IndexField, _impl_.field_path_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string field_path = 1;
    {PROTOBUF_FIELD_OFFSET(Index_IndexField, _impl_.field_path_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .google.firestore.admin.v1.Index.IndexField.Order order = 2;
    {PROTOBUF_FIELD_OFFSET(Index_IndexField, _impl_.value_mode_.order_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kOpenEnum)},
    // .google.firestore.admin.v1.Index.IndexField.ArrayConfig array_config = 3;
    {PROTOBUF_FIELD_OFFSET(Index_IndexField, _impl_.value_mode_.array_config_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
    "\52\12\0\0\0\0\0\0"
    "google.firestore.admin.v1.Index.IndexField"
    "field_path"
  }},
};

::uint8_t* Index_IndexField::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.firestore.admin.v1.Index.IndexField)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string field_path = 1;
  if (!this->_internal_field_path().empty()) {
    const std::string& _s = this->_internal_field_path();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.firestore.admin.v1.Index.IndexField.field_path");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  switch (value_mode_case()) {
    case kOrder: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteEnumToArray(
          2, this->_internal_order(), target);
      break;
    }
    case kArrayConfig: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteEnumToArray(
          3, this->_internal_array_config(), target);
      break;
    }
    default:
      break;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.firestore.admin.v1.Index.IndexField)
  return target;
}

::size_t Index_IndexField::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.firestore.admin.v1.Index.IndexField)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string field_path = 1;
  if (!this->_internal_field_path().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_field_path());
  }

  switch (value_mode_case()) {
    // .google.firestore.admin.v1.Index.IndexField.Order order = 2;
    case kOrder: {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_order());
      break;
    }
    // .google.firestore.admin.v1.Index.IndexField.ArrayConfig array_config = 3;
    case kArrayConfig: {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_array_config());
      break;
    }
    case VALUE_MODE_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Index_IndexField::_class_data_ = {
    Index_IndexField::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Index_IndexField::GetClassData() const {
  return &_class_data_;
}

void Index_IndexField::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Index_IndexField*>(&to_msg);
  auto& from = static_cast<const Index_IndexField&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.firestore.admin.v1.Index.IndexField)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_field_path().empty()) {
    _this->_internal_set_field_path(from._internal_field_path());
  }
  switch (from.value_mode_case()) {
    case kOrder: {
      _this->_internal_set_order(from._internal_order());
      break;
    }
    case kArrayConfig: {
      _this->_internal_set_array_config(from._internal_array_config());
      break;
    }
    case VALUE_MODE_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Index_IndexField::CopyFrom(const Index_IndexField& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.firestore.admin.v1.Index.IndexField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Index_IndexField::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Index_IndexField::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Index_IndexField::InternalSwap(Index_IndexField* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.field_path_, &other->_impl_.field_path_, arena);
  swap(_impl_.value_mode_, other->_impl_.value_mode_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata Index_IndexField::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_getter, &descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_once,
      file_level_metadata_google_2ffirestore_2fadmin_2findex_2eproto[0]);
}
// ===================================================================

class Index::_Internal {
 public:
};

Index::Index(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.firestore.admin.v1.Index)
}
inline PROTOBUF_NDEBUG_INLINE Index::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : fields_{visibility, arena, from.fields_},
        name_(arena, from.name_),
        _cached_size_{0} {}

Index::Index(
    ::google::protobuf::Arena* arena,
    const Index& from)
    : ::google::protobuf::Message(arena) {
  Index* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, query_scope_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, query_scope_),
           offsetof(Impl_, state_) -
               offsetof(Impl_, query_scope_) +
               sizeof(Impl_::state_));

  // @@protoc_insertion_point(copy_constructor:google.firestore.admin.v1.Index)
}
inline PROTOBUF_NDEBUG_INLINE Index::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : fields_{visibility, arena},
        name_(arena),
        _cached_size_{0} {}

inline void Index::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, query_scope_),
           0,
           offsetof(Impl_, state_) -
               offsetof(Impl_, query_scope_) +
               sizeof(Impl_::state_));
}
Index::~Index() {
  // @@protoc_insertion_point(destructor:google.firestore.admin.v1.Index)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Index::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Index::Clear() {
// @@protoc_insertion_point(message_clear_start:google.firestore.admin.v1.Index)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.fields_.Clear();
  _impl_.name_.ClearToEmpty();
  ::memset(&_impl_.query_scope_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.state_) -
      reinterpret_cast<char*>(&_impl_.query_scope_)) + sizeof(_impl_.state_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Index::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 1, 44, 2> Index::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Index_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // .google.firestore.admin.v1.Index.State state = 4;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Index, _impl_.state_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Index, _impl_.state_)}},
    // string name = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Index, _impl_.name_)}},
    // .google.firestore.admin.v1.Index.QueryScope query_scope = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Index, _impl_.query_scope_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Index, _impl_.query_scope_)}},
    // repeated .google.firestore.admin.v1.Index.IndexField fields = 3;
    {::_pbi::TcParser::FastMtR1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Index, _impl_.fields_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string name = 1;
    {PROTOBUF_FIELD_OFFSET(Index, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .google.firestore.admin.v1.Index.QueryScope query_scope = 2;
    {PROTOBUF_FIELD_OFFSET(Index, _impl_.query_scope_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // repeated .google.firestore.admin.v1.Index.IndexField fields = 3;
    {PROTOBUF_FIELD_OFFSET(Index, _impl_.fields_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // .google.firestore.admin.v1.Index.State state = 4;
    {PROTOBUF_FIELD_OFFSET(Index, _impl_.state_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::firestore::admin::v1::Index_IndexField>()},
  }}, {{
    "\37\4\0\0\0\0\0\0"
    "google.firestore.admin.v1.Index"
    "name"
  }},
};

::uint8_t* Index::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.firestore.admin.v1.Index)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.firestore.admin.v1.Index.name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // .google.firestore.admin.v1.Index.QueryScope query_scope = 2;
  if (this->_internal_query_scope() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_query_scope(), target);
  }

  // repeated .google.firestore.admin.v1.Index.IndexField fields = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_fields_size()); i < n; i++) {
    const auto& repfield = this->_internal_fields().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // .google.firestore.admin.v1.Index.State state = 4;
  if (this->_internal_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        4, this->_internal_state(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.firestore.admin.v1.Index)
  return target;
}

::size_t Index::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.firestore.admin.v1.Index)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.firestore.admin.v1.Index.IndexField fields = 3;
  total_size += 1UL * this->_internal_fields_size();
  for (const auto& msg : this->_internal_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // .google.firestore.admin.v1.Index.QueryScope query_scope = 2;
  if (this->_internal_query_scope() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_query_scope());
  }

  // .google.firestore.admin.v1.Index.State state = 4;
  if (this->_internal_state() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_state());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Index::_class_data_ = {
    Index::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Index::GetClassData() const {
  return &_class_data_;
}

void Index::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Index*>(&to_msg);
  auto& from = static_cast<const Index&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.firestore.admin.v1.Index)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_fields()->MergeFrom(
      from._internal_fields());
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_query_scope() != 0) {
    _this->_internal_set_query_scope(from._internal_query_scope());
  }
  if (from._internal_state() != 0) {
    _this->_internal_set_state(from._internal_state());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Index::CopyFrom(const Index& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.firestore.admin.v1.Index)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Index::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Index::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Index::InternalSwap(Index* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.fields_.InternalSwap(&other->_impl_.fields_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Index, _impl_.state_)
      + sizeof(Index::_impl_.state_)
      - PROTOBUF_FIELD_OFFSET(Index, _impl_.query_scope_)>(
          reinterpret_cast<char*>(&_impl_.query_scope_),
          reinterpret_cast<char*>(&other->_impl_.query_scope_));
}

::google::protobuf::Metadata Index::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_getter, &descriptor_table_google_2ffirestore_2fadmin_2findex_2eproto_once,
      file_level_metadata_google_2ffirestore_2fadmin_2findex_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace admin
}  // namespace firestore
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
