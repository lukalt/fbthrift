#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection import (
  ArgumentSpec as __ArgumentSpec,
  InterfaceSpec as __InterfaceSpec,
  MethodSpec as __MethodSpec,
  NumberType as __NumberType,
)

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types

import apache.thrift.fixtures.types.module.types as _apache_thrift_fixtures_types_module_types


def get_reflection__SomeService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="SomeService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="bounce_map",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="m",
                    type=_apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=_apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="binary_keyed_map",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="r",
                    type=_apache_thrift_fixtures_types_module_types.List__i64,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=_apache_thrift_fixtures_types_module_types.Map__binary_i64,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec
