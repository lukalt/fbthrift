// Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package service

import (
    "maps"

    module "module"
    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module.GoUnusedProtection__
var _ = includes.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_service_IncludesIncluded = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("service.IncludesIncluded").
            SetUnderlyingType(includes.GetMetadataThriftType("includes.Included")),
            )
    premadeThriftType_service_IncludesTransitiveFoo = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("service.IncludesTransitiveFoo").
            SetUnderlyingType(includes.GetMetadataThriftType("includes.TransitiveFoo")),
            )
    premadeThriftType_void = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_VOID_TYPE.Ptr(),
            )
)

var premadeThriftTypesMap = map[string]*metadata.ThriftType{
    "service.IncludesIncluded": premadeThriftType_service_IncludesIncluded,
    "service.IncludesTransitiveFoo": premadeThriftType_service_IncludesTransitiveFoo,
    "void": premadeThriftType_void,
}

var structMetadatas = []*metadata.ThriftStruct{
}

var exceptionMetadatas = []*metadata.ThriftException{
}

var enumMetadatas = []*metadata.ThriftEnum{
}

var serviceMetadatas = []*metadata.ThriftService{
    metadata.NewThriftService().
    SetName("service.MyService").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("query").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("s").
    SetIsOptional(false).
    SetType(module.GetMetadataThriftType("module.MyStruct")),
            metadata.NewThriftField().
    SetId(2).
    SetName("i").
    SetIsOptional(false).
    SetType(includes.GetMetadataThriftType("includes.Included")),
        },
    ),
            metadata.NewThriftFunction().
    SetName("has_arg_docs").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("s").
    SetIsOptional(false).
    SetType(module.GetMetadataThriftType("module.MyStruct")),
            metadata.NewThriftField().
    SetId(2).
    SetName("i").
    SetIsOptional(false).
    SetType(includes.GetMetadataThriftType("includes.Included")),
        },
    ),
        },
    ),
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
    recursiveThriftMetadatas = append(recursiveThriftMetadatas, module.GetThriftMetadata())
    recursiveThriftMetadatas = append(recursiveThriftMetadatas, includes.GetThriftMetadata())

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
