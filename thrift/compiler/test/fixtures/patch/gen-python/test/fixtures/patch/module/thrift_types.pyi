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

import apache.thrift.op.patch.thrift_types

import facebook.thrift.annotation.thrift.thrift_types


class MyData(_fbthrift_python_types.Struct):
    data1: _typing.Final[str] = ...
    data2: _typing.Final[int] = ...
    def __init__(
        self, *,
        data1: _typing.Optional[str]=...,
        data2: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        data1: _typing.Optional[str]=...,
        data2: _typing.Optional[int]=...
    ) -> MyData: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def _to_python(self) -> MyData: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyData": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyData": ...  # type: ignore


class InnerUnion(_fbthrift_python_types.Union):
    innerOption: _typing.Final[bytes] = ...
    def __init__(
        self, *,
        innerOption: _typing.Optional[bytes]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: InnerUnion.Type = ...
        innerOption: InnerUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, bytes]) -> InnerUnion: ...
    value: _typing.Final[_typing.Union[None, bytes]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> InnerUnion: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.InnerUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.InnerUnion": ...  # type: ignore


class MyUnion(_fbthrift_python_types.Union):
    option1: _typing.Final[str] = ...
    option2: _typing.Final[int] = ...
    option3: _typing.Final[InnerUnion] = ...
    def __init__(
        self, *,
        option1: _typing.Optional[str]=...,
        option2: _typing.Optional[int]=...,
        option3: _typing.Optional[InnerUnion]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MyUnion.Type = ...
        option1: MyUnion.Type = ...
        option2: MyUnion.Type = ...
        option3: MyUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, str, int, InnerUnion]) -> MyUnion: ...
    value: _typing.Final[_typing.Union[None, str, int, InnerUnion]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> MyUnion: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyUnion": ...  # type: ignore


class MyStruct(_fbthrift_python_types.Struct):
    boolVal: _typing.Final[bool] = ...
    byteVal: _typing.Final[int] = ...
    i16Val: _typing.Final[int] = ...
    i32Val: _typing.Final[int] = ...
    i64Val: _typing.Final[int] = ...
    floatVal: _typing.Final[float] = ...
    doubleVal: _typing.Final[float] = ...
    stringVal: _typing.Final[str] = ...
    binaryVal: _typing.Final[bytes] = ...
    structVal: _typing.Final[MyData] = ...
    optBoolVal: _typing.Final[_typing.Optional[bool]] = ...
    optByteVal: _typing.Final[_typing.Optional[int]] = ...
    optI16Val: _typing.Final[_typing.Optional[int]] = ...
    optI32Val: _typing.Final[_typing.Optional[int]] = ...
    optI64Val: _typing.Final[_typing.Optional[int]] = ...
    optFloatVal: _typing.Final[_typing.Optional[float]] = ...
    optDoubleVal: _typing.Final[_typing.Optional[float]] = ...
    optStringVal: _typing.Final[_typing.Optional[str]] = ...
    optBinaryVal: _typing.Final[_typing.Optional[bytes]] = ...
    optStructVal: _typing.Final[_typing.Optional[MyData]] = ...
    optListVal: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    optSetVal: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    optMapVal: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    unionVal: _typing.Final[MyUnion] = ...
    def __init__(
        self, *,
        boolVal: _typing.Optional[bool]=...,
        byteVal: _typing.Optional[int]=...,
        i16Val: _typing.Optional[int]=...,
        i32Val: _typing.Optional[int]=...,
        i64Val: _typing.Optional[int]=...,
        floatVal: _typing.Optional[float]=...,
        doubleVal: _typing.Optional[float]=...,
        stringVal: _typing.Optional[str]=...,
        binaryVal: _typing.Optional[bytes]=...,
        structVal: _typing.Optional[MyData]=...,
        optBoolVal: _typing.Optional[bool]=...,
        optByteVal: _typing.Optional[int]=...,
        optI16Val: _typing.Optional[int]=...,
        optI32Val: _typing.Optional[int]=...,
        optI64Val: _typing.Optional[int]=...,
        optFloatVal: _typing.Optional[float]=...,
        optDoubleVal: _typing.Optional[float]=...,
        optStringVal: _typing.Optional[str]=...,
        optBinaryVal: _typing.Optional[bytes]=...,
        optStructVal: _typing.Optional[MyData]=...,
        optListVal: _typing.Optional[_typing.Sequence[int]]=...,
        optSetVal: _typing.Optional[_typing.AbstractSet[str]]=...,
        optMapVal: _typing.Optional[_typing.Mapping[str, str]]=...,
        unionVal: _typing.Optional[MyUnion]=...
    ) -> None: ...

    def __call__(
        self, *,
        boolVal: _typing.Optional[bool]=...,
        byteVal: _typing.Optional[int]=...,
        i16Val: _typing.Optional[int]=...,
        i32Val: _typing.Optional[int]=...,
        i64Val: _typing.Optional[int]=...,
        floatVal: _typing.Optional[float]=...,
        doubleVal: _typing.Optional[float]=...,
        stringVal: _typing.Optional[str]=...,
        binaryVal: _typing.Optional[bytes]=...,
        structVal: _typing.Optional[MyData]=...,
        optBoolVal: _typing.Optional[bool]=...,
        optByteVal: _typing.Optional[int]=...,
        optI16Val: _typing.Optional[int]=...,
        optI32Val: _typing.Optional[int]=...,
        optI64Val: _typing.Optional[int]=...,
        optFloatVal: _typing.Optional[float]=...,
        optDoubleVal: _typing.Optional[float]=...,
        optStringVal: _typing.Optional[str]=...,
        optBinaryVal: _typing.Optional[bytes]=...,
        optStructVal: _typing.Optional[MyData]=...,
        optListVal: _typing.Optional[_typing.Sequence[int]]=...,
        optSetVal: _typing.Optional[_typing.AbstractSet[str]]=...,
        optMapVal: _typing.Optional[_typing.Mapping[str, str]]=...,
        unionVal: _typing.Optional[MyUnion]=...
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, MyData, bool, int, int, int, int, float, float, str, bytes, MyData, _typing.Sequence[int], _typing.AbstractSet[str], _typing.Mapping[str, str], MyUnion]]]: ...
    def _to_python(self) -> MyStruct: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore


