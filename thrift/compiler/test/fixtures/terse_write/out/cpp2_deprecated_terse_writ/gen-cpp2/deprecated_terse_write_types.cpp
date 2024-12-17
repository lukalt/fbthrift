/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/terse_write/src/deprecated_terse_write.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/deprecated_terse_write_types.h"
#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/deprecated_terse_write_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/deprecated_terse_write_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "deprecated_terse_write";


namespace apache { namespace thrift {

const std::string_view TEnumTraits<::facebook::thrift::test::terse_write::deprecated::MyEnum>::__fbthrift_module_name_internal_do_not_use = kModuleName;
folly::Range<::facebook::thrift::test::terse_write::deprecated::MyEnum const*> const TEnumTraits<::facebook::thrift::test::terse_write::deprecated::MyEnum>::values = folly::range(TEnumDataStorage<::facebook::thrift::test::terse_write::deprecated::MyEnum>::values);
folly::Range<std::string_view const*> const TEnumTraits<::facebook::thrift::test::terse_write::deprecated::MyEnum>::names = folly::range(TEnumDataStorage<::facebook::thrift::test::terse_write::deprecated::MyEnum>::names);

bool TEnumTraits<::facebook::thrift::test::terse_write::deprecated::MyEnum>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::thrift::test::terse_write::deprecated::MyEnum>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::test::terse_write::deprecated::MyStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::test::terse_write::deprecated::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::test::terse_write::deprecated {

const char* MyStruct::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/test/terse_write/deprecated/MyStruct";
}

std::string_view MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view MyStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyStruct>::name;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor) {}


void MyStruct::__fbthrift_clear() {
  // clear all fields
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return true;
}

bool MyStruct::operator==([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyStruct::operator<([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] MyStruct& a, [[maybe_unused]] MyStruct& b) {
  using ::std::swap;
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace facebook::thrift::test::terse_write::deprecated

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::test::terse_write::deprecated::StructLevelTerseStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::test::terse_write::deprecated::StructLevelTerseStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::test::terse_write::deprecated {

const char* StructLevelTerseStruct::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/test/terse_write/deprecated/StructLevelTerseStruct";
}

std::string_view StructLevelTerseStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<StructLevelTerseStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view StructLevelTerseStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<StructLevelTerseStruct>::name;
}

StructLevelTerseStruct::StructLevelTerseStruct(const StructLevelTerseStruct&) = default;
StructLevelTerseStruct& StructLevelTerseStruct::operator=(const StructLevelTerseStruct&) = default;
StructLevelTerseStruct::StructLevelTerseStruct() :
    __fbthrift_field_bool_field(),
    __fbthrift_field_byte_field(),
    __fbthrift_field_short_field(),
    __fbthrift_field_int_field(),
    __fbthrift_field_long_field(),
    __fbthrift_field_float_field(),
    __fbthrift_field_double_field(),
    __fbthrift_field_enum_field() {
}


StructLevelTerseStruct::~StructLevelTerseStruct() {}

StructLevelTerseStruct::StructLevelTerseStruct([[maybe_unused]] StructLevelTerseStruct&& other) noexcept :
    __fbthrift_field_bool_field(std::move(other.__fbthrift_field_bool_field)),
    __fbthrift_field_byte_field(std::move(other.__fbthrift_field_byte_field)),
    __fbthrift_field_short_field(std::move(other.__fbthrift_field_short_field)),
    __fbthrift_field_int_field(std::move(other.__fbthrift_field_int_field)),
    __fbthrift_field_long_field(std::move(other.__fbthrift_field_long_field)),
    __fbthrift_field_float_field(std::move(other.__fbthrift_field_float_field)),
    __fbthrift_field_double_field(std::move(other.__fbthrift_field_double_field)),
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_binary_field(std::move(other.__fbthrift_field_binary_field)),
    __fbthrift_field_enum_field(std::move(other.__fbthrift_field_enum_field)),
    __fbthrift_field_list_field(std::move(other.__fbthrift_field_list_field)),
    __fbthrift_field_set_field(std::move(other.__fbthrift_field_set_field)),
    __fbthrift_field_map_field(std::move(other.__fbthrift_field_map_field)),
    __fbthrift_field_struct_field(std::move(other.__fbthrift_field_struct_field)) {
}

StructLevelTerseStruct& StructLevelTerseStruct::operator=([[maybe_unused]] StructLevelTerseStruct&& other) noexcept {
    this->__fbthrift_field_bool_field = std::move(other.__fbthrift_field_bool_field);
    this->__fbthrift_field_byte_field = std::move(other.__fbthrift_field_byte_field);
    this->__fbthrift_field_short_field = std::move(other.__fbthrift_field_short_field);
    this->__fbthrift_field_int_field = std::move(other.__fbthrift_field_int_field);
    this->__fbthrift_field_long_field = std::move(other.__fbthrift_field_long_field);
    this->__fbthrift_field_float_field = std::move(other.__fbthrift_field_float_field);
    this->__fbthrift_field_double_field = std::move(other.__fbthrift_field_double_field);
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_binary_field = std::move(other.__fbthrift_field_binary_field);
    this->__fbthrift_field_enum_field = std::move(other.__fbthrift_field_enum_field);
    this->__fbthrift_field_list_field = std::move(other.__fbthrift_field_list_field);
    this->__fbthrift_field_set_field = std::move(other.__fbthrift_field_set_field);
    this->__fbthrift_field_map_field = std::move(other.__fbthrift_field_map_field);
    this->__fbthrift_field_struct_field = std::move(other.__fbthrift_field_struct_field);
    return *this;
}


StructLevelTerseStruct::StructLevelTerseStruct(apache::thrift::FragileConstructor, bool bool_field__arg, ::std::int8_t byte_field__arg, ::std::int16_t short_field__arg, ::std::int32_t int_field__arg, ::std::int64_t long_field__arg, float float_field__arg, double double_field__arg, ::std::string string_field__arg, ::std::string binary_field__arg, ::facebook::thrift::test::terse_write::deprecated::MyEnum enum_field__arg, ::std::vector<::std::int16_t> list_field__arg, ::std::set<::std::int16_t> set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> map_field__arg, ::facebook::thrift::test::terse_write::deprecated::MyStruct struct_field__arg) :
    __fbthrift_field_bool_field(std::move(bool_field__arg)),
    __fbthrift_field_byte_field(std::move(byte_field__arg)),
    __fbthrift_field_short_field(std::move(short_field__arg)),
    __fbthrift_field_int_field(std::move(int_field__arg)),
    __fbthrift_field_long_field(std::move(long_field__arg)),
    __fbthrift_field_float_field(std::move(float_field__arg)),
    __fbthrift_field_double_field(std::move(double_field__arg)),
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_binary_field(std::move(binary_field__arg)),
    __fbthrift_field_enum_field(std::move(enum_field__arg)),
    __fbthrift_field_list_field(std::move(list_field__arg)),
    __fbthrift_field_set_field(std::move(set_field__arg)),
    __fbthrift_field_map_field(std::move(map_field__arg)),
    __fbthrift_field_struct_field(std::move(struct_field__arg)) { 
}


void StructLevelTerseStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_bool_field = bool();
  this->__fbthrift_field_byte_field = ::std::int8_t();
  this->__fbthrift_field_short_field = ::std::int16_t();
  this->__fbthrift_field_int_field = ::std::int32_t();
  this->__fbthrift_field_long_field = ::std::int64_t();
  this->__fbthrift_field_float_field = float();
  this->__fbthrift_field_double_field = double();
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_enum_field = ::facebook::thrift::test::terse_write::deprecated::MyEnum();
  this->__fbthrift_field_list_field.clear();
  this->__fbthrift_field_set_field.clear();
  this->__fbthrift_field_map_field.clear();
}

void StructLevelTerseStruct::__fbthrift_clear_terse_fields() {
  this->__fbthrift_field_bool_field = bool();
  this->__fbthrift_field_byte_field = ::std::int8_t();
  this->__fbthrift_field_short_field = ::std::int16_t();
  this->__fbthrift_field_int_field = ::std::int32_t();
  this->__fbthrift_field_long_field = ::std::int64_t();
  this->__fbthrift_field_float_field = float();
  this->__fbthrift_field_double_field = double();
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_enum_field = ::facebook::thrift::test::terse_write::deprecated::MyEnum();
  this->__fbthrift_field_list_field.clear();
  this->__fbthrift_field_set_field.clear();
  this->__fbthrift_field_map_field.clear();
}

bool StructLevelTerseStruct::__fbthrift_is_empty() const {
  return ::apache::thrift::op::isEmpty<::apache::thrift::type::bool_t>(this->__fbthrift_field_bool_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::byte_t>(this->__fbthrift_field_byte_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::i16_t>(this->__fbthrift_field_short_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::i32_t>(this->__fbthrift_field_int_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::i64_t>(this->__fbthrift_field_long_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::float_t>(this->__fbthrift_field_float_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::double_t>(this->__fbthrift_field_double_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::string_t>(this->__fbthrift_field_string_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::binary_t>(this->__fbthrift_field_binary_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::enum_t<::facebook::thrift::test::terse_write::deprecated::MyEnum>>(this->__fbthrift_field_enum_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::i16_t>>(this->__fbthrift_field_list_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::set<::apache::thrift::type::i16_t>>(this->__fbthrift_field_set_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::map<::apache::thrift::type::i16_t, ::apache::thrift::type::i16_t>>(this->__fbthrift_field_map_field) &&
 ::apache::thrift::op::isEmpty<::apache::thrift::type::struct_t<::facebook::thrift::test::terse_write::deprecated::MyStruct>>(this->__fbthrift_field_struct_field);
}

bool StructLevelTerseStruct::operator==([[maybe_unused]] const StructLevelTerseStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool StructLevelTerseStruct::operator<([[maybe_unused]] const StructLevelTerseStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] StructLevelTerseStruct& a, [[maybe_unused]] StructLevelTerseStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_bool_field, b.__fbthrift_field_bool_field);
  swap(a.__fbthrift_field_byte_field, b.__fbthrift_field_byte_field);
  swap(a.__fbthrift_field_short_field, b.__fbthrift_field_short_field);
  swap(a.__fbthrift_field_int_field, b.__fbthrift_field_int_field);
  swap(a.__fbthrift_field_long_field, b.__fbthrift_field_long_field);
  swap(a.__fbthrift_field_float_field, b.__fbthrift_field_float_field);
  swap(a.__fbthrift_field_double_field, b.__fbthrift_field_double_field);
  swap(a.__fbthrift_field_string_field, b.__fbthrift_field_string_field);
  swap(a.__fbthrift_field_binary_field, b.__fbthrift_field_binary_field);
  swap(a.__fbthrift_field_enum_field, b.__fbthrift_field_enum_field);
  swap(a.__fbthrift_field_list_field, b.__fbthrift_field_list_field);
  swap(a.__fbthrift_field_set_field, b.__fbthrift_field_set_field);
  swap(a.__fbthrift_field_map_field, b.__fbthrift_field_map_field);
  swap(a.__fbthrift_field_struct_field, b.__fbthrift_field_struct_field);
}

template void StructLevelTerseStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructLevelTerseStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructLevelTerseStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructLevelTerseStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void StructLevelTerseStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructLevelTerseStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructLevelTerseStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructLevelTerseStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructLevelTerseStruct,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::test::terse_write::deprecated::MyStruct>,
    "inconsistent use of json option");

} // namespace facebook::thrift::test::terse_write::deprecated

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::test::terse_write::deprecated::FieldLevelTerseStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::test::terse_write::deprecated::FieldLevelTerseStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::test::terse_write::deprecated {

const char* FieldLevelTerseStruct::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/test/terse_write/deprecated/FieldLevelTerseStruct";
}

std::string_view FieldLevelTerseStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<FieldLevelTerseStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view FieldLevelTerseStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<FieldLevelTerseStruct>::name;
}

FieldLevelTerseStruct::FieldLevelTerseStruct(const FieldLevelTerseStruct&) = default;
FieldLevelTerseStruct& FieldLevelTerseStruct::operator=(const FieldLevelTerseStruct&) = default;
FieldLevelTerseStruct::FieldLevelTerseStruct() :
    __fbthrift_field_terse_bool_field(),
    __fbthrift_field_terse_byte_field(),
    __fbthrift_field_terse_short_field(),
    __fbthrift_field_terse_int_field(),
    __fbthrift_field_terse_long_field(),
    __fbthrift_field_terse_float_field(),
    __fbthrift_field_terse_double_field(),
    __fbthrift_field_terse_enum_field(),
    __fbthrift_field_bool_field(),
    __fbthrift_field_byte_field(),
    __fbthrift_field_short_field(),
    __fbthrift_field_int_field(),
    __fbthrift_field_long_field(),
    __fbthrift_field_float_field(),
    __fbthrift_field_double_field(),
    __fbthrift_field_enum_field() {
}


FieldLevelTerseStruct::~FieldLevelTerseStruct() {}

FieldLevelTerseStruct::FieldLevelTerseStruct([[maybe_unused]] FieldLevelTerseStruct&& other) noexcept :
    __fbthrift_field_terse_bool_field(std::move(other.__fbthrift_field_terse_bool_field)),
    __fbthrift_field_terse_byte_field(std::move(other.__fbthrift_field_terse_byte_field)),
    __fbthrift_field_terse_short_field(std::move(other.__fbthrift_field_terse_short_field)),
    __fbthrift_field_terse_int_field(std::move(other.__fbthrift_field_terse_int_field)),
    __fbthrift_field_terse_long_field(std::move(other.__fbthrift_field_terse_long_field)),
    __fbthrift_field_terse_float_field(std::move(other.__fbthrift_field_terse_float_field)),
    __fbthrift_field_terse_double_field(std::move(other.__fbthrift_field_terse_double_field)),
    __fbthrift_field_terse_string_field(std::move(other.__fbthrift_field_terse_string_field)),
    __fbthrift_field_terse_binary_field(std::move(other.__fbthrift_field_terse_binary_field)),
    __fbthrift_field_terse_enum_field(std::move(other.__fbthrift_field_terse_enum_field)),
    __fbthrift_field_terse_list_field(std::move(other.__fbthrift_field_terse_list_field)),
    __fbthrift_field_terse_set_field(std::move(other.__fbthrift_field_terse_set_field)),
    __fbthrift_field_terse_map_field(std::move(other.__fbthrift_field_terse_map_field)),
    __fbthrift_field_terse_struct_field(std::move(other.__fbthrift_field_terse_struct_field)),
    __fbthrift_field_bool_field(std::move(other.__fbthrift_field_bool_field)),
    __fbthrift_field_byte_field(std::move(other.__fbthrift_field_byte_field)),
    __fbthrift_field_short_field(std::move(other.__fbthrift_field_short_field)),
    __fbthrift_field_int_field(std::move(other.__fbthrift_field_int_field)),
    __fbthrift_field_long_field(std::move(other.__fbthrift_field_long_field)),
    __fbthrift_field_float_field(std::move(other.__fbthrift_field_float_field)),
    __fbthrift_field_double_field(std::move(other.__fbthrift_field_double_field)),
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_binary_field(std::move(other.__fbthrift_field_binary_field)),
    __fbthrift_field_enum_field(std::move(other.__fbthrift_field_enum_field)),
    __fbthrift_field_list_field(std::move(other.__fbthrift_field_list_field)),
    __fbthrift_field_set_field(std::move(other.__fbthrift_field_set_field)),
    __fbthrift_field_map_field(std::move(other.__fbthrift_field_map_field)),
    __fbthrift_field_struct_field(std::move(other.__fbthrift_field_struct_field)),
    __isset(other.__isset) {
}

FieldLevelTerseStruct& FieldLevelTerseStruct::operator=([[maybe_unused]] FieldLevelTerseStruct&& other) noexcept {
    this->__fbthrift_field_terse_bool_field = std::move(other.__fbthrift_field_terse_bool_field);
    this->__fbthrift_field_terse_byte_field = std::move(other.__fbthrift_field_terse_byte_field);
    this->__fbthrift_field_terse_short_field = std::move(other.__fbthrift_field_terse_short_field);
    this->__fbthrift_field_terse_int_field = std::move(other.__fbthrift_field_terse_int_field);
    this->__fbthrift_field_terse_long_field = std::move(other.__fbthrift_field_terse_long_field);
    this->__fbthrift_field_terse_float_field = std::move(other.__fbthrift_field_terse_float_field);
    this->__fbthrift_field_terse_double_field = std::move(other.__fbthrift_field_terse_double_field);
    this->__fbthrift_field_terse_string_field = std::move(other.__fbthrift_field_terse_string_field);
    this->__fbthrift_field_terse_binary_field = std::move(other.__fbthrift_field_terse_binary_field);
    this->__fbthrift_field_terse_enum_field = std::move(other.__fbthrift_field_terse_enum_field);
    this->__fbthrift_field_terse_list_field = std::move(other.__fbthrift_field_terse_list_field);
    this->__fbthrift_field_terse_set_field = std::move(other.__fbthrift_field_terse_set_field);
    this->__fbthrift_field_terse_map_field = std::move(other.__fbthrift_field_terse_map_field);
    this->__fbthrift_field_terse_struct_field = std::move(other.__fbthrift_field_terse_struct_field);
    this->__fbthrift_field_bool_field = std::move(other.__fbthrift_field_bool_field);
    this->__fbthrift_field_byte_field = std::move(other.__fbthrift_field_byte_field);
    this->__fbthrift_field_short_field = std::move(other.__fbthrift_field_short_field);
    this->__fbthrift_field_int_field = std::move(other.__fbthrift_field_int_field);
    this->__fbthrift_field_long_field = std::move(other.__fbthrift_field_long_field);
    this->__fbthrift_field_float_field = std::move(other.__fbthrift_field_float_field);
    this->__fbthrift_field_double_field = std::move(other.__fbthrift_field_double_field);
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_binary_field = std::move(other.__fbthrift_field_binary_field);
    this->__fbthrift_field_enum_field = std::move(other.__fbthrift_field_enum_field);
    this->__fbthrift_field_list_field = std::move(other.__fbthrift_field_list_field);
    this->__fbthrift_field_set_field = std::move(other.__fbthrift_field_set_field);
    this->__fbthrift_field_map_field = std::move(other.__fbthrift_field_map_field);
    this->__fbthrift_field_struct_field = std::move(other.__fbthrift_field_struct_field);
    __isset = other.__isset;
    return *this;
}


FieldLevelTerseStruct::FieldLevelTerseStruct(apache::thrift::FragileConstructor, bool terse_bool_field__arg, ::std::int8_t terse_byte_field__arg, ::std::int16_t terse_short_field__arg, ::std::int32_t terse_int_field__arg, ::std::int64_t terse_long_field__arg, float terse_float_field__arg, double terse_double_field__arg, ::std::string terse_string_field__arg, ::std::string terse_binary_field__arg, ::facebook::thrift::test::terse_write::deprecated::MyEnum terse_enum_field__arg, ::std::vector<::std::int16_t> terse_list_field__arg, ::std::set<::std::int16_t> terse_set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> terse_map_field__arg, ::facebook::thrift::test::terse_write::deprecated::MyStruct terse_struct_field__arg, bool bool_field__arg, ::std::int8_t byte_field__arg, ::std::int16_t short_field__arg, ::std::int32_t int_field__arg, ::std::int64_t long_field__arg, float float_field__arg, double double_field__arg, ::std::string string_field__arg, ::std::string binary_field__arg, ::facebook::thrift::test::terse_write::deprecated::MyEnum enum_field__arg, ::std::vector<::std::int16_t> list_field__arg, ::std::set<::std::int16_t> set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> map_field__arg, ::facebook::thrift::test::terse_write::deprecated::MyStruct struct_field__arg) :
    __fbthrift_field_terse_bool_field(std::move(terse_bool_field__arg)),
    __fbthrift_field_terse_byte_field(std::move(terse_byte_field__arg)),
    __fbthrift_field_terse_short_field(std::move(terse_short_field__arg)),
    __fbthrift_field_terse_int_field(std::move(terse_int_field__arg)),
    __fbthrift_field_terse_long_field(std::move(terse_long_field__arg)),
    __fbthrift_field_terse_float_field(std::move(terse_float_field__arg)),
    __fbthrift_field_terse_double_field(std::move(terse_double_field__arg)),
    __fbthrift_field_terse_string_field(std::move(terse_string_field__arg)),
    __fbthrift_field_terse_binary_field(std::move(terse_binary_field__arg)),
    __fbthrift_field_terse_enum_field(std::move(terse_enum_field__arg)),
    __fbthrift_field_terse_list_field(std::move(terse_list_field__arg)),
    __fbthrift_field_terse_set_field(std::move(terse_set_field__arg)),
    __fbthrift_field_terse_map_field(std::move(terse_map_field__arg)),
    __fbthrift_field_terse_struct_field(std::move(terse_struct_field__arg)),
    __fbthrift_field_bool_field(std::move(bool_field__arg)),
    __fbthrift_field_byte_field(std::move(byte_field__arg)),
    __fbthrift_field_short_field(std::move(short_field__arg)),
    __fbthrift_field_int_field(std::move(int_field__arg)),
    __fbthrift_field_long_field(std::move(long_field__arg)),
    __fbthrift_field_float_field(std::move(float_field__arg)),
    __fbthrift_field_double_field(std::move(double_field__arg)),
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_binary_field(std::move(binary_field__arg)),
    __fbthrift_field_enum_field(std::move(enum_field__arg)),
    __fbthrift_field_list_field(std::move(list_field__arg)),
    __fbthrift_field_set_field(std::move(set_field__arg)),
    __fbthrift_field_map_field(std::move(map_field__arg)),
    __fbthrift_field_struct_field(std::move(struct_field__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
  __isset.set(folly::index_constant<9>(), true);
  __isset.set(folly::index_constant<10>(), true);
  __isset.set(folly::index_constant<11>(), true);
  __isset.set(folly::index_constant<12>(), true);
  __isset.set(folly::index_constant<13>(), true);
}


void FieldLevelTerseStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_terse_bool_field = bool();
  this->__fbthrift_field_terse_byte_field = ::std::int8_t();
  this->__fbthrift_field_terse_short_field = ::std::int16_t();
  this->__fbthrift_field_terse_int_field = ::std::int32_t();
  this->__fbthrift_field_terse_long_field = ::std::int64_t();
  this->__fbthrift_field_terse_float_field = float();
  this->__fbthrift_field_terse_double_field = double();
  this->__fbthrift_field_terse_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_terse_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_terse_enum_field = ::facebook::thrift::test::terse_write::deprecated::MyEnum();
  this->__fbthrift_field_terse_list_field.clear();
  this->__fbthrift_field_terse_set_field.clear();
  this->__fbthrift_field_terse_map_field.clear();
  this->__fbthrift_field_bool_field = bool();
  this->__fbthrift_field_byte_field = ::std::int8_t();
  this->__fbthrift_field_short_field = ::std::int16_t();
  this->__fbthrift_field_int_field = ::std::int32_t();
  this->__fbthrift_field_long_field = ::std::int64_t();
  this->__fbthrift_field_float_field = float();
  this->__fbthrift_field_double_field = double();
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_enum_field = ::facebook::thrift::test::terse_write::deprecated::MyEnum();
  this->__fbthrift_field_list_field.clear();
  this->__fbthrift_field_set_field.clear();
  this->__fbthrift_field_map_field.clear();
  __isset = {};
}

void FieldLevelTerseStruct::__fbthrift_clear_terse_fields() {
  this->__fbthrift_field_terse_bool_field = bool();
  this->__fbthrift_field_terse_byte_field = ::std::int8_t();
  this->__fbthrift_field_terse_short_field = ::std::int16_t();
  this->__fbthrift_field_terse_int_field = ::std::int32_t();
  this->__fbthrift_field_terse_long_field = ::std::int64_t();
  this->__fbthrift_field_terse_float_field = float();
  this->__fbthrift_field_terse_double_field = double();
  this->__fbthrift_field_terse_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_terse_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_terse_enum_field = ::facebook::thrift::test::terse_write::deprecated::MyEnum();
  this->__fbthrift_field_terse_list_field.clear();
  this->__fbthrift_field_terse_set_field.clear();
  this->__fbthrift_field_terse_map_field.clear();
}

bool FieldLevelTerseStruct::__fbthrift_is_empty() const {
  return false;
}

bool FieldLevelTerseStruct::operator==([[maybe_unused]] const FieldLevelTerseStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool FieldLevelTerseStruct::operator<([[maybe_unused]] const FieldLevelTerseStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::std::vector<::std::int16_t>& FieldLevelTerseStruct::get_list_field() const& {
  return __fbthrift_field_list_field;
}

::std::vector<::std::int16_t> FieldLevelTerseStruct::get_list_field() && {
  return std::move(__fbthrift_field_list_field);
}

const ::std::set<::std::int16_t>& FieldLevelTerseStruct::get_set_field() const& {
  return __fbthrift_field_set_field;
}

::std::set<::std::int16_t> FieldLevelTerseStruct::get_set_field() && {
  return std::move(__fbthrift_field_set_field);
}

const ::std::map<::std::int16_t, ::std::int16_t>& FieldLevelTerseStruct::get_map_field() const& {
  return __fbthrift_field_map_field;
}

::std::map<::std::int16_t, ::std::int16_t> FieldLevelTerseStruct::get_map_field() && {
  return std::move(__fbthrift_field_map_field);
}

const ::facebook::thrift::test::terse_write::deprecated::MyStruct& FieldLevelTerseStruct::get_struct_field() const& {
  return __fbthrift_field_struct_field;
}

::facebook::thrift::test::terse_write::deprecated::MyStruct FieldLevelTerseStruct::get_struct_field() && {
  return std::move(__fbthrift_field_struct_field);
}


void swap([[maybe_unused]] FieldLevelTerseStruct& a, [[maybe_unused]] FieldLevelTerseStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_terse_bool_field, b.__fbthrift_field_terse_bool_field);
  swap(a.__fbthrift_field_terse_byte_field, b.__fbthrift_field_terse_byte_field);
  swap(a.__fbthrift_field_terse_short_field, b.__fbthrift_field_terse_short_field);
  swap(a.__fbthrift_field_terse_int_field, b.__fbthrift_field_terse_int_field);
  swap(a.__fbthrift_field_terse_long_field, b.__fbthrift_field_terse_long_field);
  swap(a.__fbthrift_field_terse_float_field, b.__fbthrift_field_terse_float_field);
  swap(a.__fbthrift_field_terse_double_field, b.__fbthrift_field_terse_double_field);
  swap(a.__fbthrift_field_terse_string_field, b.__fbthrift_field_terse_string_field);
  swap(a.__fbthrift_field_terse_binary_field, b.__fbthrift_field_terse_binary_field);
  swap(a.__fbthrift_field_terse_enum_field, b.__fbthrift_field_terse_enum_field);
  swap(a.__fbthrift_field_terse_list_field, b.__fbthrift_field_terse_list_field);
  swap(a.__fbthrift_field_terse_set_field, b.__fbthrift_field_terse_set_field);
  swap(a.__fbthrift_field_terse_map_field, b.__fbthrift_field_terse_map_field);
  swap(a.__fbthrift_field_terse_struct_field, b.__fbthrift_field_terse_struct_field);
  swap(a.__fbthrift_field_bool_field, b.__fbthrift_field_bool_field);
  swap(a.__fbthrift_field_byte_field, b.__fbthrift_field_byte_field);
  swap(a.__fbthrift_field_short_field, b.__fbthrift_field_short_field);
  swap(a.__fbthrift_field_int_field, b.__fbthrift_field_int_field);
  swap(a.__fbthrift_field_long_field, b.__fbthrift_field_long_field);
  swap(a.__fbthrift_field_float_field, b.__fbthrift_field_float_field);
  swap(a.__fbthrift_field_double_field, b.__fbthrift_field_double_field);
  swap(a.__fbthrift_field_string_field, b.__fbthrift_field_string_field);
  swap(a.__fbthrift_field_binary_field, b.__fbthrift_field_binary_field);
  swap(a.__fbthrift_field_enum_field, b.__fbthrift_field_enum_field);
  swap(a.__fbthrift_field_list_field, b.__fbthrift_field_list_field);
  swap(a.__fbthrift_field_set_field, b.__fbthrift_field_set_field);
  swap(a.__fbthrift_field_map_field, b.__fbthrift_field_map_field);
  swap(a.__fbthrift_field_struct_field, b.__fbthrift_field_struct_field);
  swap(a.__isset, b.__isset);
}

template void FieldLevelTerseStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FieldLevelTerseStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FieldLevelTerseStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FieldLevelTerseStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FieldLevelTerseStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FieldLevelTerseStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FieldLevelTerseStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FieldLevelTerseStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        FieldLevelTerseStruct,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::test::terse_write::deprecated::MyStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        FieldLevelTerseStruct,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::test::terse_write::deprecated::MyStruct>,
    "inconsistent use of json option");

} // namespace facebook::thrift::test::terse_write::deprecated

namespace facebook::thrift::test::terse_write::deprecated { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace facebook::thrift::test::terse_write::deprecated
namespace apache::thrift::detail::annotation {
}
