/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"

namespace facebook::ns::qwerty {

struct enums_constants {

  static ::std::map<::std::string, ::facebook::ns::qwerty::AnEnumB> const& MapStringEnum();

  static ::std::map<::facebook::ns::qwerty::AnEnumC, ::std::string> const& MapEnumString();

  static ::std::map<::facebook::ns::qwerty::AnEnumA, ::std::set<::facebook::ns::qwerty::AnEnumB>> const& ConstantMap1();

  static ::std::map<::facebook::ns::qwerty::AnEnumC, ::std::map<::std::int16_t, ::std::set<::std::int16_t>>> const& ConstantMap2();

};

} // facebook::ns::qwerty
