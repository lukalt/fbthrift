
#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/templated-deserialize/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cSmallStruct] SmallStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.SmallStruct?>inst)._cpp_obj


cdef object SmallStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cSmallStruct]& c_struct):
    return _fbthrift_ctypes.SmallStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.ccontainerStruct] containerStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.containerStruct?>inst)._cpp_obj


cdef object containerStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.ccontainerStruct]& c_struct):
    return _fbthrift_ctypes.containerStruct._fbthrift_create(c_struct)
