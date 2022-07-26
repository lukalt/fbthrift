#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


class ComplexUnion(_fbthrift_python_types.Union):
    intValue: _typing.Final[int] = ...
    intListValue: _typing.Final[_typing.Sequence[int]] = ...
    stringListValue: _typing.Final[_typing.Sequence[str]] = ...
    stringValue: _typing.Final[str] = ...
    typedefValue: _typing.Final[_typing.Mapping[int, str]] = ...
    stringRef: _typing.Final[str] = ...
    def __init__(
        self, *,
        intValue: _typing.Optional[int]=...,
        intListValue: _typing.Optional[_typing.Sequence[int]]=...,
        stringListValue: _typing.Optional[_typing.Sequence[str]]=...,
        stringValue: _typing.Optional[str]=...,
        typedefValue: _typing.Optional[_typing.Mapping[int, str]]=...,
        stringRef: _typing.Optional[str]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: ComplexUnion.Type = ...
        intValue: ComplexUnion.Type = ...
        intListValue: ComplexUnion.Type = ...
        stringListValue: ComplexUnion.Type = ...
        stringValue: ComplexUnion.Type = ...
        typedefValue: ComplexUnion.Type = ...
        stringRef: ComplexUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, int, _typing.Sequence[int], _typing.Sequence[str], str, _typing.Mapping[int, str], str]) -> ComplexUnion: ...
    value: _typing.Final[_typing.Union[None, int, _typing.Sequence[int], _typing.Sequence[str], str, _typing.Mapping[int, str], str]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> ComplexUnion: ...
    def _to_py3(self) -> "module.types.ComplexUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ComplexUnion": ...  # type: ignore


class ListUnion(_fbthrift_python_types.Union):
    intListValue: _typing.Final[_typing.Sequence[int]] = ...
    stringListValue: _typing.Final[_typing.Sequence[str]] = ...
    def __init__(
        self, *,
        intListValue: _typing.Optional[_typing.Sequence[int]]=...,
        stringListValue: _typing.Optional[_typing.Sequence[str]]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: ListUnion.Type = ...
        intListValue: ListUnion.Type = ...
        stringListValue: ListUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, _typing.Sequence[int], _typing.Sequence[str]]) -> ListUnion: ...
    value: _typing.Final[_typing.Union[None, _typing.Sequence[int], _typing.Sequence[str]]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> ListUnion: ...
    def _to_py3(self) -> "module.types.ListUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ListUnion": ...  # type: ignore


class DataUnion(_fbthrift_python_types.Union):
    binaryData: _typing.Final[bytes] = ...
    stringData: _typing.Final[str] = ...
    def __init__(
        self, *,
        binaryData: _typing.Optional[bytes]=...,
        stringData: _typing.Optional[str]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: DataUnion.Type = ...
        binaryData: DataUnion.Type = ...
        stringData: DataUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, bytes, str]) -> DataUnion: ...
    value: _typing.Final[_typing.Union[None, bytes, str]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> DataUnion: ...
    def _to_py3(self) -> "module.types.DataUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.DataUnion": ...  # type: ignore


class Val(_fbthrift_python_types.Struct):
    strVal: _typing.Final[str] = ...
    intVal: _typing.Final[int] = ...
    typedefValue: _typing.Final[_typing.Mapping[int, str]] = ...
    def __init__(
        self, *,
        strVal: _typing.Optional[str]=...,
        intVal: _typing.Optional[int]=...,
        typedefValue: _typing.Optional[_typing.Mapping[int, str]]=...
    ) -> None: ...

    def __call__(
        self, *,
        strVal: _typing.Optional[str]=...,
        intVal: _typing.Optional[int]=...,
        typedefValue: _typing.Optional[_typing.Mapping[int, str]]=...
    ) -> Val: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, _typing.Mapping[int, str]]]]: ...
    def _to_python(self) -> Val: ...
    def _to_py3(self) -> "module.types.Val": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Val": ...  # type: ignore


class ValUnion(_fbthrift_python_types.Union):
    v1: _typing.Final[Val] = ...
    v2: _typing.Final[Val] = ...
    def __init__(
        self, *,
        v1: _typing.Optional[Val]=...,
        v2: _typing.Optional[Val]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: ValUnion.Type = ...
        v1: ValUnion.Type = ...
        v2: ValUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, Val, Val]) -> ValUnion: ...
    value: _typing.Final[_typing.Union[None, Val, Val]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> ValUnion: ...
    def _to_py3(self) -> "module.types.ValUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ValUnion": ...  # type: ignore


class VirtualComplexUnion(_fbthrift_python_types.Union):
    thingOne: _typing.Final[str] = ...
    thingTwo: _typing.Final[str] = ...
    def __init__(
        self, *,
        thingOne: _typing.Optional[str]=...,
        thingTwo: _typing.Optional[str]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: VirtualComplexUnion.Type = ...
        thingOne: VirtualComplexUnion.Type = ...
        thingTwo: VirtualComplexUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, str, str]) -> VirtualComplexUnion: ...
    value: _typing.Final[_typing.Union[None, str, str]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> VirtualComplexUnion: ...
    def _to_py3(self) -> "module.types.VirtualComplexUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.VirtualComplexUnion": ...  # type: ignore


class NonCopyableStruct(_fbthrift_python_types.Struct):
    num: _typing.Final[int] = ...
    def __init__(
        self, *,
        num: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        num: _typing.Optional[int]=...
    ) -> NonCopyableStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    def _to_python(self) -> NonCopyableStruct: ...
    def _to_py3(self) -> "module.types.NonCopyableStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.NonCopyableStruct": ...  # type: ignore


class NonCopyableUnion(_fbthrift_python_types.Union):
    s: _typing.Final[NonCopyableStruct] = ...
    def __init__(
        self, *,
        s: _typing.Optional[NonCopyableStruct]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: NonCopyableUnion.Type = ...
        s: NonCopyableUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, NonCopyableStruct]) -> NonCopyableUnion: ...
    value: _typing.Final[_typing.Union[None, NonCopyableStruct]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> NonCopyableUnion: ...
    def _to_py3(self) -> "module.types.NonCopyableUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.NonCopyableUnion": ...  # type: ignore

containerTypedef = _typing.Dict[int, str]
