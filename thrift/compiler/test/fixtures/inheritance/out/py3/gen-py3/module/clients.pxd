#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport thrift.py3.client


cdef class MyRoot(thrift.py3.client.Client):
    pass

cdef class MyNode(MyRoot):
    pass

cdef class MyLeaf(MyNode):
    pass

