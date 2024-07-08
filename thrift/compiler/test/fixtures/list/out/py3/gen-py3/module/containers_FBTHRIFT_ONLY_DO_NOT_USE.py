#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/list/src/module.thrift
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

import module.types as _module_types

def get_types_reflection():
    return importlib.import_module(
        "module.types_reflection"
    )

__all__ = []

class List__string(thrift.py3.types.List):
    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__string):
            _py_obj = list(items)
        elif items:
            if isinstance(items, str):
                raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
            check_method = List__string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]
        else:
            _py_obj = []

        super().__init__(_py_obj, List__string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if not (
            isinstance(item, str)
        ):
            raise TypeError(f"{item!r} is not of type str")
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, str):
            return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__string()


Sequence.register(List__string)
__all__.append('List__string')

