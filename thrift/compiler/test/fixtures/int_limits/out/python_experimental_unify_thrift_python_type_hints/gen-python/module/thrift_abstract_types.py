
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


class Limits(_abc.ABC):
    @property
    @_abc.abstractmethod
    def max_i64_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def min_i64_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def max_i32_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def min_i32_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def max_i16_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def min_i16_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def max_byte_field(self) -> int: ...
    @property
    @_abc.abstractmethod
    def min_byte_field(self) -> int: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        max_i64_field: _typing.Optional[int]=...,
#        min_i64_field: _typing.Optional[int]=...,
#        max_i32_field: _typing.Optional[int]=...,
#        min_i32_field: _typing.Optional[int]=...,
#        max_i16_field: _typing.Optional[int]=...,
#        min_i16_field: _typing.Optional[int]=...,
#        max_byte_field: _typing.Optional[int]=...,
#        min_byte_field: _typing.Optional[int]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, int, int, int, int, int]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Limits": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Limits": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Limits": ...  # type: ignore
