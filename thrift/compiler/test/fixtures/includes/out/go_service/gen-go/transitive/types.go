// Autogenerated by Thrift for transitive.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package transitive

import (
    "fmt"
    "reflect"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO

type Foo struct {
    A int64 `thrift:"a,1" json:"a" db:"a"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Foo)(nil)

func NewFoo() *Foo {
    return (&Foo{}).setDefaults()
}

func (x *Foo) GetA() int64 {
    return x.A
}

func (x *Foo) SetANonCompat(value int64) *Foo {
    x.A = value
    return x
}

func (x *Foo) SetA(value int64) *Foo {
    x.A = value
    return x
}

func (x *Foo) writeField1(p thrift.Encoder) error {  // A
    if err := p.WriteFieldBegin("a", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.A
    if err := p.WriteI64(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Foo) readField1(p thrift.Decoder) error {  // A
    result, err := p.ReadI64()
    if err != nil {
        return err
    }

    x.A = result
    return nil
}



func (x *Foo) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Foo"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Foo) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.Type(thrift.I64)):  // a
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *Foo) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Foo) setDefaults() *Foo {
    return x.
        SetANonCompat(2)
}



// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {

}
