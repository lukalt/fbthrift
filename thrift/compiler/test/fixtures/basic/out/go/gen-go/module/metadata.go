// Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    "maps"
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_module_MyEnum *metadata.ThriftType = nil
    premadeThriftType_module_HackEnum *metadata.ThriftType = nil
    premadeThriftType_i64 *metadata.ThriftType = nil
    premadeThriftType_string *metadata.ThriftType = nil
    premadeThriftType_module_MyDataItem *metadata.ThriftType = nil
    premadeThriftType_module_MyDataItemAlias *metadata.ThriftType = nil
    premadeThriftType_bool *metadata.ThriftType = nil
    premadeThriftType_float *metadata.ThriftType = nil
    premadeThriftType_set_float *metadata.ThriftType = nil
    premadeThriftType_module_MyStruct *metadata.ThriftType = nil
    premadeThriftType_i32 *metadata.ThriftType = nil
    premadeThriftType_list_i32 *metadata.ThriftType = nil
    premadeThriftType_set_string *metadata.ThriftType = nil
    premadeThriftType_map_string_i64 *metadata.ThriftType = nil
    premadeThriftType_module_Containers *metadata.ThriftType = nil
    premadeThriftType_module_MyEnumAlias *metadata.ThriftType = nil
    premadeThriftType_module_MyUnion *metadata.ThriftType = nil
    premadeThriftType_module_ReservedKeyword *metadata.ThriftType = nil
    premadeThriftType_module_UnionToBeRenamed *metadata.ThriftType = nil
    premadeThriftType_module_MyException *metadata.ThriftType = nil
    premadeThriftType_module_MyExceptionWithMessage *metadata.ThriftType = nil
    premadeThriftType_void *metadata.ThriftType = nil
    premadeThriftType_binary *metadata.ThriftType = nil
)

// Premade Thrift type initializer
var premadeThriftTypesInitOnce = sync.OnceFunc(func() {
    premadeThriftType_module_MyEnum = metadata.NewThriftType().SetTEnum(
        metadata.NewThriftEnumType().
            SetName("module.MyEnum"),
    )
    premadeThriftType_module_HackEnum = metadata.NewThriftType().SetTEnum(
        metadata.NewThriftEnumType().
            SetName("module.HackEnum"),
    )
    premadeThriftType_i64 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
    )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    )
    premadeThriftType_module_MyDataItem = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.MyDataItem"),
    )
    premadeThriftType_module_MyDataItemAlias = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module.MyDataItemAlias").
            SetUnderlyingType(premadeThriftType_module_MyDataItem),
    )
    premadeThriftType_bool = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    )
    premadeThriftType_float = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_FLOAT_TYPE.Ptr(),
    )
    premadeThriftType_set_float = metadata.NewThriftType().SetTSet(
        metadata.NewThriftSetType().
            SetValueType(premadeThriftType_float),
    )
    premadeThriftType_module_MyStruct = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.MyStruct"),
    )
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
    )
    premadeThriftType_list_i32 = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_i32),
    )
    premadeThriftType_set_string = metadata.NewThriftType().SetTSet(
        metadata.NewThriftSetType().
            SetValueType(premadeThriftType_string),
    )
    premadeThriftType_map_string_i64 = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_string).
            SetValueType(premadeThriftType_i64),
    )
    premadeThriftType_module_Containers = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.Containers"),
    )
    premadeThriftType_module_MyEnumAlias = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module.MyEnumAlias").
            SetUnderlyingType(premadeThriftType_module_MyEnum),
    )
    premadeThriftType_module_MyUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.MyUnion"),
    )
    premadeThriftType_module_ReservedKeyword = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.ReservedKeyword"),
    )
    premadeThriftType_module_UnionToBeRenamed = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.UnionToBeRenamed"),
    )
    premadeThriftType_module_MyException = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.MyException"),
    )
    premadeThriftType_module_MyExceptionWithMessage = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.MyExceptionWithMessage"),
    )
    premadeThriftType_void = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_VOID_TYPE.Ptr(),
    )
    premadeThriftType_binary = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE.Ptr(),
    )
})

var premadeThriftTypesMapOnce = sync.OnceValue(
    func() map[string]*metadata.ThriftType {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return map[string]*metadata.ThriftType{
            "module.MyEnum": premadeThriftType_module_MyEnum,
            "module.HackEnum": premadeThriftType_module_HackEnum,
            "i64": premadeThriftType_i64,
            "string": premadeThriftType_string,
            "module.MyDataItem": premadeThriftType_module_MyDataItem,
            "module.MyDataItemAlias": premadeThriftType_module_MyDataItemAlias,
            "bool": premadeThriftType_bool,
            "float": premadeThriftType_float,
            "module.MyStruct": premadeThriftType_module_MyStruct,
            "i32": premadeThriftType_i32,
            "module.Containers": premadeThriftType_module_Containers,
            "module.MyEnumAlias": premadeThriftType_module_MyEnumAlias,
            "module.MyUnion": premadeThriftType_module_MyUnion,
            "module.ReservedKeyword": premadeThriftType_module_ReservedKeyword,
            "module.UnionToBeRenamed": premadeThriftType_module_UnionToBeRenamed,
            "module.MyException": premadeThriftType_module_MyException,
            "module.MyExceptionWithMessage": premadeThriftType_module_MyExceptionWithMessage,
            "void": premadeThriftType_void,
            "binary": premadeThriftType_binary,
        }
    },
)

var structMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftStruct {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftStruct{
            metadata.NewThriftStruct().
    SetName("module.MyStruct").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("MyIntField").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("MyStringField").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("MyDataField").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyDataItemAlias),
            metadata.NewThriftField().
    SetId(4).
    SetName("myEnum").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyEnum),
            metadata.NewThriftField().
    SetId(5).
    SetName("oneway").
    SetIsOptional(false).
    SetType(premadeThriftType_bool),
            metadata.NewThriftField().
    SetId(6).
    SetName("readonly").
    SetIsOptional(false).
    SetType(premadeThriftType_bool),
            metadata.NewThriftField().
    SetId(7).
    SetName("idempotent").
    SetIsOptional(false).
    SetType(premadeThriftType_bool),
            metadata.NewThriftField().
    SetId(8).
    SetName("floatSet").
    SetIsOptional(false).
    SetType(premadeThriftType_set_float),
            metadata.NewThriftField().
    SetId(9).
    SetName("no_hack_codegen_field").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
            metadata.NewThriftStruct().
    SetName("module.Containers").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("I32List").
    SetIsOptional(false).
    SetType(premadeThriftType_list_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("StringSet").
    SetIsOptional(false).
    SetType(premadeThriftType_set_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("StringToI64Map").
    SetIsOptional(false).
    SetType(premadeThriftType_map_string_i64),
        },
    ),
            metadata.NewThriftStruct().
    SetName("module.MyDataItem").
    SetIsUnion(false),
            metadata.NewThriftStruct().
    SetName("module.MyUnion").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("myEnum").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyEnumAlias),
            metadata.NewThriftField().
    SetId(2).
    SetName("myStruct").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyStruct),
            metadata.NewThriftField().
    SetId(3).
    SetName("myDataItem").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyDataItem),
            metadata.NewThriftField().
    SetId(4).
    SetName("floatSet").
    SetIsOptional(false).
    SetType(premadeThriftType_set_float),
        },
    ),
            metadata.NewThriftStruct().
    SetName("module.ReservedKeyword").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("reserved_field").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
        },
    ),
            metadata.NewThriftStruct().
    SetName("module.UnionToBeRenamed").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("reserved_field").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
        },
    ),
        }
    },
)

var exceptionMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftException {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftException{
            metadata.NewThriftException().
    SetName("module.MyException").
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("MyIntField").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("MyStringField").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("myStruct").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyStruct),
            metadata.NewThriftField().
    SetId(4).
    SetName("myUnion").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyUnion),
        },
    ),
            metadata.NewThriftException().
    SetName("module.MyExceptionWithMessage").
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("MyIntField").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("MyStringField").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("myStruct").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyStruct),
            metadata.NewThriftField().
    SetId(4).
    SetName("myUnion").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyUnion),
        },
    ),
        }
    },
)

var enumMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftEnum {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftEnum{
            metadata.NewThriftEnum().
    SetName("module.MyEnum").
    SetElements(
        map[int32]string{
            0: "MyValue1",
            1: "MyValue2",
        },
    ),
            metadata.NewThriftEnum().
    SetName("module.HackEnum").
    SetElements(
        map[int32]string{
            0: "Value1",
            1: "Value2",
        },
    ),
        }
    },
)

var serviceMetadatasOnce = sync.OnceValue(
    func() []*metadata.ThriftService {
        // Relies on premade Thrift types initialization
        premadeThriftTypesInitOnce()
        return []*metadata.ThriftService{
            metadata.NewThriftService().
    SetName("module.FooService").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("simple_rpc").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
        },
    ),
            metadata.NewThriftService().
    SetName("module.FB303Service").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("simple_rpc").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_module_ReservedKeyword).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("int_parameter").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
        },
    ),
        },
    ),
            metadata.NewThriftService().
    SetName("module.MyService").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("ping").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
            metadata.NewThriftFunction().
    SetName("getRandomData").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_string),
            metadata.NewThriftFunction().
    SetName("sink").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("sink").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ),
            metadata.NewThriftFunction().
    SetName("putDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("data").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
            metadata.NewThriftFunction().
    SetName("hasDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_bool).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ),
            metadata.NewThriftFunction().
    SetName("getDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_string).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ),
            metadata.NewThriftFunction().
    SetName("deleteDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ),
            metadata.NewThriftFunction().
    SetName("lobDataById").
    SetIsOneway(true).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("data").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
            metadata.NewThriftFunction().
    SetName("invalid_return_for_hack").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_set_float),
            metadata.NewThriftFunction().
    SetName("rpc_skipped_codegen").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
        },
    ),
            metadata.NewThriftService().
    SetName("module.DbMixedStackArguments").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("getDataByKey0").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_binary).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("key").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
            metadata.NewThriftFunction().
    SetName("getDataByKey1").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_binary).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("key").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
        },
    ),
        }
    },
)

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata ThriftType for a given full type name.
func GetMetadataThriftType(fullName string) *metadata.ThriftType {
    return premadeThriftTypesMapOnce()[fullName]
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    allEnumsMap := make(map[string]*metadata.ThriftEnum)
    allStructsMap := make(map[string]*metadata.ThriftStruct)
    allExceptionsMap := make(map[string]*metadata.ThriftException)
    allServicesMap := make(map[string]*metadata.ThriftService)

    // Add enum metadatas from the current program...
    for _, enumMetadata := range enumMetadatasOnce() {
        allEnumsMap[enumMetadata.GetName()] = enumMetadata
    }
    // Add struct metadatas from the current program...
    for _, structMetadata := range structMetadatasOnce() {
        allStructsMap[structMetadata.GetName()] = structMetadata
    }
    // Add exception metadatas from the current program...
    for _, exceptionMetadata := range exceptionMetadatasOnce() {
        allExceptionsMap[exceptionMetadata.GetName()] = exceptionMetadata
    }
    // Add service metadatas from the current program...
    for _, serviceMetadata := range serviceMetadatasOnce() {
        allServicesMap[serviceMetadata.GetName()] = serviceMetadata
    }

    // Obtain Thrift metadatas from recursively included programs...
    var recursiveThriftMetadatas []*metadata.ThriftMetadata

    // ...now merge metadatas from recursively included programs.
    for _, thriftMetadata := range recursiveThriftMetadatas {
        maps.Copy(allEnumsMap, thriftMetadata.GetEnums())
        maps.Copy(allStructsMap, thriftMetadata.GetStructs())
        maps.Copy(allExceptionsMap, thriftMetadata.GetExceptions())
        maps.Copy(allServicesMap, thriftMetadata.GetServices())
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnumsMap).
        SetStructs(allStructsMap).
        SetExceptions(allExceptionsMap).
        SetServices(allServicesMap)
}

// GetThriftMetadataForService returns Thrift metadata for the given service.
func GetThriftMetadataForService(scopedServiceName string) *metadata.ThriftMetadata {
    thriftMetadata := GetThriftMetadata()

    allServicesMap := thriftMetadata.GetServices()
    relevantServicesMap := make(map[string]*metadata.ThriftService)

    serviceMetadata := allServicesMap[scopedServiceName]
    // Visit and record all recursive parents of the target service.
    for serviceMetadata != nil {
        relevantServicesMap[serviceMetadata.GetName()] = serviceMetadata
        if serviceMetadata.IsSetParent() {
            serviceMetadata = allServicesMap[serviceMetadata.GetParent()]
        } else {
            serviceMetadata = nil
        }
    }

    thriftMetadata.SetServices(relevantServicesMap)

    return thriftMetadata
}
