
#
# Autogenerated by Thrift for c.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cC] C_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.C?>inst)._cpp_obj


cdef object C_from_cpp(const shared_ptr[_fbthrift_ctypes.cC]& c_struct):
    return _fbthrift_ctypes.C._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cE] E_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.E?>inst)._cpp_obj


cdef object E_from_cpp(const shared_ptr[_fbthrift_ctypes.cE]& c_struct):
    return _fbthrift_ctypes.E._fbthrift_create(c_struct)
