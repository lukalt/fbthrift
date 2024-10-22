
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


class Internship(_abc.ABC):
    @property
    @_abc.abstractmethod
    def weeks(self) -> int: ...
    @property
    @_abc.abstractmethod
    def title(self) -> str: ...
    @property
    @_abc.abstractmethod
    def employer(self) -> _typing.Optional[Company]: ...
    @property
    @_abc.abstractmethod
    def compensation(self) -> _typing.Optional[float]: ...
    @property
    @_abc.abstractmethod
    def school(self) -> _typing.Optional[str]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        weeks: _typing.Optional[int]=...,
#        title: _typing.Optional[str]=...,
#        employer: _typing.Optional[Company]=...,
#        compensation: _typing.Optional[float]=...,
#        school: _typing.Optional[str]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, Company, float, str]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Internship": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Internship": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Internship": ...  # type: ignore

class Range(_abc.ABC):
    @property
    @_abc.abstractmethod
    def min(self) -> int: ...
    @property
    @_abc.abstractmethod
    def max(self) -> int: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        min: _typing.Optional[int]=...,
#        max: _typing.Optional[int]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Range": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Range": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Range": ...  # type: ignore

class struct1(_abc.ABC):
    @property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @property
    @_abc.abstractmethod
    def b(self) -> str: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        a: _typing.Optional[int]=...,
#        b: _typing.Optional[str]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.struct1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.struct1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.struct1": ...  # type: ignore

class struct2(_abc.ABC):
    @property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @property
    @_abc.abstractmethod
    def b(self) -> str: ...
    @property
    @_abc.abstractmethod
    def c(self) -> struct1: ...
    @property
    @_abc.abstractmethod
    def d(self) -> _typing.Sequence[int]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        a: _typing.Optional[int]=...,
#        b: _typing.Optional[str]=...,
#        c: _typing.Optional[struct1]=...,
#        d: _typing.Optional[_typing.Sequence[int]]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, struct1, _typing.Sequence[int]]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.struct2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.struct2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.struct2": ...  # type: ignore

class struct3(_abc.ABC):
    @property
    @_abc.abstractmethod
    def a(self) -> str: ...
    @property
    @_abc.abstractmethod
    def b(self) -> int: ...
    @property
    @_abc.abstractmethod
    def c(self) -> struct2: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        a: _typing.Optional[str]=...,
#        b: _typing.Optional[int]=...,
#        c: _typing.Optional[struct2]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, struct2]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.struct3": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.struct3": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.struct3": ...  # type: ignore

class struct4(_abc.ABC):
    @property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @property
    @_abc.abstractmethod
    def b(self) -> _typing.Optional[float]: ...
    @property
    @_abc.abstractmethod
    def c(self) -> _typing.Optional[int]: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        a: _typing.Optional[int]=...,
#        b: _typing.Optional[float]=...,
#        c: _typing.Optional[int]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, float, int]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.struct4": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.struct4": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.struct4": ...  # type: ignore

class union1(_abc.ABC):
    @property
    @_abc.abstractmethod
    def i(self) -> int: ...
    @property
    @_abc.abstractmethod
    def d(self) -> float: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.union1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.union1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.union1": ...  # type: ignore

class union2(_abc.ABC):
    @property
    @_abc.abstractmethod
    def i(self) -> int: ...
    @property
    @_abc.abstractmethod
    def d(self) -> float: ...
    @property
    @_abc.abstractmethod
    def s(self) -> struct1: ...
    @property
    @_abc.abstractmethod
    def u(self) -> union1: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.union2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.union2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.union2": ...  # type: ignore

MyCompany = Company
MyStringIdentifier = str
MyIntIdentifier = int
MyMapIdentifier = _typing.Mapping[str, str]
