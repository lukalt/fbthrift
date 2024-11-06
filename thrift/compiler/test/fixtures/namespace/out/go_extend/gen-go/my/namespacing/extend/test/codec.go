// Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/extend.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package test


import (
    "reflect"
    "sync"

    test0 "my/namespacing/test"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

var _ = test0.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = reflect.Ptr

// Premade codec specs
var (
    premadeCodecTypeSpec_bool *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_bool = &thrift.TypeSpec{
        FullName: "bool",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_reqExtendTestServiceCheck *thrift.StructSpec = nil
    premadeStructSpec_respExtendTestServiceCheck *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_reqExtendTestServiceCheck = &thrift.StructSpec{
    Name:                 "reqExtendTestServiceCheck",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRUCT,
            Name:                 "struct1",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        test0.GetCodecTypeSpec("hsmodule.HsFoo"),
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "struct1": 0,
    },
}
    premadeStructSpec_respExtendTestServiceCheck = &thrift.StructSpec{
    Name:                 "respExtendTestServiceCheck",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.BOOL,
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        0: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "success": 0,
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()

        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_bool.FullName] = premadeCodecTypeSpec_bool
        return fbthriftTypeSpecsMap
    },
)

func init() {
    premadeCodecSpecsInitOnce()
    premadeStructSpecsInitOnce()
}

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMapOnce()[fullName]
}
