#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-enum/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport test.fixtures.enumstrict.module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-py3/module/types.h":
  pass


cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h" namespace "::test::fixtures::enumstrict":
    cdef cppclass cEmptyEnum "::test::fixtures::enumstrict::EmptyEnum":
        pass

    cdef cppclass cMyEnum "::test::fixtures::enumstrict::MyEnum":
        pass

    cdef cppclass cMyBigEnum "::test::fixtures::enumstrict::MyBigEnum":
        pass





cdef class EmptyEnum(thrift.py3.types.CompiledEnum):
    pass


cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass


cdef class MyBigEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types_custom_protocol.h" namespace "::test::fixtures::enumstrict":

    cdef cppclass cMyStruct "::test::fixtures::enumstrict::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)
        __field_ref[cMyEnum] myEnum_ref "myEnum_ref" ()
        __field_ref[cMyBigEnum] myBigEnum_ref "myBigEnum_ref" ()




cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object myEnum_impl(self)
    cdef inline object myBigEnum_impl(self)
    cdef object __fbthrift_cached_myEnum
    cdef object __fbthrift_cached_myBigEnum

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct])


cdef class Map__MyEnum_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cMyEnum,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cMyEnum,string]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cMyEnum,string]] Map__MyEnum_string__make_instance(object items) except *


cdef extern from "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_constants.h" namespace "::test::fixtures::enumstrict":
    cdef cMyEnum ckOne "::test::fixtures::enumstrict::module_constants::kOne"()
    cdef cmap[cMyEnum,string] cenumNames "::test::fixtures::enumstrict::module_constants::enumNames"()
