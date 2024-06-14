#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/optionals/src/module.thrift
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

cdef extern from "thrift/compiler/test/fixtures/optionals/gen-py3/module/types.h":
  pass


cdef extern from "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cAnimal "::cpp2::Animal":
        pass





cdef class Animal(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cColor "::cpp2::Color":
        cColor() except +
        cColor(const cColor&) except +
        bint operator==(cColor&)
        bint operator!=(cColor&)
        bint operator<(cColor&)
        bint operator>(cColor&)
        bint operator<=(cColor&)
        bint operator>=(cColor&)
        __field_ref[double] red_ref "red_ref" ()
        __field_ref[double] green_ref "green_ref" ()
        __field_ref[double] blue_ref "blue_ref" ()
        __field_ref[double] alpha_ref "alpha_ref" ()


    cdef cppclass cVehicle "::cpp2::Vehicle":
        cVehicle() except +
        cVehicle(const cVehicle&) except +
        bint operator==(cVehicle&)
        bint operator!=(cVehicle&)
        bint operator<(cVehicle&)
        bint operator>(cVehicle&)
        bint operator<=(cVehicle&)
        bint operator>=(cVehicle&)
        __field_ref[cColor] color_ref "color_ref" ()
        __optional_field_ref[string] licensePlate_ref "licensePlate_ref" ()
        __optional_field_ref[string] description_ref "description_ref" ()
        __optional_field_ref[string] name_ref "name_ref" ()
        __optional_field_ref[cbool] hasAC_ref "hasAC_ref" ()


    cdef cppclass cPerson "::cpp2::Person":
        cPerson() except +
        cPerson(const cPerson&) except +
        bint operator==(cPerson&)
        bint operator!=(cPerson&)
        bint operator<(cPerson&)
        bint operator>(cPerson&)
        bint operator<=(cPerson&)
        bint operator>=(cPerson&)
        __field_ref[cint64_t] id_ref "id_ref" ()
        __field_ref[string] name_ref "name_ref" ()
        __optional_field_ref[cint16_t] age_ref "age_ref" ()
        __optional_field_ref[string] address_ref "address_ref" ()
        __optional_field_ref[cColor] favoriteColor_ref "favoriteColor_ref" ()
        __optional_field_ref[cset[cint64_t]] friends_ref "friends_ref" ()
        __optional_field_ref[cint64_t] bestFriend_ref "bestFriend_ref" ()
        __optional_field_ref[cmap[cAnimal,string]] petNames_ref "petNames_ref" ()
        __optional_field_ref[cAnimal] afraidOfAnimal_ref "afraidOfAnimal_ref" ()
        __optional_field_ref[vector[cVehicle]] vehicles_ref "vehicles_ref" ()




cdef class Color(thrift.py3.types.Struct):
    cdef shared_ptr[cColor] _cpp_obj
    cdef _fbthrift_types_fields.__Color_FieldsSetter _fields_setter
    cdef inline object red_impl(self)
    cdef inline object green_impl(self)
    cdef inline object blue_impl(self)
    cdef inline object alpha_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cColor])



cdef class Vehicle(thrift.py3.types.Struct):
    cdef shared_ptr[cVehicle] _cpp_obj
    cdef _fbthrift_types_fields.__Vehicle_FieldsSetter _fields_setter
    cdef inline object color_impl(self)
    cdef inline object licensePlate_impl(self)
    cdef inline object description_impl(self)
    cdef inline object name_impl(self)
    cdef inline object hasAC_impl(self)
    cdef Color __fbthrift_cached_color

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cVehicle])



cdef class Person(thrift.py3.types.Struct):
    cdef shared_ptr[cPerson] _cpp_obj
    cdef _fbthrift_types_fields.__Person_FieldsSetter _fields_setter
    cdef inline object id_impl(self)
    cdef inline object name_impl(self)
    cdef inline object age_impl(self)
    cdef inline object address_impl(self)
    cdef inline object favoriteColor_impl(self)
    cdef inline object friends_impl(self)
    cdef inline object bestFriend_impl(self)
    cdef inline object petNames_impl(self)
    cdef inline object afraidOfAnimal_impl(self)
    cdef inline object vehicles_impl(self)
    cdef Color __fbthrift_cached_favoriteColor
    cdef Set__i64 __fbthrift_cached_friends
    cdef Map__Animal_string __fbthrift_cached_petNames
    cdef object __fbthrift_cached_afraidOfAnimal
    cdef List__Vehicle __fbthrift_cached_vehicles

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cPerson])


cdef class Set__i64(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint64_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint64_t]])

cdef shared_ptr[cset[cint64_t]] Set__i64__make_instance(object items) except *

cdef class Map__Animal_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cAnimal,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cAnimal,string]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cAnimal,string]] Map__Animal_string__make_instance(object items) except *

cdef class List__Vehicle(thrift.py3.types.List):
    cdef shared_ptr[vector[cVehicle]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cVehicle]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cVehicle]] List__Vehicle__make_instance(object items) except *


