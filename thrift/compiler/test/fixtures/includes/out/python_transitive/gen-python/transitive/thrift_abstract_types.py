
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_abstract_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import abc as _abc
import typing as _typing

_fbthrift_property = property


import folly.iobuf as _fbthrift_iobuf
import thrift.python.abstract_types as _fbthrift_python_abstract_types

from transitive.thrift_enums import *
class Foo(_abc.ABC):
    @_fbthrift_property
    @_abc.abstractmethod
    def a(self) -> int: ...
    @_abc.abstractmethod
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    @_abc.abstractmethod
    def _to_python(self) -> "transitive.thrift_types.Foo": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py3(self) -> "transitive.types.Foo": ...  # type: ignore
    @_abc.abstractmethod
    def _to_py_deprecated(self) -> "transitive.ttypes.Foo": ...  # type: ignore
_fbthrift_Foo = Foo
