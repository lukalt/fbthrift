// Autogenerated by Thrift for thrift/annotation/cpp.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package cpp


import (
    "reflect"
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = reflect.Ptr

// Premade codec specs
var (
    premadeCodecTypeSpec_cpp_RefType *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_EnumUnderlyingType *thrift.TypeSpec = nil
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Name *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Type *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Ref *thrift.TypeSpec = nil
    premadeCodecTypeSpec_bool *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Lazy *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_DisableLazyChecksum *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Adapter *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_PackIsset *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_MinimizePadding *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_FieldInterceptor *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_UseOpEncode *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_EnumType *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Frozen2Exclude *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_RuntimeAnnotation *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_UseCursorSerialization *thrift.TypeSpec = nil
    premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_cpp_RefType = &thrift.TypeSpec{
        FullName: "cpp.RefType",
        CodecEnumSpec: &thrift.CodecEnumSpec{},

    }
    premadeCodecTypeSpec_cpp_EnumUnderlyingType = &thrift.TypeSpec{
        FullName: "cpp.EnumUnderlyingType",
        CodecEnumSpec: &thrift.CodecEnumSpec{},

    }
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        FullName: "string",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_cpp_Name = &thrift.TypeSpec{
        FullName: "cpp.Name",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewName() },
},

    }
    premadeCodecTypeSpec_cpp_Type = &thrift.TypeSpec{
        FullName: "cpp.Type",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewType() },
},

    }
    premadeCodecTypeSpec_cpp_Ref = &thrift.TypeSpec{
        FullName: "cpp.Ref",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewRef() },
},

    }
    premadeCodecTypeSpec_bool = &thrift.TypeSpec{
        FullName: "bool",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

    }
    premadeCodecTypeSpec_cpp_Lazy = &thrift.TypeSpec{
        FullName: "cpp.Lazy",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewLazy() },
},

    }
    premadeCodecTypeSpec_cpp_DisableLazyChecksum = &thrift.TypeSpec{
        FullName: "cpp.DisableLazyChecksum",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewDisableLazyChecksum() },
},

    }
    premadeCodecTypeSpec_cpp_Adapter = &thrift.TypeSpec{
        FullName: "cpp.Adapter",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewAdapter() },
},

    }
    premadeCodecTypeSpec_cpp_PackIsset = &thrift.TypeSpec{
        FullName: "cpp.PackIsset",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewPackIsset() },
},

    }
    premadeCodecTypeSpec_cpp_MinimizePadding = &thrift.TypeSpec{
        FullName: "cpp.MinimizePadding",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewMinimizePadding() },
},

    }
    premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType = &thrift.TypeSpec{
        FullName: "cpp.ScopedEnumAsUnionType",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewScopedEnumAsUnionType() },
},

    }
    premadeCodecTypeSpec_cpp_FieldInterceptor = &thrift.TypeSpec{
        FullName: "cpp.FieldInterceptor",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFieldInterceptor() },
},

    }
    premadeCodecTypeSpec_cpp_UseOpEncode = &thrift.TypeSpec{
        FullName: "cpp.UseOpEncode",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewUseOpEncode() },
},

    }
    premadeCodecTypeSpec_cpp_EnumType = &thrift.TypeSpec{
        FullName: "cpp.EnumType",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewEnumType() },
},

    }
    premadeCodecTypeSpec_cpp_Frozen2Exclude = &thrift.TypeSpec{
        FullName: "cpp.Frozen2Exclude",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFrozen2Exclude() },
},

    }
    premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams = &thrift.TypeSpec{
        FullName: "cpp.Frozen2RequiresCompleteContainerParams",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFrozen2RequiresCompleteContainerParams() },
},

    }
    premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe = &thrift.TypeSpec{
        FullName: "cpp.ProcessInEbThreadUnsafe",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewProcessInEbThreadUnsafe() },
},

    }
    premadeCodecTypeSpec_cpp_RuntimeAnnotation = &thrift.TypeSpec{
        FullName: "cpp.RuntimeAnnotation",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewRuntimeAnnotation() },
},

    }
    premadeCodecTypeSpec_cpp_UseCursorSerialization = &thrift.TypeSpec{
        FullName: "cpp.UseCursorSerialization",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewUseCursorSerialization() },
},

    }
    premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods = &thrift.TypeSpec{
        FullName: "cpp.GenerateDeprecatedHeaderClientMethods",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewGenerateDeprecatedHeaderClientMethods() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Name *thrift.StructSpec = nil
    premadeStructSpec_Type *thrift.StructSpec = nil
    premadeStructSpec_Ref *thrift.StructSpec = nil
    premadeStructSpec_Lazy *thrift.StructSpec = nil
    premadeStructSpec_DisableLazyChecksum *thrift.StructSpec = nil
    premadeStructSpec_Adapter *thrift.StructSpec = nil
    premadeStructSpec_PackIsset *thrift.StructSpec = nil
    premadeStructSpec_MinimizePadding *thrift.StructSpec = nil
    premadeStructSpec_ScopedEnumAsUnionType *thrift.StructSpec = nil
    premadeStructSpec_FieldInterceptor *thrift.StructSpec = nil
    premadeStructSpec_UseOpEncode *thrift.StructSpec = nil
    premadeStructSpec_EnumType *thrift.StructSpec = nil
    premadeStructSpec_Frozen2Exclude *thrift.StructSpec = nil
    premadeStructSpec_Frozen2RequiresCompleteContainerParams *thrift.StructSpec = nil
    premadeStructSpec_ProcessInEbThreadUnsafe *thrift.StructSpec = nil
    premadeStructSpec_RuntimeAnnotation *thrift.StructSpec = nil
    premadeStructSpec_UseCursorSerialization *thrift.StructSpec = nil
    premadeStructSpec_GenerateDeprecatedHeaderClientMethods *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Name = &thrift.StructSpec{
    Name:                 "Name",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "value",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "value": 0,
    },
}
    premadeStructSpec_Type = &thrift.StructSpec{
    Name:                 "Type",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "template",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "template": 1,
    },
}
    premadeStructSpec_Ref = &thrift.StructSpec{
    Name:                 "Ref",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "type",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_cpp_RefType,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "type": 0,
    },
}
    premadeStructSpec_Lazy = &thrift.StructSpec{
    Name:                 "Lazy",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.BOOL,
            Name:                 "ref",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "ref": 0,
    },
}
    premadeStructSpec_DisableLazyChecksum = &thrift.StructSpec{
    Name:                 "DisableLazyChecksum",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_Adapter = &thrift.StructSpec{
    Name:                 "Adapter",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "adaptedType",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.STRING,
            Name:                 "underlyingName",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   4,
            WireType:             thrift.STRING,
            Name:                 "extraNamespace",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   5,
            WireType:             thrift.BOOL,
            Name:                 "moveOnly",
            ReflectIndex:         4,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "adaptedType": 1,
        "underlyingName": 2,
        "extraNamespace": 3,
        "moveOnly": 4,
    },
}
    premadeStructSpec_PackIsset = &thrift.StructSpec{
    Name:                 "PackIsset",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.BOOL,
            Name:                 "atomic",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "atomic": 0,
    },
}
    premadeStructSpec_MinimizePadding = &thrift.StructSpec{
    Name:                 "MinimizePadding",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_ScopedEnumAsUnionType = &thrift.StructSpec{
    Name:                 "ScopedEnumAsUnionType",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_FieldInterceptor = &thrift.StructSpec{
    Name:                 "FieldInterceptor",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.BOOL,
            Name:                 "noinline",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "noinline": 1,
    },
}
    premadeStructSpec_UseOpEncode = &thrift.StructSpec{
    Name:                 "UseOpEncode",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_EnumType = &thrift.StructSpec{
    Name:                 "EnumType",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I32,
            Name:                 "type",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_cpp_EnumUnderlyingType,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "type": 0,
    },
}
    premadeStructSpec_Frozen2Exclude = &thrift.StructSpec{
    Name:                 "Frozen2Exclude",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_Frozen2RequiresCompleteContainerParams = &thrift.StructSpec{
    Name:                 "Frozen2RequiresCompleteContainerParams",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_ProcessInEbThreadUnsafe = &thrift.StructSpec{
    Name:                 "ProcessInEbThreadUnsafe",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_RuntimeAnnotation = &thrift.StructSpec{
    Name:                 "RuntimeAnnotation",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_UseCursorSerialization = &thrift.StructSpec{
    Name:                 "UseCursorSerialization",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_GenerateDeprecatedHeaderClientMethods = &thrift.StructSpec{
    Name:                 "GenerateDeprecatedHeaderClientMethods",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()

        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_RefType.FullName] = premadeCodecTypeSpec_cpp_RefType
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_EnumUnderlyingType.FullName] = premadeCodecTypeSpec_cpp_EnumUnderlyingType
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Name.FullName] = premadeCodecTypeSpec_cpp_Name
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Type.FullName] = premadeCodecTypeSpec_cpp_Type
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Ref.FullName] = premadeCodecTypeSpec_cpp_Ref
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_bool.FullName] = premadeCodecTypeSpec_bool
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Lazy.FullName] = premadeCodecTypeSpec_cpp_Lazy
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_DisableLazyChecksum.FullName] = premadeCodecTypeSpec_cpp_DisableLazyChecksum
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Adapter.FullName] = premadeCodecTypeSpec_cpp_Adapter
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_PackIsset.FullName] = premadeCodecTypeSpec_cpp_PackIsset
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_MinimizePadding.FullName] = premadeCodecTypeSpec_cpp_MinimizePadding
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType.FullName] = premadeCodecTypeSpec_cpp_ScopedEnumAsUnionType
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_FieldInterceptor.FullName] = premadeCodecTypeSpec_cpp_FieldInterceptor
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_UseOpEncode.FullName] = premadeCodecTypeSpec_cpp_UseOpEncode
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_EnumType.FullName] = premadeCodecTypeSpec_cpp_EnumType
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Frozen2Exclude.FullName] = premadeCodecTypeSpec_cpp_Frozen2Exclude
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams.FullName] = premadeCodecTypeSpec_cpp_Frozen2RequiresCompleteContainerParams
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe.FullName] = premadeCodecTypeSpec_cpp_ProcessInEbThreadUnsafe
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_RuntimeAnnotation.FullName] = premadeCodecTypeSpec_cpp_RuntimeAnnotation
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_UseCursorSerialization.FullName] = premadeCodecTypeSpec_cpp_UseCursorSerialization
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods.FullName] = premadeCodecTypeSpec_cpp_GenerateDeprecatedHeaderClientMethods
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
