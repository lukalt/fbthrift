#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/module.thrift
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

cimport my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types


cdef extern from "thrift/compiler/test/fixtures/namespace/gen-cpp2/module_clients.h" namespace "::cpp2":
  cdef cppclass cTestServiceAsyncClient "::cpp2::TestServiceAsyncClient":
      pass

cdef extern from "<utility>" namespace "std":
  cdef unique_ptr[cTestServiceClientWrapper] move(unique_ptr[cTestServiceClientWrapper])

cdef extern from "thrift/lib/cpp/TProcessorEventHandler.h" namespace "::apache::thrift":
  cdef cppclass cTProcessorEventHandler "apache::thrift::TProcessorEventHandler":
    pass

cdef extern from "thrift/compiler/test/fixtures/namespace/gen-py3/module/clients_wrapper.h" namespace "::cpp2":
  cdef cppclass cTestServiceClientWrapper "::cpp2::TestServiceClientWrapper":
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollyFuture[cint64_t] init(cRpcOptions, 
      cint64_t arg_int1,)

