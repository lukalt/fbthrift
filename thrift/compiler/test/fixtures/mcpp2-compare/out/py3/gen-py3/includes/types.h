/**
 * Autogenerated by Thrift for includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_data.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_metadata.h"
namespace thrift {
namespace py3 {


template<>
inline const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::a::different::ns::AnEnum>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}



template<>
inline void reset_field<::a::different::ns::AStruct>(
    ::a::different::ns::AStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.FieldA_ref().copy_from(default_inst<::a::different::ns::AStruct>().FieldA_ref());
      return;
  }
}

template<>
inline void reset_field<::a::different::ns::AStructB>(
    ::a::different::ns::AStructB& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.FieldA_ref().reset();
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::a::different::ns::AStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::a::different::ns::AStructB>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