class MyDataPatch(_fbthrift_python_types.Struct):
    data1: _typing.Final[apache.thrift.op.patch.thrift_types.StringPatch] = ...
    data2: _typing.Final[apache.thrift.op.patch.thrift_types.I32Patch] = ...
    def __init__(
        self, *,
        data1: _typing.Optional[apache.thrift.op.patch.thrift_types.StringPatch]=...,
        data2: _typing.Optional[apache.thrift.op.patch.thrift_types.I32Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        data1: _typing.Optional[apache.thrift.op.patch.thrift_types.StringPatch]=...,
        data2: _typing.Optional[apache.thrift.op.patch.thrift_types.I32Patch]=...
    ) -> MyDataPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[apache.thrift.op.patch.thrift_types.StringPatch, apache.thrift.op.patch.thrift_types.I32Patch]]]: ...
    def _to_python(self) -> MyDataPatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyDataPatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyDataPatch": ...  # type: ignore


class MyDataValuePatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[MyData]] = ...
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyDataPatch] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[MyData]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[MyData]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataPatch]=...
    ) -> MyDataValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyData, bool, MyDataPatch]]]: ...
    def _to_python(self) -> MyDataValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyDataValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyDataValuePatch": ...  # type: ignore


class OptionalMyDataValuePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyDataValuePatch] = ...
    ensure: _typing.Final[_typing.Optional[MyData]] = ...
    patchAfter: _typing.Final[MyDataValuePatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataValuePatch]=...,
        ensure: _typing.Optional[MyData]=...,
        patchAfter: _typing.Optional[MyDataValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataValuePatch]=...,
        ensure: _typing.Optional[MyData]=...,
        patchAfter: _typing.Optional[MyDataValuePatch]=...
    ) -> OptionalMyDataValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyDataValuePatch, MyData, MyDataValuePatch]]]: ...
    def _to_python(self) -> OptionalMyDataValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalMyDataValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalMyDataValuePatch": ...  # type: ignore


class InnerUnionPatch(_fbthrift_python_types.Struct):
    innerOption: _typing.Final[apache.thrift.op.patch.thrift_types.BinaryPatch] = ...
    def __init__(
        self, *,
        innerOption: _typing.Optional[apache.thrift.op.patch.thrift_types.BinaryPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        innerOption: _typing.Optional[apache.thrift.op.patch.thrift_types.BinaryPatch]=...
    ) -> InnerUnionPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[apache.thrift.op.patch.thrift_types.BinaryPatch]]]: ...
    def _to_python(self) -> InnerUnionPatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.InnerUnionPatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.InnerUnionPatch": ...  # type: ignore


class InnerUnionValuePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[InnerUnionPatch] = ...
    ensure: _typing.Final[InnerUnion] = ...
    patchAfter: _typing.Final[InnerUnionPatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[InnerUnionPatch]=...,
        ensure: _typing.Optional[InnerUnion]=...,
        patchAfter: _typing.Optional[InnerUnionPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[InnerUnionPatch]=...,
        ensure: _typing.Optional[InnerUnion]=...,
        patchAfter: _typing.Optional[InnerUnionPatch]=...
    ) -> InnerUnionValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, InnerUnionPatch, InnerUnion, InnerUnionPatch]]]: ...
    def _to_python(self) -> InnerUnionValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.InnerUnionValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.InnerUnionValuePatch": ...  # type: ignore


class OptionalInnerUnionValuePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[InnerUnionValuePatch] = ...
    ensure: _typing.Final[_typing.Optional[InnerUnion]] = ...
    patchAfter: _typing.Final[InnerUnionValuePatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[InnerUnionValuePatch]=...,
        ensure: _typing.Optional[InnerUnion]=...,
        patchAfter: _typing.Optional[InnerUnionValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[InnerUnionValuePatch]=...,
        ensure: _typing.Optional[InnerUnion]=...,
        patchAfter: _typing.Optional[InnerUnionValuePatch]=...
    ) -> OptionalInnerUnionValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, InnerUnionValuePatch, InnerUnion, InnerUnionValuePatch]]]: ...
    def _to_python(self) -> OptionalInnerUnionValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalInnerUnionValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalInnerUnionValuePatch": ...  # type: ignore


class MyUnionPatch(_fbthrift_python_types.Struct):
    option1: _typing.Final[apache.thrift.op.patch.thrift_types.StringPatch] = ...
    option2: _typing.Final[apache.thrift.op.patch.thrift_types.I32Patch] = ...
    option3: _typing.Final[InnerUnionValuePatch] = ...
    def __init__(
        self, *,
        option1: _typing.Optional[apache.thrift.op.patch.thrift_types.StringPatch]=...,
        option2: _typing.Optional[apache.thrift.op.patch.thrift_types.I32Patch]=...,
        option3: _typing.Optional[InnerUnionValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        option1: _typing.Optional[apache.thrift.op.patch.thrift_types.StringPatch]=...,
        option2: _typing.Optional[apache.thrift.op.patch.thrift_types.I32Patch]=...,
        option3: _typing.Optional[InnerUnionValuePatch]=...
    ) -> MyUnionPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[apache.thrift.op.patch.thrift_types.StringPatch, apache.thrift.op.patch.thrift_types.I32Patch, InnerUnionValuePatch]]]: ...
    def _to_python(self) -> MyUnionPatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyUnionPatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyUnionPatch": ...  # type: ignore


class MyUnionValuePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyUnionPatch] = ...
    ensure: _typing.Final[MyUnion] = ...
    patchAfter: _typing.Final[MyUnionPatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionPatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionPatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionPatch]=...
    ) -> MyUnionValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyUnionPatch, MyUnion, MyUnionPatch]]]: ...
    def _to_python(self) -> MyUnionValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyUnionValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyUnionValuePatch": ...  # type: ignore


class OptionalMyUnionValuePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyUnionValuePatch] = ...
    ensure: _typing.Final[_typing.Optional[MyUnion]] = ...
    patchAfter: _typing.Final[MyUnionValuePatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionValuePatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionValuePatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionValuePatch]=...
    ) -> OptionalMyUnionValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyUnionValuePatch, MyUnion, MyUnionValuePatch]]]: ...
    def _to_python(self) -> OptionalMyUnionValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalMyUnionValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalMyUnionValuePatch": ...  # type: ignore


