#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/extend.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp cimport bool as cbool
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.set cimport set as cset
from libcpp.string cimport string
from libcpp.vector cimport vector

from folly cimport cFollyFuture, cFollyTry, cFollyUnit
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.common cimport cRpcOptions
from thrift.py3.client cimport cClientWrapper

cimport my.namespacing.extend.test.extend.types as _my_namespacing_extend_test_extend_types

cimport my.namespacing.test.hsmodule.types as _my_namespacing_test_hsmodule_types
cimport my.namespacing.test.hsmodule.clients_wrapper as _my_namespacing_test_hsmodule_clients_wrapper

cdef extern from "thrift/compiler/test/fixtures/namespace/gen-cpp2/extend_clients.h" namespace "::cpp2":
  cdef cppclass cExtendTestServiceAsyncClient "::cpp2::ExtendTestServiceAsyncClient":
      pass

cdef extern from "<utility>" namespace "std":
  cdef unique_ptr[cExtendTestServiceClientWrapper] move(unique_ptr[cExtendTestServiceClientWrapper])

cdef extern from "thrift/lib/cpp/TProcessorEventHandler.h" namespace "::apache::thrift":
  cdef cppclass cTProcessorEventHandler "apache::thrift::TProcessorEventHandler":
    pass

cdef extern from "thrift/compiler/test/fixtures/namespace/gen-py3/extend/clients_wrapper.h" namespace "::cpp2":
  cdef cppclass cExtendTestServiceClientWrapper "::cpp2::ExtendTestServiceClientWrapper"(_my_namespacing_test_hsmodule_clients_wrapper.cHsTestServiceClientWrapper):

    cFollyFuture[cbool] check(cRpcOptions, 
      _my_namespacing_test_hsmodule_types.cHsFoo arg_struct1,)

