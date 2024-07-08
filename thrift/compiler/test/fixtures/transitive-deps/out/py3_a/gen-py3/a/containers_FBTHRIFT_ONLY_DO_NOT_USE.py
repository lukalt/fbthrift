#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/transitive-deps/src/a.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import importlib
from collections.abc import Sequence

"""
    This is a helper module to define py3 container types.
    All types defined here are re-exported in the parent `.types` module.
    Only `import` types defined here via the parent `.types` module.
    If you `import` them directly from here, you will get nasty import errors.
"""

import a.types as _a_types
import b.types as _b_types
import c.types as _c_types

def get_types_reflection():
    return importlib.import_module(
        "a.types_reflection"
    )

__all__ = []

class List__c_C(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__c_C):
            _py_obj = list(items)
        elif items:
            check_method = List__c_C._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]
        else:
            _py_obj = []

        super().__init__(_py_obj, List__c_C)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, _c_types.C)
        ):
            raise TypeError(f"{item!r} is not of type _c_types.C")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _c_types.C):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__c_C()


Sequence.register(List__c_C)
__all__.append('List__c_C')

class List__List__c_C(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__List__c_C):
            _py_obj = list(items)
        elif items:
            check_method = List__List__c_C._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]
        else:
            _py_obj = []

        super().__init__(_py_obj, List__List__c_C)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Sequence[_c_types.C]")
        if not isinstance(item, _a_types.List__c_C):
            item = _a_types.List__c_C(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _a_types.List__c_C):
            return item
        try:
            return _a_types.List__c_C(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__List__c_C()


Sequence.register(List__List__c_C)
__all__.append('List__List__c_C')

