
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_unify_thrift_python_type_hints` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import abc as _abc
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import apache.thrift.type.id.thrift_abstract_types
import apache.thrift.type.schema.thrift_abstract_types
import test.fixtures.python_capi.serialized_dep.thrift_abstract_types
import test.fixtures.python_capi.thrift_dep.thrift_abstract_types


class MyStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def inty(self) -> int: ...
    @property
    @_abc.abstractmethod
    def stringy(self) -> str: ...
    @property
    @_abc.abstractmethod
    def myItemy(self) -> MyDataItem: ...
    @property
    @_abc.abstractmethod
    def myEnumy(self) -> MyEnum: ...
    @property
    @_abc.abstractmethod
    def booly(self) -> bool: ...
    @property
    @_abc.abstractmethod
    def floatListy(self) -> _typing.Sequence[float]: ...
    @property
    @_abc.abstractmethod
    def strMappy(self) -> _typing.Mapping[bytes, str]: ...
    @property
    @_abc.abstractmethod
    def intSetty(self) -> _typing.AbstractSet[int]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        inty: _typing.Optional[int]=...,
#        stringy: _typing.Optional[str]=...,
#        myItemy: _typing.Optional[MyDataItem]=...,
#        myEnumy: _typing.Optional[MyEnum]=...,
#        booly: _typing.Optional[bool]=...,
#        floatListy: _typing.Optional[_typing.Sequence[float]]=...,
#        strMappy: _typing.Optional[_typing.Mapping[bytes, str]]=...,
#        intSetty: _typing.Optional[_typing.AbstractSet[int]]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyDataItem, MyEnum, bool, _typing.Sequence[float], _typing.Mapping[bytes, str], _typing.AbstractSet[int]]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore

class MyDataItem(_abc.ABC):
    @property
    @_abc.abstractmethod
    def s(self) -> str: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        s: _typing.Optional[str]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.MyDataItem": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MyDataItem": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore

class TransitiveDoubler(_abc.ABC):
    pass
#    @_abc.abstractmethod
#    def __call__(
#        self,
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.TransitiveDoubler": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.TransitiveDoubler": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.TransitiveDoubler": ...  # type: ignore

class DoubledPair(_abc.ABC):
    @property
    @_abc.abstractmethod
    def s(self) -> str: ...
    @property
    @_abc.abstractmethod
    def x(self) -> int: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        s: _typing.Optional[str]=...,
#        x: _typing.Optional[int]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.DoubledPair": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.DoubledPair": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.DoubledPair": ...  # type: ignore

class StringPair(_abc.ABC):
    @property
    @_abc.abstractmethod
    def normal(self) -> str: ...
    @property
    @_abc.abstractmethod
    def doubled(self) -> str: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        normal: _typing.Optional[str]=...,
#        doubled: _typing.Optional[str]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.StringPair": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.StringPair": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.StringPair": ...  # type: ignore

class EmptyStruct(_abc.ABC):
    pass
#    @_abc.abstractmethod
#    def __call__(
#        self,
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.EmptyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.EmptyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.EmptyStruct": ...  # type: ignore

class PrimitiveStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def booly(self) -> bool: ...
    @property
    @_abc.abstractmethod
    def charry(self) -> int: ...
    @property
    @_abc.abstractmethod
    def shorty(self) -> int: ...
    @property
    @_abc.abstractmethod
    def inty(self) -> int: ...
    @property
    @_abc.abstractmethod
    def longy(self) -> int: ...
    @property
    @_abc.abstractmethod
    def floaty(self) -> _typing.Optional[float]: ...
    @property
    @_abc.abstractmethod
    def dubby(self) -> _typing.Optional[float]: ...
    @property
    @_abc.abstractmethod
    def stringy(self) -> _typing.Optional[str]: ...
    @property
    @_abc.abstractmethod
    def bytey(self) -> _typing.Optional[bytes]: ...
    @property
    @_abc.abstractmethod
    def buffy(self) -> _fbthrift_iobuf.IOBuf: ...
    @property
    @_abc.abstractmethod
    def pointbuffy(self) -> _fbthrift_iobuf.IOBuf: ...
    @property
    @_abc.abstractmethod
    def patched_struct(self) -> MyStruct: ...
    @property
    @_abc.abstractmethod
    def empty_struct(self) -> EmptyStruct: ...
    @property
    @_abc.abstractmethod
    def fbstring(self) -> bytes: ...
    @property
    @_abc.abstractmethod
    def managed_string_view(self) -> str: ...
    @property
    @_abc.abstractmethod
    def some_error(self) -> test.fixtures.python_capi.thrift_dep.thrift_abstract_types.SomeError: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        booly: _typing.Optional[bool]=...,
#        charry: _typing.Optional[int]=...,
#        shorty: _typing.Optional[int]=...,
#        inty: _typing.Optional[int]=...,
#        longy: _typing.Optional[int]=...,
#        floaty: _typing.Optional[float]=...,
#        dubby: _typing.Optional[float]=...,
#        stringy: _typing.Optional[str]=...,
#        bytey: _typing.Optional[bytes]=...,
#        buffy: _typing.Optional[_fbthrift_iobuf.IOBuf]=...,
#        pointbuffy: _typing.Optional[_fbthrift_iobuf.IOBuf]=...,
#        patched_struct: _typing.Optional[MyStruct]=...,
#        empty_struct: _typing.Optional[EmptyStruct]=...,
#        fbstring: _typing.Optional[bytes]=...,
#        managed_string_view: _typing.Optional[str]=...,
#        some_error: _typing.Optional[test.fixtures.python_capi.thrift_dep.thrift_abstract_types.SomeError]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, _fbthrift_iobuf.IOBuf, _fbthrift_iobuf.IOBuf, MyStruct, EmptyStruct, bytes, str, test.fixtures.python_capi.thrift_dep.thrift_abstract_types.SomeError]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.PrimitiveStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.PrimitiveStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.PrimitiveStruct": ...  # type: ignore

class AdaptedFields(_abc.ABC):
    @property
    @_abc.abstractmethod
    def adapted_int(self) -> int: ...
    @property
    @_abc.abstractmethod
    def list_adapted_int(self) -> _typing.Sequence[int]: ...
    @property
    @_abc.abstractmethod
    def set_adapted_int(self) -> _typing.AbstractSet[int]: ...
    @property
    @_abc.abstractmethod
    def inline_adapted_int(self) -> int: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        adapted_int: _typing.Optional[int]=...,
#        list_adapted_int: _typing.Optional[_typing.Sequence[int]]=...,
#        set_adapted_int: _typing.Optional[_typing.AbstractSet[int]]=...,
#        inline_adapted_int: _typing.Optional[int]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, _typing.Sequence[int], _typing.AbstractSet[int], int]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.AdaptedFields": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.AdaptedFields": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.AdaptedFields": ...  # type: ignore

class ListStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def boolz(self) -> _typing.Sequence[bool]: ...
    @property
    @_abc.abstractmethod
    def intz(self) -> _typing.Optional[_typing.Sequence[int]]: ...
    @property
    @_abc.abstractmethod
    def stringz(self) -> _typing.Optional[_typing.Sequence[str]]: ...
    @property
    @_abc.abstractmethod
    def encoded(self) -> _typing.Sequence[bytes]: ...
    @property
    @_abc.abstractmethod
    def uidz(self) -> _typing.Sequence[int]: ...
    @property
    @_abc.abstractmethod
    def matrix(self) -> _typing.Sequence[_typing.Sequence[float]]: ...
    @property
    @_abc.abstractmethod
    def ucharz(self) -> _typing.Sequence[_typing.Sequence[int]]: ...
    @property
    @_abc.abstractmethod
    def voxels(self) -> _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]: ...
    @property
    @_abc.abstractmethod
    def buf_ptrs(self) -> _typing.Sequence[_fbthrift_iobuf.IOBuf]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        boolz: _typing.Optional[_typing.Sequence[bool]]=...,
#        intz: _typing.Optional[_typing.Sequence[int]]=...,
#        stringz: _typing.Optional[_typing.Sequence[str]]=...,
#        encoded: _typing.Optional[_typing.Sequence[bytes]]=...,
#        uidz: _typing.Optional[_typing.Sequence[int]]=...,
#        matrix: _typing.Optional[_typing.Sequence[_typing.Sequence[float]]]=...,
#        ucharz: _typing.Optional[_typing.Sequence[_typing.Sequence[int]]]=...,
#        voxels: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]=...,
#        buf_ptrs: _typing.Optional[_typing.Sequence[_fbthrift_iobuf.IOBuf]]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[bool], _typing.Sequence[int], _typing.Sequence[str], _typing.Sequence[bytes], _typing.Sequence[int], _typing.Sequence[_typing.Sequence[float]], _typing.Sequence[_typing.Sequence[int]], _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]], _typing.Sequence[_fbthrift_iobuf.IOBuf]]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.ListStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.ListStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.ListStruct": ...  # type: ignore

class SetStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def enumz(self) -> _typing.AbstractSet[MyEnum]: ...
    @property
    @_abc.abstractmethod
    def intz(self) -> _typing.Optional[_typing.AbstractSet[int]]: ...
    @property
    @_abc.abstractmethod
    def binnaz(self) -> _typing.Optional[_typing.AbstractSet[bytes]]: ...
    @property
    @_abc.abstractmethod
    def encoded(self) -> _typing.AbstractSet[bytes]: ...
    @property
    @_abc.abstractmethod
    def uidz(self) -> _typing.AbstractSet[int]: ...
    @property
    @_abc.abstractmethod
    def charz(self) -> _typing.AbstractSet[int]: ...
    @property
    @_abc.abstractmethod
    def setz(self) -> _typing.Sequence[_typing.AbstractSet[int]]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        enumz: _typing.Optional[_typing.AbstractSet[MyEnum]]=...,
#        intz: _typing.Optional[_typing.AbstractSet[int]]=...,
#        binnaz: _typing.Optional[_typing.AbstractSet[bytes]]=...,
#        encoded: _typing.Optional[_typing.AbstractSet[bytes]]=...,
#        uidz: _typing.Optional[_typing.AbstractSet[int]]=...,
#        charz: _typing.Optional[_typing.AbstractSet[int]]=...,
#        setz: _typing.Optional[_typing.Sequence[_typing.AbstractSet[int]]]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.AbstractSet[MyEnum], _typing.AbstractSet[int], _typing.AbstractSet[bytes], _typing.AbstractSet[bytes], _typing.AbstractSet[int], _typing.AbstractSet[int], _typing.Sequence[_typing.AbstractSet[int]]]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.SetStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.SetStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.SetStruct": ...  # type: ignore

class MapStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def enumz(self) -> _typing.Mapping[MyEnum, str]: ...
    @property
    @_abc.abstractmethod
    def intz(self) -> _typing.Optional[_typing.Mapping[int, str]]: ...
    @property
    @_abc.abstractmethod
    def binnaz(self) -> _typing.Optional[_typing.Mapping[bytes, PrimitiveStruct]]: ...
    @property
    @_abc.abstractmethod
    def encoded(self) -> _typing.Mapping[str, float]: ...
    @property
    @_abc.abstractmethod
    def flotz(self) -> _typing.Mapping[int, float]: ...
    @property
    @_abc.abstractmethod
    def map_list(self) -> _typing.Sequence[_typing.Mapping[int, int]]: ...
    @property
    @_abc.abstractmethod
    def list_map(self) -> _typing.Mapping[int, _typing.Sequence[int]]: ...
    @property
    @_abc.abstractmethod
    def fast_list_map(self) -> _typing.Mapping[int, _typing.Sequence[float]]: ...
    @property
    @_abc.abstractmethod
    def buf_map(self) -> _typing.Mapping[bytes, _fbthrift_iobuf.IOBuf]: ...
    @property
    @_abc.abstractmethod
    def unsigned_list_map(self) -> _typing.Mapping[int, _typing.Sequence[int]]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        enumz: _typing.Optional[_typing.Mapping[MyEnum, str]]=...,
#        intz: _typing.Optional[_typing.Mapping[int, str]]=...,
#        binnaz: _typing.Optional[_typing.Mapping[bytes, PrimitiveStruct]]=...,
#        encoded: _typing.Optional[_typing.Mapping[str, float]]=...,
#        flotz: _typing.Optional[_typing.Mapping[int, float]]=...,
#        map_list: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
#        list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[int]]]=...,
#        fast_list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[float]]]=...,
#        buf_map: _typing.Optional[_typing.Mapping[bytes, _fbthrift_iobuf.IOBuf]]=...,
#        unsigned_list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[int]]]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[MyEnum, str], _typing.Mapping[int, str], _typing.Mapping[bytes, PrimitiveStruct], _typing.Mapping[str, float], _typing.Mapping[int, float], _typing.Sequence[_typing.Mapping[int, int]], _typing.Mapping[int, _typing.Sequence[int]], _typing.Mapping[int, _typing.Sequence[float]], _typing.Mapping[bytes, _fbthrift_iobuf.IOBuf], _typing.Mapping[int, _typing.Sequence[int]]]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.MapStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MapStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.MapStruct": ...  # type: ignore

class ComposeStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def enum_(self) -> MyEnum: ...
    @property
    @_abc.abstractmethod
    def renamed_(self) -> AnnoyingEnum: ...
    @property
    @_abc.abstractmethod
    def primitive(self) -> PrimitiveStruct: ...
    @property
    @_abc.abstractmethod
    def aliased(self) -> ListStruct: ...
    @property
    @_abc.abstractmethod
    def xenum(self) -> test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepEnum: ...
    @property
    @_abc.abstractmethod
    def xstruct(self) -> test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepStruct: ...
    @property
    @_abc.abstractmethod
    def friends(self) -> _typing.Sequence[test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepStruct]: ...
    @property
    @_abc.abstractmethod
    def serial_struct(self) -> test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedStruct: ...
    @property
    @_abc.abstractmethod
    def serial_union(self) -> test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedUnion: ...
    @property
    @_abc.abstractmethod
    def serial_error(self) -> test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedError: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        enum_: _typing.Optional[MyEnum]=...,
#        renamed_: _typing.Optional[AnnoyingEnum]=...,
#        primitive: _typing.Optional[PrimitiveStruct]=...,
#        aliased: _typing.Optional[ListStruct]=...,
#        xenum: _typing.Optional[test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepEnum]=...,
#        xstruct: _typing.Optional[test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepStruct]=...,
#        friends: _typing.Optional[_typing.Sequence[test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepStruct]]=...,
#        serial_struct: _typing.Optional[test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedStruct]=...,
#        serial_union: _typing.Optional[test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedUnion]=...,
#        serial_error: _typing.Optional[test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedError]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyEnum, AnnoyingEnum, PrimitiveStruct, ListStruct, test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepEnum, test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepStruct, _typing.Sequence[test.fixtures.python_capi.thrift_dep.thrift_abstract_types.DepStruct], test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedStruct, test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedUnion, test.fixtures.python_capi.serialized_dep.thrift_abstract_types.SerializedError]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.ComposeStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.ComposeStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.ComposeStruct": ...  # type: ignore

class Onion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def myEnum(self) -> MyEnum: ...
    @property
    @_abc.abstractmethod
    def myStruct(self) -> PrimitiveStruct: ...
    @property
    @_abc.abstractmethod
    def myString(self) -> str: ...
    @property
    @_abc.abstractmethod
    def intSet(self) -> _typing.AbstractSet[int]: ...
    @property
    @_abc.abstractmethod
    def doubleList(self) -> _typing.Sequence[float]: ...
    @property
    @_abc.abstractmethod
    def strMap(self) -> _typing.Mapping[bytes, str]: ...
    @property
    @_abc.abstractmethod
    def adapted_int(self) -> int: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.python_capi.module.thrift_types.Onion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.python_capi.module.types.Onion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Onion": ...  # type: ignore

uint64 = int
ui64 = int
signed_byte = int
IOBuf = _fbthrift_iobuf.IOBuf
IOBufPtr = _fbthrift_iobuf.IOBuf
ListAlias = ListStruct
