#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/patch/src/module.thrift
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

import test.fixtures.patch.module.types as _test_fixtures_patch_module_types
import apache.thrift.op.patch.types as _apache_thrift_op_patch_types
import apache.thrift.type.standard.types as _apache_thrift_type_standard_types

def get_types_reflection():
    return importlib.import_module(
        "test.fixtures.patch.module.types_reflection"
    )

__all__ = []

class List__i16(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__i16):
            _py_obj = list(items)
        elif items:
            check_method = List__i16._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]
        else:
            _py_obj = []

        super().__init__(_py_obj, List__i16)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, int)
        ):
            raise TypeError(f"{item!r} is not of type int")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, int):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__i16()


Sequence.register(List__i16)
__all__.append('List__i16')

class List__Map__string_i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__Map__string_i32):
            _py_obj = list(items)
        elif items:
            check_method = List__Map__string_i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]
        else:
            _py_obj = []

        super().__init__(_py_obj, List__Map__string_i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Mapping[str, int]")
        if not isinstance(item, _test_fixtures_patch_module_types.Map__string_i32):
            item = _test_fixtures_patch_module_types.Map__string_i32(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _test_fixtures_patch_module_types.Map__string_i32):
            return item
        try:
            return _test_fixtures_patch_module_types.Map__string_i32(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__Map__string_i32()


Sequence.register(List__Map__string_i32)
__all__.append('List__Map__string_i32')

class List__i32(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__i32):
            _py_obj = list(items)
        elif items:
            check_method = List__i32._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]
        else:
            _py_obj = []

        super().__init__(_py_obj, List__i32)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, int)
        ):
            raise TypeError(f"{item!r} is not of type int")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, int):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__i32()


Sequence.register(List__i32)
__all__.append('List__i32')