class MyStructPatch(_fbthrift_python_types.Struct):
    boolVal: _typing.Final[apache.thrift.op.patch.thrift_types.BoolPatch] = ...
    byteVal: _typing.Final[apache.thrift.op.patch.thrift_types.BytePatch] = ...
    i16Val: _typing.Final[apache.thrift.op.patch.thrift_types.I16Patch] = ...
    i32Val: _typing.Final[apache.thrift.op.patch.thrift_types.I32Patch] = ...
    i64Val: _typing.Final[apache.thrift.op.patch.thrift_types.I64Patch] = ...
    floatVal: _typing.Final[apache.thrift.op.patch.thrift_types.FloatPatch] = ...
    doubleVal: _typing.Final[apache.thrift.op.patch.thrift_types.DoublePatch] = ...
    stringVal: _typing.Final[apache.thrift.op.patch.thrift_types.StringPatch] = ...
    binaryVal: _typing.Final[apache.thrift.op.patch.thrift_types.BinaryPatch] = ...
    structVal: _typing.Final[MyDataValuePatch] = ...
    optBoolVal: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalBoolPatch] = ...
    optByteVal: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalBytePatch] = ...
    optI16Val: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalI16Patch] = ...
    optI32Val: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalI32Patch] = ...
    optI64Val: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalI64Patch] = ...
    optFloatVal: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalFloatPatch] = ...
    optDoubleVal: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalDoublePatch] = ...
    optStringVal: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalStringPatch] = ...
    optBinaryVal: _typing.Final[apache.thrift.op.patch.thrift_types.OptionalBinaryPatch] = ...
    optStructVal: _typing.Final[OptionalMyDataValuePatch] = ...
    optListVal: _typing.Final[OptionalMyStructField21Patch] = ...
    optSetVal: _typing.Final[OptionalMyStructField22Patch] = ...
    optMapVal: _typing.Final[OptionalMyStructField23Patch] = ...
    unionVal: _typing.Final[MyUnionValuePatch] = ...
    def __init__(
        self, *,
        boolVal: _typing.Optional[apache.thrift.op.patch.thrift_types.BoolPatch]=...,
        byteVal: _typing.Optional[apache.thrift.op.patch.thrift_types.BytePatch]=...,
        i16Val: _typing.Optional[apache.thrift.op.patch.thrift_types.I16Patch]=...,
        i32Val: _typing.Optional[apache.thrift.op.patch.thrift_types.I32Patch]=...,
        i64Val: _typing.Optional[apache.thrift.op.patch.thrift_types.I64Patch]=...,
        floatVal: _typing.Optional[apache.thrift.op.patch.thrift_types.FloatPatch]=...,
        doubleVal: _typing.Optional[apache.thrift.op.patch.thrift_types.DoublePatch]=...,
        stringVal: _typing.Optional[apache.thrift.op.patch.thrift_types.StringPatch]=...,
        binaryVal: _typing.Optional[apache.thrift.op.patch.thrift_types.BinaryPatch]=...,
        structVal: _typing.Optional[MyDataValuePatch]=...,
        optBoolVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalBoolPatch]=...,
        optByteVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalBytePatch]=...,
        optI16Val: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalI16Patch]=...,
        optI32Val: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalI32Patch]=...,
        optI64Val: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalI64Patch]=...,
        optFloatVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalFloatPatch]=...,
        optDoubleVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalDoublePatch]=...,
        optStringVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalStringPatch]=...,
        optBinaryVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalBinaryPatch]=...,
        optStructVal: _typing.Optional[OptionalMyDataValuePatch]=...,
        optListVal: _typing.Optional[OptionalMyStructField21Patch]=...,
        optSetVal: _typing.Optional[OptionalMyStructField22Patch]=...,
        optMapVal: _typing.Optional[OptionalMyStructField23Patch]=...,
        unionVal: _typing.Optional[MyUnionValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        boolVal: _typing.Optional[apache.thrift.op.patch.thrift_types.BoolPatch]=...,
        byteVal: _typing.Optional[apache.thrift.op.patch.thrift_types.BytePatch]=...,
        i16Val: _typing.Optional[apache.thrift.op.patch.thrift_types.I16Patch]=...,
        i32Val: _typing.Optional[apache.thrift.op.patch.thrift_types.I32Patch]=...,
        i64Val: _typing.Optional[apache.thrift.op.patch.thrift_types.I64Patch]=...,
        floatVal: _typing.Optional[apache.thrift.op.patch.thrift_types.FloatPatch]=...,
        doubleVal: _typing.Optional[apache.thrift.op.patch.thrift_types.DoublePatch]=...,
        stringVal: _typing.Optional[apache.thrift.op.patch.thrift_types.StringPatch]=...,
        binaryVal: _typing.Optional[apache.thrift.op.patch.thrift_types.BinaryPatch]=...,
        structVal: _typing.Optional[MyDataValuePatch]=...,
        optBoolVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalBoolPatch]=...,
        optByteVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalBytePatch]=...,
        optI16Val: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalI16Patch]=...,
        optI32Val: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalI32Patch]=...,
        optI64Val: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalI64Patch]=...,
        optFloatVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalFloatPatch]=...,
        optDoubleVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalDoublePatch]=...,
        optStringVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalStringPatch]=...,
        optBinaryVal: _typing.Optional[apache.thrift.op.patch.thrift_types.OptionalBinaryPatch]=...,
        optStructVal: _typing.Optional[OptionalMyDataValuePatch]=...,
        optListVal: _typing.Optional[OptionalMyStructField21Patch]=...,
        optSetVal: _typing.Optional[OptionalMyStructField22Patch]=...,
        optMapVal: _typing.Optional[OptionalMyStructField23Patch]=...,
        unionVal: _typing.Optional[MyUnionValuePatch]=...
    ) -> MyStructPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[apache.thrift.op.patch.thrift_types.BoolPatch, apache.thrift.op.patch.thrift_types.BytePatch, apache.thrift.op.patch.thrift_types.I16Patch, apache.thrift.op.patch.thrift_types.I32Patch, apache.thrift.op.patch.thrift_types.I64Patch, apache.thrift.op.patch.thrift_types.FloatPatch, apache.thrift.op.patch.thrift_types.DoublePatch, apache.thrift.op.patch.thrift_types.StringPatch, apache.thrift.op.patch.thrift_types.BinaryPatch, MyDataValuePatch, apache.thrift.op.patch.thrift_types.OptionalBoolPatch, apache.thrift.op.patch.thrift_types.OptionalBytePatch, apache.thrift.op.patch.thrift_types.OptionalI16Patch, apache.thrift.op.patch.thrift_types.OptionalI32Patch, apache.thrift.op.patch.thrift_types.OptionalI64Patch, apache.thrift.op.patch.thrift_types.OptionalFloatPatch, apache.thrift.op.patch.thrift_types.OptionalDoublePatch, apache.thrift.op.patch.thrift_types.OptionalStringPatch, apache.thrift.op.patch.thrift_types.OptionalBinaryPatch, OptionalMyDataValuePatch, OptionalMyStructField21Patch, OptionalMyStructField22Patch, OptionalMyStructField23Patch, MyUnionValuePatch]]]: ...
    def _to_python(self) -> MyStructPatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyStructPatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructPatch": ...  # type: ignore


