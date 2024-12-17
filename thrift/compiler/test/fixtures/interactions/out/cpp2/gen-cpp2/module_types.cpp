/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "module";


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::CustomException>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::CustomException>;
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

namespace cpp2 {

std::string_view CustomException::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<CustomException>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view CustomException::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<CustomException>::name;
}

CustomException::CustomException(const CustomException&) = default;
CustomException& CustomException::operator=(const CustomException&) = default;
CustomException::CustomException() {
}


CustomException::~CustomException() {}

CustomException::CustomException([[maybe_unused]] CustomException&& other) noexcept :
    __fbthrift_field_message(std::move(other.__fbthrift_field_message)),
    __isset(other.__isset) {
}

CustomException& CustomException::operator=([[maybe_unused]] CustomException&& other) noexcept {
    this->__fbthrift_field_message = std::move(other.__fbthrift_field_message);
    __isset = other.__isset;
    return *this;
}


CustomException::CustomException(apache::thrift::FragileConstructor, ::std::string message__arg) :
    __fbthrift_field_message(std::move(message__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void CustomException::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_message = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void CustomException::__fbthrift_clear_terse_fields() {
}

bool CustomException::__fbthrift_is_empty() const {
  return false;
}

bool CustomException::operator==([[maybe_unused]] const CustomException& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool CustomException::operator<([[maybe_unused]] const CustomException& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] CustomException& a, [[maybe_unused]] CustomException& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_message, b.__fbthrift_field_message);
  swap(a.__isset, b.__isset);
}

template void CustomException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t CustomException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t CustomException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t CustomException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void CustomException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t CustomException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t CustomException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t CustomException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::ShouldBeBoxed>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::ShouldBeBoxed>;
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

namespace cpp2 {

std::string_view ShouldBeBoxed::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<ShouldBeBoxed>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view ShouldBeBoxed::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<ShouldBeBoxed>::name;
}

ShouldBeBoxed::ShouldBeBoxed(const ShouldBeBoxed&) = default;
ShouldBeBoxed& ShouldBeBoxed::operator=(const ShouldBeBoxed&) = default;
ShouldBeBoxed::ShouldBeBoxed() {
}


ShouldBeBoxed::~ShouldBeBoxed() {}

ShouldBeBoxed::ShouldBeBoxed([[maybe_unused]] ShouldBeBoxed&& other) noexcept :
    __fbthrift_field_sessionId(std::move(other.__fbthrift_field_sessionId)),
    __isset(other.__isset) {
}

ShouldBeBoxed& ShouldBeBoxed::operator=([[maybe_unused]] ShouldBeBoxed&& other) noexcept {
    this->__fbthrift_field_sessionId = std::move(other.__fbthrift_field_sessionId);
    __isset = other.__isset;
    return *this;
}


ShouldBeBoxed::ShouldBeBoxed(apache::thrift::FragileConstructor, ::std::string sessionId__arg) :
    __fbthrift_field_sessionId(std::move(sessionId__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void ShouldBeBoxed::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_sessionId = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void ShouldBeBoxed::__fbthrift_clear_terse_fields() {
}

bool ShouldBeBoxed::__fbthrift_is_empty() const {
  return false;
}

bool ShouldBeBoxed::operator==([[maybe_unused]] const ShouldBeBoxed& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool ShouldBeBoxed::operator<([[maybe_unused]] const ShouldBeBoxed& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] ShouldBeBoxed& a, [[maybe_unused]] ShouldBeBoxed& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_sessionId, b.__fbthrift_field_sessionId);
  swap(a.__isset, b.__isset);
}

template void ShouldBeBoxed::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ShouldBeBoxed::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ShouldBeBoxed::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ShouldBeBoxed::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ShouldBeBoxed::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ShouldBeBoxed::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ShouldBeBoxed::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ShouldBeBoxed::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace cpp2

namespace cpp2 { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace cpp2
namespace apache::thrift::detail::annotation {
}
