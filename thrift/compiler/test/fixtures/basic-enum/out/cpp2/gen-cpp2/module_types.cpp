/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-enum/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

folly::Range<::test::fixtures::enumstrict::EmptyEnum const*> const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::values = {};
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::names = {};

bool TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

folly::Range<::test::fixtures::enumstrict::MyEnum const*> const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::values);
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::names);

bool TEnumTraits<::test::fixtures::enumstrict::MyEnum>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::enumstrict::MyEnum>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

folly::Range<::test::fixtures::enumstrict::MyBigEnum const*> const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::values);
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::names);

bool TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::enumstrict::MyStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::enumstrict::MyStruct>;
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

namespace test::fixtures::enumstrict {

std::string_view MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view MyStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyStruct>::name;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::test::fixtures::enumstrict::MyEnum myEnum__arg, ::test::fixtures::enumstrict::MyBigEnum myBigEnum__arg) :
    __fbthrift_field_myEnum(std::move(myEnum__arg)),
    __fbthrift_field_myBigEnum(std::move(myBigEnum__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_myEnum = ::test::fixtures::enumstrict::MyEnum();
  this->__fbthrift_field_myBigEnum = ::test::fixtures::enumstrict::MyBigEnum();
  __isset = {};
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyStruct::operator<([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] MyStruct& a, [[maybe_unused]] MyStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_myEnum, b.__fbthrift_field_myEnum);
  swap(a.__fbthrift_field_myBigEnum, b.__fbthrift_field_myBigEnum);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // test::fixtures::enumstrict

namespace test::fixtures::enumstrict { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // test::fixtures::enumstrict
namespace apache::thrift::detail::annotation {
}