class MyStructField21Patch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    clear: _typing.Final[bool] = ...
    append: _typing.Final[_typing.Sequence[int]] = ...
    prepend: _typing.Final[_typing.Sequence[int]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[_typing.Sequence[int]]=...,
        clear: _typing.Optional[bool]=...,
        append: _typing.Optional[_typing.Sequence[int]]=...,
        prepend: _typing.Optional[_typing.Sequence[int]]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[_typing.Sequence[int]]=...,
        clear: _typing.Optional[bool]=...,
        append: _typing.Optional[_typing.Sequence[int]]=...,
        prepend: _typing.Optional[_typing.Sequence[int]]=...
    ) -> MyStructField21Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[int], bool, _typing.Sequence[int], _typing.Sequence[int]]]]: ...
    def _to_python(self) -> MyStructField21Patch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyStructField21Patch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructField21Patch": ...  # type: ignore


class OptionalMyStructField21Patch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyStructField21Patch] = ...
    ensure: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    patchAfter: _typing.Final[MyStructField21Patch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField21Patch]=...,
        ensure: _typing.Optional[_typing.Sequence[int]]=...,
        patchAfter: _typing.Optional[MyStructField21Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField21Patch]=...,
        ensure: _typing.Optional[_typing.Sequence[int]]=...,
        patchAfter: _typing.Optional[MyStructField21Patch]=...
    ) -> OptionalMyStructField21Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructField21Patch, _typing.Sequence[int], MyStructField21Patch]]]: ...
    def _to_python(self) -> OptionalMyStructField21Patch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalMyStructField21Patch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalMyStructField21Patch": ...  # type: ignore


