#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/module.thrift
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


import my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types


def get_reflection__TestService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="TestService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="init",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="int1",
                    type=int,
                    kind=__NumberType.I64,
                    annotations={
                    },
                ),
            ),
            result=int,
            result_kind=__NumberType.I64,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec
