// Autogenerated by Thrift for thrift/compiler/test/fixtures/optionals/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


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
    premadeCodecTypeSpec_module_Animal *thrift.TypeSpec = nil
    premadeCodecTypeSpec_double *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Color *thrift.TypeSpec = nil
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_bool *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Vehicle *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i64 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_PersonID *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i16 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_set_module_PersonID *thrift.TypeSpec = nil
    premadeCodecTypeSpec_map_module_Animal_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_list_module_Vehicle *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Person *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_module_Animal = &thrift.TypeSpec{
        FullName: "module.Animal",
        CodecEnumSpec: &thrift.CodecEnumSpec{},

    }
    premadeCodecTypeSpec_double = &thrift.TypeSpec{
        FullName: "double",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_DOUBLE,
},

    }
    premadeCodecTypeSpec_module_Color = &thrift.TypeSpec{
        FullName: "module.Color",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewColor() },
},

    }
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        FullName: "string",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_bool = &thrift.TypeSpec{
        FullName: "bool",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

    }
    premadeCodecTypeSpec_module_Vehicle = &thrift.TypeSpec{
        FullName: "module.Vehicle",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewVehicle() },
},

    }
    premadeCodecTypeSpec_i64 = &thrift.TypeSpec{
        FullName: "i64",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I64,
},

    }
    premadeCodecTypeSpec_module_PersonID = &thrift.TypeSpec{
        FullName: "module.PersonID",
        CodecTypedefSpec: &thrift.CodecTypedefSpec{
	UnderlyingTypeSpec: premadeCodecTypeSpec_i64,
},

    }
    premadeCodecTypeSpec_i16 = &thrift.TypeSpec{
        FullName: "i16",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I16,
},

    }
    premadeCodecTypeSpec_set_module_PersonID = &thrift.TypeSpec{
        FullName: "set<module.PersonID>",
        CodecSetSpec: &thrift.CodecSetSpec{
    ElementWireType: thrift.I64,
	ElementTypeSpec: premadeCodecTypeSpec_module_PersonID,
},

    }
    premadeCodecTypeSpec_map_module_Animal_string = &thrift.TypeSpec{
        FullName: "map<module.Animal, string>",
        CodecMapSpec: &thrift.CodecMapSpec{
	KeyTypeSpec:   premadeCodecTypeSpec_module_Animal,
	ValueTypeSpec: premadeCodecTypeSpec_string,
    KeyWireType:   thrift.I32,
	ValueWireType: thrift.STRING,
},

    }
    premadeCodecTypeSpec_list_module_Vehicle = &thrift.TypeSpec{
        FullName: "list<module.Vehicle>",
        CodecListSpec: &thrift.CodecListSpec{
    ElementWireType: thrift.STRUCT,
	ElementTypeSpec: premadeCodecTypeSpec_module_Vehicle,
},

    }
    premadeCodecTypeSpec_module_Person = &thrift.TypeSpec{
        FullName: "module.Person",
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewPerson() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Color *thrift.StructSpec = nil
    premadeStructSpec_Vehicle *thrift.StructSpec = nil
    premadeStructSpec_Person *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Color = &thrift.StructSpec{
    Name:                 "Color",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.DOUBLE,
            Name:                 "red",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.DOUBLE,
            Name:                 "green",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.DOUBLE,
            Name:                 "blue",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: false,
        },        {
            ID:                   4,
            WireType:             thrift.DOUBLE,
            Name:                 "alpha",
            ReflectIndex:         3,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
    },
    FieldSpecNameToIndex: map[string]int{
        "red": 0,
        "green": 1,
        "blue": 2,
        "alpha": 3,
    },
}
    premadeStructSpec_Vehicle = &thrift.StructSpec{
    Name:                 "Vehicle",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRUCT,
            Name:                 "color",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Color,
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "licensePlate",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.STRING,
            Name:                 "description",
            ReflectIndex:         2,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   4,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         3,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   5,
            WireType:             thrift.BOOL,
            Name:                 "hasAC",
            ReflectIndex:         4,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
    },
    FieldSpecNameToIndex: map[string]int{
        "color": 0,
        "licensePlate": 1,
        "description": 2,
        "name": 3,
        "hasAC": 4,
    },
}
    premadeStructSpec_Person = &thrift.StructSpec{
    Name:                 "Person",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.I64,
            Name:                 "id",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_PersonID,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.I16,
            Name:                 "age",
            ReflectIndex:         2,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i16,
            MustBeSetToSerialize: true,
        },        {
            ID:                   4,
            WireType:             thrift.STRING,
            Name:                 "address",
            ReflectIndex:         3,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   5,
            WireType:             thrift.STRUCT,
            Name:                 "favoriteColor",
            ReflectIndex:         4,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Color,
            MustBeSetToSerialize: true,
        },        {
            ID:                   6,
            WireType:             thrift.SET,
            Name:                 "friends",
            ReflectIndex:         5,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_set_module_PersonID,
            MustBeSetToSerialize: true,
        },        {
            ID:                   7,
            WireType:             thrift.I64,
            Name:                 "bestFriend",
            ReflectIndex:         6,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_PersonID,
            MustBeSetToSerialize: true,
        },        {
            ID:                   8,
            WireType:             thrift.MAP,
            Name:                 "petNames",
            ReflectIndex:         7,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_map_module_Animal_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   9,
            WireType:             thrift.I32,
            Name:                 "afraidOfAnimal",
            ReflectIndex:         8,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Animal,
            MustBeSetToSerialize: true,
        },        {
            ID:                   10,
            WireType:             thrift.LIST,
            Name:                 "vehicles",
            ReflectIndex:         9,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_list_module_Vehicle,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
        3: 2,
        4: 3,
        5: 4,
        6: 5,
        7: 6,
        8: 7,
        9: 8,
        10: 9,
    },
    FieldSpecNameToIndex: map[string]int{
        "id": 0,
        "name": 1,
        "age": 2,
        "address": 3,
        "favoriteColor": 4,
        "friends": 5,
        "bestFriend": 6,
        "petNames": 7,
        "afraidOfAnimal": 8,
        "vehicles": 9,
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()

        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Animal.FullName] = premadeCodecTypeSpec_module_Animal
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_double.FullName] = premadeCodecTypeSpec_double
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Color.FullName] = premadeCodecTypeSpec_module_Color
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_bool.FullName] = premadeCodecTypeSpec_bool
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Vehicle.FullName] = premadeCodecTypeSpec_module_Vehicle
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_i64.FullName] = premadeCodecTypeSpec_i64
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_PersonID.FullName] = premadeCodecTypeSpec_module_PersonID
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_i16.FullName] = premadeCodecTypeSpec_i16
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_module_Person.FullName] = premadeCodecTypeSpec_module_Person
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
