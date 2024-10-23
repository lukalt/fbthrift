// Autogenerated by Thrift for thrift/compiler/test/fixtures/optionals/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    "maps"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_module_Animal = metadata.NewThriftType().SetTEnum(
        metadata.NewThriftEnumType().
            SetName("module.Animal"),
            )
    premadeThriftType_double = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE.Ptr(),
            )
    premadeThriftType_module_Color = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.Color"),
            )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
            )
    premadeThriftType_bool = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
            )
    premadeThriftType_module_Vehicle = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.Vehicle"),
            )
    premadeThriftType_i64 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
            )
    premadeThriftType_module_PersonID = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module.PersonID").
            SetUnderlyingType(premadeThriftType_i64),
            )
    premadeThriftType_i16 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I16_TYPE.Ptr(),
            )
    premadeThriftType_set_module_PersonID = metadata.NewThriftType().SetTSet(
        metadata.NewThriftSetType().
            SetValueType(premadeThriftType_module_PersonID),
            )
    premadeThriftType_map_module_Animal_string = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_module_Animal).
            SetValueType(premadeThriftType_string),
            )
    premadeThriftType_list_module_Vehicle = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_module_Vehicle),
            )
    premadeThriftType_module_Person = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.Person"),
            )
)

var premadeThriftTypesMap = map[string]*metadata.ThriftType{
    "module.Animal": premadeThriftType_module_Animal,
    "double": premadeThriftType_double,
    "module.Color": premadeThriftType_module_Color,
    "string": premadeThriftType_string,
    "bool": premadeThriftType_bool,
    "module.Vehicle": premadeThriftType_module_Vehicle,
    "i64": premadeThriftType_i64,
    "module.PersonID": premadeThriftType_module_PersonID,
    "i16": premadeThriftType_i16,
    "module.Person": premadeThriftType_module_Person,
}

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("module.Color").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("red").
    SetIsOptional(false).
    SetType(premadeThriftType_double),
            metadata.NewThriftField().
    SetId(2).
    SetName("green").
    SetIsOptional(false).
    SetType(premadeThriftType_double),
            metadata.NewThriftField().
    SetId(3).
    SetName("blue").
    SetIsOptional(false).
    SetType(premadeThriftType_double),
            metadata.NewThriftField().
    SetId(4).
    SetName("alpha").
    SetIsOptional(false).
    SetType(premadeThriftType_double),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.Vehicle").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("color").
    SetIsOptional(false).
    SetType(premadeThriftType_module_Color),
            metadata.NewThriftField().
    SetId(2).
    SetName("licensePlate").
    SetIsOptional(true).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("description").
    SetIsOptional(true).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(4).
    SetName("name").
    SetIsOptional(true).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(5).
    SetName("hasAC").
    SetIsOptional(true).
    SetType(premadeThriftType_bool),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.Person").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_module_PersonID),
            metadata.NewThriftField().
    SetId(2).
    SetName("name").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("age").
    SetIsOptional(true).
    SetType(premadeThriftType_i16),
            metadata.NewThriftField().
    SetId(4).
    SetName("address").
    SetIsOptional(true).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(5).
    SetName("favoriteColor").
    SetIsOptional(true).
    SetType(premadeThriftType_module_Color),
            metadata.NewThriftField().
    SetId(6).
    SetName("friends").
    SetIsOptional(true).
    SetType(premadeThriftType_set_module_PersonID),
            metadata.NewThriftField().
    SetId(7).
    SetName("bestFriend").
    SetIsOptional(true).
    SetType(premadeThriftType_module_PersonID),
            metadata.NewThriftField().
    SetId(8).
    SetName("petNames").
    SetIsOptional(true).
    SetType(premadeThriftType_map_module_Animal_string),
            metadata.NewThriftField().
    SetId(9).
    SetName("afraidOfAnimal").
    SetIsOptional(true).
    SetType(premadeThriftType_module_Animal),
            metadata.NewThriftField().
    SetId(10).
    SetName("vehicles").
    SetIsOptional(true).
    SetType(premadeThriftType_list_module_Vehicle),
        },
    ),
}

var exceptionMetadatas = []*metadata.ThriftException{
}

var enumMetadatas = []*metadata.ThriftEnum{
    metadata.NewThriftEnum().
    SetName("module.Animal").
    SetElements(
        map[int32]string{
            1: "DOG",
            2: "CAT",
            3: "TARANTULA",
        },
    ),
}

var serviceMetadatas = []*metadata.ThriftService{
}

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata ThriftType for a given full type name.
func GetMetadataThriftType(fullName string) *metadata.ThriftType {
    return premadeThriftTypesMap[fullName]
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    allEnumsMap := make(map[string]*metadata.ThriftEnum)
    allStructsMap := make(map[string]*metadata.ThriftStruct)
    allExceptionsMap := make(map[string]*metadata.ThriftException)
    allServicesMap := make(map[string]*metadata.ThriftService)

    // Add enum metadatas from the current program...
    for _, enumMetadata := range enumMetadatas {
        allEnumsMap[enumMetadata.GetName()] = enumMetadata
    }
    // Add struct metadatas from the current program...
    for _, structMetadata := range structMetadatas {
        allStructsMap[structMetadata.GetName()] = structMetadata
    }
    // Add exception metadatas from the current program...
    for _, exceptionMetadata := range exceptionMetadatas {
        allExceptionsMap[exceptionMetadata.GetName()] = exceptionMetadata
    }
    // Add service metadatas from the current program...
    for _, serviceMetadata := range serviceMetadatas {
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
