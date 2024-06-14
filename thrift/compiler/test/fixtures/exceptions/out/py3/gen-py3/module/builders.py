#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import module.types as _module_types


_fbthrift_struct_type__Fiery = _module_types.Fiery
class Fiery_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__Fiery

    def __init__(self):
        self.message: _typing.Optional[str] = None

    def __iter__(self):
        yield "message", self.message

_fbthrift_struct_type__Serious = _module_types.Serious
class Serious_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__Serious

    def __init__(self):
        self.sonnet: _typing.Optional[str] = None

    def __iter__(self):
        yield "sonnet", self.sonnet

_fbthrift_struct_type__ComplexFieldNames = _module_types.ComplexFieldNames
class ComplexFieldNames_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__ComplexFieldNames

    def __init__(self):
        self.error_message: _typing.Optional[str] = None
        self.internal_error_message: _typing.Optional[str] = None

    def __iter__(self):
        yield "error_message", self.error_message
        yield "internal_error_message", self.internal_error_message

_fbthrift_struct_type__CustomFieldNames = _module_types.CustomFieldNames
class CustomFieldNames_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__CustomFieldNames

    def __init__(self):
        self.error_message: _typing.Optional[str] = None
        self.internal_error_message: _typing.Optional[str] = None

    def __iter__(self):
        yield "error_message", self.error_message
        yield "internal_error_message", self.internal_error_message

_fbthrift_struct_type__ExceptionWithPrimitiveField = _module_types.ExceptionWithPrimitiveField
class ExceptionWithPrimitiveField_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__ExceptionWithPrimitiveField

    def __init__(self):
        self.message: _typing.Optional[str] = None
        self.error_code: _typing.Optional[int] = None

    def __iter__(self):
        yield "message", self.message
        yield "error_code", self.error_code

_fbthrift_struct_type__ExceptionWithStructuredAnnotation = _module_types.ExceptionWithStructuredAnnotation
class ExceptionWithStructuredAnnotation_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__ExceptionWithStructuredAnnotation

    def __init__(self):
        self.message_field: _typing.Optional[str] = None
        self.error_code: _typing.Optional[int] = None

    def __iter__(self):
        yield "message_field", self.message_field
        yield "error_code", self.error_code

_fbthrift_struct_type__Banal = _module_types.Banal
class Banal_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__Banal

    def __init__(self):
        pass

    def __iter__(self):
        pass