class MyStructField22Patch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    clear: _typing.Final[bool] = ...
    remove: _typing.Final[_typing.AbstractSet[str]] = ...
    add: _typing.Final[_typing.AbstractSet[str]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[_typing.AbstractSet[str]]=...,
        clear: _typing.Optional[bool]=...,
        remove: _typing.Optional[_typing.AbstractSet[str]]=...,
        add: _typing.Optional[_typing.AbstractSet[str]]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[_typing.AbstractSet[str]]=...,
        clear: _typing.Optional[bool]=...,
        remove: _typing.Optional[_typing.AbstractSet[str]]=...,
        add: _typing.Optional[_typing.AbstractSet[str]]=...
    ) -> MyStructField22Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.AbstractSet[str], bool, _typing.AbstractSet[str], _typing.AbstractSet[str]]]]: ...
    def _to_python(self) -> MyStructField22Patch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyStructField22Patch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructField22Patch": ...  # type: ignore


class OptionalMyStructField22Patch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyStructField22Patch] = ...
    ensure: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    patchAfter: _typing.Final[MyStructField22Patch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField22Patch]=...,
        ensure: _typing.Optional[_typing.AbstractSet[str]]=...,
        patchAfter: _typing.Optional[MyStructField22Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField22Patch]=...,
        ensure: _typing.Optional[_typing.AbstractSet[str]]=...,
        patchAfter: _typing.Optional[MyStructField22Patch]=...
    ) -> OptionalMyStructField22Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructField22Patch, _typing.AbstractSet[str], MyStructField22Patch]]]: ...
    def _to_python(self) -> OptionalMyStructField22Patch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalMyStructField22Patch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalMyStructField22Patch": ...  # type: ignore


class MyStructField23Patch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    clear: _typing.Final[bool] = ...
    put: _typing.Final[_typing.Mapping[str, str]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[_typing.Mapping[str, str]]=...,
        clear: _typing.Optional[bool]=...,
        put: _typing.Optional[_typing.Mapping[str, str]]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[_typing.Mapping[str, str]]=...,
        clear: _typing.Optional[bool]=...,
        put: _typing.Optional[_typing.Mapping[str, str]]=...
    ) -> MyStructField23Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[str, str], bool, _typing.Mapping[str, str]]]]: ...
    def _to_python(self) -> MyStructField23Patch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyStructField23Patch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructField23Patch": ...  # type: ignore


class OptionalMyStructField23Patch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyStructField23Patch] = ...
    ensure: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    patchAfter: _typing.Final[MyStructField23Patch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField23Patch]=...,
        ensure: _typing.Optional[_typing.Mapping[str, str]]=...,
        patchAfter: _typing.Optional[MyStructField23Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField23Patch]=...,
        ensure: _typing.Optional[_typing.Mapping[str, str]]=...,
        patchAfter: _typing.Optional[MyStructField23Patch]=...
    ) -> OptionalMyStructField23Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructField23Patch, _typing.Mapping[str, str], MyStructField23Patch]]]: ...
    def _to_python(self) -> OptionalMyStructField23Patch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalMyStructField23Patch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalMyStructField23Patch": ...  # type: ignore


class MyStructValuePatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[MyStruct]] = ...
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyStructPatch] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[MyStruct]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[MyStruct]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructPatch]=...
    ) -> MyStructValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyStruct, bool, MyStructPatch]]]: ...
    def _to_python(self) -> MyStructValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.MyStructValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStructValuePatch": ...  # type: ignore


class OptionalMyStructValuePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[MyStructValuePatch] = ...
    ensure: _typing.Final[_typing.Optional[MyStruct]] = ...
    patchAfter: _typing.Final[MyStructValuePatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructValuePatch]=...,
        ensure: _typing.Optional[MyStruct]=...,
        patchAfter: _typing.Optional[MyStructValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructValuePatch]=...,
        ensure: _typing.Optional[MyStruct]=...,
        patchAfter: _typing.Optional[MyStructValuePatch]=...
    ) -> OptionalMyStructValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructValuePatch, MyStruct, MyStructValuePatch]]]: ...
    def _to_python(self) -> OptionalMyStructValuePatch: ...
    def _to_py3(self) -> "test.fixtures.patch.module.types.OptionalMyStructValuePatch": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.OptionalMyStructValuePatch": ...  # type: ignore
