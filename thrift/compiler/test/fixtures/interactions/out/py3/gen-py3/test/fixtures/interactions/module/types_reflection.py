#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection import (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
    StructSpec as __StructSpec,
    ListSpec as __ListSpec,
    SetSpec as __SetSpec,
    MapSpec as __MapSpec,
    FieldSpec as __FieldSpec,
)


import test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types



def get_reflection__CustomException() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="CustomException",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="message",
            py_name="message",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
