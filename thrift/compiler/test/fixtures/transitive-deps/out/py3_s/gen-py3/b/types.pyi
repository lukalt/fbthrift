#
# Autogenerated by Thrift for b.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import c.types as _c_types


__property__ = property


_List__c_CT = _typing.TypeVar('_List__c_CT', bound=_typing.Sequence[_c_types.C])


class List__c_C(_typing.Sequence[_c_types.C], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_c_types.C]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_c_types.C]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _c_types.C: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_c_types.C]: ...
    def __add__(self, other: _typing.Sequence[_c_types.C]) -> 'List__c_C': ...
    def __radd__(self, other: _List__c_CT) -> _List__c_CT: ...
    def __reversed__(self) -> _typing.Iterator[_c_types.C]: ...
    def __iter__(self) -> _typing.Iterator[_c_types.C]: ...


B = List__c_C
E = _c_types.E
