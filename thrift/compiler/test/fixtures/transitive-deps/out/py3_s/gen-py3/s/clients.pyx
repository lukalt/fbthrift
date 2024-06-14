#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/transitive-deps/src/s.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper, cClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception
from thrift.python.exceptions cimport create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from folly.cast cimport down_cast_ptr
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
from thrift.py3.types cimport make_unique
import thrift.py3.client
cimport thrift.py3.client
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport s.types as _s_types
import s.types as _s_types
cimport b.types as _b_types
import b.types as _b_types
cimport c.types as _c_types
import c.types as _c_types

import s.services_reflection as _services_reflection
cimport s.services_reflection as _services_reflection

from s.clients_wrapper cimport cTestServiceAsyncClient, cTestServiceClientWrapper


cdef void TestService_test_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException[_c_types.cE]():
        try:
            exc = _c_types.E._fbthrift_create(try_make_shared_exception[_c_types.cE](result.exception()))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))
        else:
            pyfuture.set_exception(exc)
    elif result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _TestService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class TestService(thrift.py3.client.Client):
    annotations = _TestService_annotations

    cdef const type_info* _typeid(TestService self):
        return &typeid(cTestServiceAsyncClient)

    cdef bind_client(TestService self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cTestServiceAsyncClient, cTestServiceClientWrapper](
            cmove(channel)
        )

    @cython.always_allow_keywords(True)
    def test(
            TestService self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cTestServiceClientWrapper, cClientWrapper](self._client.get()).test(rpc_options._cpp_obj, 
            ),
            TestService_test_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)


    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__TestService(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cTestServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "s.TestService"

