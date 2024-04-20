#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
cimport b.types as _b_types
import b.types as _b_types
cimport c.types as _c_types
import c.types as _c_types

cimport a.types_reflection as _types_reflection



@__cython.auto_pickle(False)
cdef class A(thrift.py3.types.Struct):
    def __init__(A self, **kwargs):
        self._cpp_obj = make_shared[cA]()
        self._fields_setter = _fbthrift_types_fields.__A_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(A self, **kwargs):
        if not kwargs:
            return self
        cdef A __fbthrift_inst = A.__new__(A)
        __fbthrift_inst._cpp_obj = make_shared[cA](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__A_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("A", {
          "b": deref(self._cpp_obj).b_ref().has_value(),
          "other": deref(self._cpp_obj).other_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cA] cpp_obj):
        __fbthrift_inst = <A>A.__new__(A)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline b_impl(self):

        if self.__fbthrift_cached_b is None:
            self.__fbthrift_cached_b = List__List__c_C._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).b_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_b

    @property
    def b(self):
        return self.b_impl()

    cdef inline other_impl(self):

        if self.__fbthrift_cached_other is None:
            self.__fbthrift_cached_other = List__c_C._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).other_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_other

    @property
    def other(self):
        return self.other_impl()


    def __hash__(A self):
        return super().__hash__()

    def __repr__(A self):
        return super().__repr__()

    def __str__(A self):
        return super().__str__()


    def __copy__(A self):
        cdef shared_ptr[cA] cpp_obj = make_shared[cA](
            deref(self._cpp_obj)
        )
        return A._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cA](
            self._cpp_obj,
            (<A>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__A()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cA].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "a.A"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cA](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 2

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(A self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cA](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(A self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cA]()
        with nogil:
            needed = serializer.cdeserialize[cA](buf, self._cpp_obj.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "a.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.A, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("a.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.A, self)
@__cython.auto_pickle(False)
cdef class List__c_C(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__c_C):
            self._cpp_obj = (<List__c_C> items)._cpp_obj
        else:
            self._cpp_obj = List__c_C._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[_c_types.cC]] c_items):
        __fbthrift_inst = <List__c_C>List__c_C.__new__(List__c_C)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__c_C self):
        cdef shared_ptr[vector[_c_types.cC]] cpp_obj = make_shared[vector[_c_types.cC]](
            deref(self._cpp_obj)
        )
        return List__c_C._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[_c_types.cC]] _make_instance(object items) except *:
        cdef shared_ptr[vector[_c_types.cC]] c_inst = make_shared[vector[_c_types.cC]]()
        if items is not None:
            for item in items:
                if not isinstance(item, _c_types.C):
                    raise TypeError(f"{item!r} is not of type _c_types.C")
                deref(c_inst).push_back(deref((<_c_types.C>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__c_C._fbthrift_create(
            __list_slice[vector[_c_types.cC]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[_c_types.cC] citem
        __list_getitem(self._cpp_obj, index, citem)
        return _c_types.C._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, _c_types.C):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef _c_types.cC citem = deref((<_c_types.C>item)._cpp_obj)
        cdef __optional[size_t] found = __list_index[vector[_c_types.cC]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef _c_types.cC citem = deref((<_c_types.C>item)._cpp_obj)
        return __list_count[vector[_c_types.cC]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__c_C()


Sequence.register(List__c_C)

@__cython.auto_pickle(False)
cdef class List__List__c_C(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__List__c_C):
            self._cpp_obj = (<List__List__c_C> items)._cpp_obj
        else:
            self._cpp_obj = List__List__c_C._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[vector[_c_types.cC]]] c_items):
        __fbthrift_inst = <List__List__c_C>List__List__c_C.__new__(List__List__c_C)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__List__c_C self):
        cdef shared_ptr[vector[vector[_c_types.cC]]] cpp_obj = make_shared[vector[vector[_c_types.cC]]](
            deref(self._cpp_obj)
        )
        return List__List__c_C._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[vector[_c_types.cC]]] _make_instance(object items) except *:
        cdef shared_ptr[vector[vector[_c_types.cC]]] c_inst = make_shared[vector[vector[_c_types.cC]]]()
        if items is not None:
            for item in items:
                if item is None:
                    raise TypeError("None is not of the type _typing.Sequence[_c_types.C]")
                if not isinstance(item, List__c_C):
                    item = List__c_C(item)
                deref(c_inst).push_back(deref((<List__c_C>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__List__c_C._fbthrift_create(
            __list_slice[vector[vector[_c_types.cC]]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[vector[_c_types.cC]] citem
        __list_getitem(self._cpp_obj, index, citem)
        return List__c_C._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, List__c_C):
            return item
        try:
            return List__c_C(item)
        except:
            pass

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef vector[_c_types.cC] citem = deref((<List__c_C>item)._cpp_obj)
        cdef __optional[size_t] found = __list_index[vector[vector[_c_types.cC]]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef vector[_c_types.cC] citem = deref((<List__c_C>item)._cpp_obj)
        return __list_count[vector[vector[_c_types.cC]]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__List__c_C()


Sequence.register(List__List__c_C)

