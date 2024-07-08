#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
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

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-py3/module/types.h":
  pass

cdef extern from * nogil:
    cdef cppclass std_deque_std_string "std::deque<std::string>":
        ctypedef string value_type
        ctypedef size_t size_type

        cppclass iterator:
            string& operator*()
            iterator operator++()
            bint operator==(iterator)
            bint operator!=(iterator)
        cppclass reverse_iterator:
            string& operator*()
            iterator operator++()
            bint operator==(reverse_iterator)
            bint operator!=(reverse_iterator)
        cppclass const_iterator(iterator):
            pass
        cppclass const_reverse_iterator(reverse_iterator):
            pass

        std_deque_std_string() except +
        std_deque_std_string(std_deque_std_string&) except +

        string& operator[](size_type)
        void push_back(string&) except +
        size_type size()
        iterator begin()
        const_iterator const_begin "begin"()
        iterator end()
        const_iterator const_end "end"()
        reverse_iterator rbegin()
        const_reverse_iterator const_rbegin "rbegin"()
        reverse_iterator rend()
        const_reverse_iterator const_rend "rend"()
        void clear()
        bint empty()


cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cMyEnum "::cpp2::YourEnum":
        pass





cdef class MyEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cMyStructNestedAnnotation "::cpp2::MyStructNestedAnnotation":
        cMyStructNestedAnnotation() except +
        cMyStructNestedAnnotation(const cMyStructNestedAnnotation&) except +
        bint operator==(cMyStructNestedAnnotation&)
        bint operator!=(cMyStructNestedAnnotation&)
        bint operator<(cMyStructNestedAnnotation&)
        bint operator>(cMyStructNestedAnnotation&)
        bint operator<=(cMyStructNestedAnnotation&)
        bint operator>=(cMyStructNestedAnnotation&)
        __field_ref[string] name_ref "name_ref" ()


    cdef cppclass cSecretStruct "::cpp2::SecretStruct":
        cSecretStruct() except +
        cSecretStruct(const cSecretStruct&) except +
        bint operator==(cSecretStruct&)
        bint operator!=(cSecretStruct&)
        bint operator<(cSecretStruct&)
        bint operator>(cSecretStruct&)
        bint operator<=(cSecretStruct&)
        bint operator>=(cSecretStruct&)
        __field_ref[cint64_t] id_ref "id_ref" ()
        __field_ref[string] password_ref "password_ref" ()




cdef class MyStructNestedAnnotation(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStructNestedAnnotation] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter _fields_setter
    cdef inline object name_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cMyStructNestedAnnotation])



cdef class SecretStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cSecretStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__SecretStruct_FieldsSetter _fields_setter
    cdef inline object id_impl(self)
    cdef inline object password_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cSecretStruct])


cdef std_deque_std_string std_deque_std_string__List__string__make_instance(object items) except *
cdef object std_deque_std_string__List__string__from_cpp(const std_deque_std_string&) except *


cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_constants.h" namespace "::cpp2":
    cdef cMyStruct cmyStruct "::cpp2::module_constants::myStruct"()
