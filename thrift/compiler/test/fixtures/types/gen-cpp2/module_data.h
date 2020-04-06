/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"

namespace apache { namespace thrift { namespace fixtures { namespace types {

struct _has_bitwise_opsEnumDataStorage {
  using type = has_bitwise_ops;
  static constexpr const std::size_t size = 5;
  static constexpr const std::array<has_bitwise_ops, 5> values = {{
    has_bitwise_ops::none,
    has_bitwise_ops::zero,
    has_bitwise_ops::one,
    has_bitwise_ops::two,
    has_bitwise_ops::three,
  }};
  static constexpr const std::array<folly::StringPiece, 5> names = {{
    "none",
    "zero",
    "one",
    "two",
    "three",
  }};
};

struct _is_unscopedEnumDataStorage {
  using type = is_unscoped;
  static constexpr const std::size_t size = 2;
  static constexpr const std::array<is_unscoped, 2> values = {{
    is_unscoped::hello,
    is_unscoped::world,
  }};
  static constexpr const std::array<folly::StringPiece, 2> names = {{
    "hello",
    "world",
  }};
};

struct _MyForwardRefEnumEnumDataStorage {
  using type = MyForwardRefEnum;
  static constexpr const std::size_t size = 2;
  static constexpr const std::array<MyForwardRefEnum, 2> values = {{
    MyForwardRefEnum::ZERO,
    MyForwardRefEnum::NONZERO,
  }};
  static constexpr const std::array<folly::StringPiece, 2> names = {{
    "ZERO",
    "NONZERO",
  }};
};

struct _MyEnumAEnumDataStorage {
  using type = MyEnumA;
  static constexpr const std::size_t size = 3;
  static constexpr const std::array<MyEnumA, 3> values = {{
    MyEnumA::fieldA,
    MyEnumA::fieldB,
    MyEnumA::fieldC,
  }};
  static constexpr const std::array<folly::StringPiece, 3> names = {{
    "fieldA",
    "fieldB",
    "fieldC",
  }};
};

}}}} // apache::thrift::fixtures::types

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::apache::thrift::fixtures::types::has_bitwise_ops> {
  using storage_type = ::apache::thrift::fixtures::types::_has_bitwise_opsEnumDataStorage;
};
template <> struct TEnumDataStorage<::apache::thrift::fixtures::types::is_unscoped> {
  using storage_type = ::apache::thrift::fixtures::types::_is_unscopedEnumDataStorage;
};
template <> struct TEnumDataStorage<::apache::thrift::fixtures::types::MyForwardRefEnum> {
  using storage_type = ::apache::thrift::fixtures::types::_MyForwardRefEnumEnumDataStorage;
};
template <> struct TEnumDataStorage<::apache::thrift::fixtures::types::MyEnumA> {
  using storage_type = ::apache::thrift::fixtures::types::_MyEnumAEnumDataStorage;
};

}} // apache::thrift
