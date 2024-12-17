/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/int_limits/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct max_i64_field;
struct min_i64_field;
struct max_i32_field;
struct min_i32_field;
struct max_i16_field;
struct min_i16_field;
struct max_byte_field;
struct min_byte_field;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_max_i64_field
#define APACHE_THRIFT_ACCESSOR_max_i64_field
APACHE_THRIFT_DEFINE_ACCESSOR(max_i64_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_min_i64_field
#define APACHE_THRIFT_ACCESSOR_min_i64_field
APACHE_THRIFT_DEFINE_ACCESSOR(min_i64_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_max_i32_field
#define APACHE_THRIFT_ACCESSOR_max_i32_field
APACHE_THRIFT_DEFINE_ACCESSOR(max_i32_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_min_i32_field
#define APACHE_THRIFT_ACCESSOR_min_i32_field
APACHE_THRIFT_DEFINE_ACCESSOR(min_i32_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_max_i16_field
#define APACHE_THRIFT_ACCESSOR_max_i16_field
APACHE_THRIFT_DEFINE_ACCESSOR(max_i16_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_min_i16_field
#define APACHE_THRIFT_ACCESSOR_min_i16_field
APACHE_THRIFT_DEFINE_ACCESSOR(min_i16_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_max_byte_field
#define APACHE_THRIFT_ACCESSOR_max_byte_field
APACHE_THRIFT_DEFINE_ACCESSOR(max_byte_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_min_byte_field
#define APACHE_THRIFT_ACCESSOR_min_byte_field
APACHE_THRIFT_DEFINE_ACCESSOR(min_byte_field);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Limits;
} // namespace cpp2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


/** Glean {"file": "thrift/compiler/test/fixtures/int_limits/src/module.thrift", "name": "Limits", "kind": "struct" } */
class Limits final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  template <class ...>
  FOLLY_ERASE static constexpr std::string_view __fbthrift_get_module_name() noexcept {
    return "module";
  }
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::max_i64_field,
    ::apache::thrift::ident::min_i64_field,
    ::apache::thrift::ident::max_i32_field,
    ::apache::thrift::ident::min_i32_field,
    ::apache::thrift::ident::max_i16_field,
    ::apache::thrift::ident::min_i16_field,
    ::apache::thrift::ident::max_byte_field,
    ::apache::thrift::ident::min_byte_field
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,3,4,5,6,7,8};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::i64_t,
    ::apache::thrift::type::i64_t,
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i16_t,
    ::apache::thrift::type::i16_t,
    ::apache::thrift::type::byte_t,
    ::apache::thrift::type::byte_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 8;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Limits;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  Limits() :
      __fbthrift_field_max_i64_field(static_cast<::std::int64_t>(9223372036854775807)),
      __fbthrift_field_min_i64_field(static_cast<::std::int64_t>(-9223372036854775808)),
      __fbthrift_field_max_i32_field(static_cast<::std::int32_t>(2147483647)),
      __fbthrift_field_min_i32_field(static_cast<::std::int32_t>(-2147483648)),
      __fbthrift_field_max_i16_field(static_cast<::std::int16_t>(32767)),
      __fbthrift_field_min_i16_field(static_cast<::std::int16_t>(-32768)),
      __fbthrift_field_max_byte_field(static_cast<::std::int8_t>(127)),
      __fbthrift_field_min_byte_field(static_cast<::std::int8_t>(-128)) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Limits(apache::thrift::FragileConstructor, ::std::int64_t max_i64_field__arg, ::std::int64_t min_i64_field__arg, ::std::int32_t max_i32_field__arg, ::std::int32_t min_i32_field__arg, ::std::int16_t max_i16_field__arg, ::std::int16_t min_i16_field__arg, ::std::int8_t max_byte_field__arg, ::std::int8_t min_byte_field__arg);

  Limits(Limits&&) noexcept;

  Limits(const Limits& src);


  Limits& operator=(Limits&&) noexcept;
  Limits& operator=(const Limits& src);
 private:
  ::std::int64_t __fbthrift_field_max_i64_field;
 private:
  ::std::int64_t __fbthrift_field_min_i64_field;
 private:
  ::std::int32_t __fbthrift_field_max_i32_field;
 private:
  ::std::int32_t __fbthrift_field_min_i32_field;
 private:
  ::std::int16_t __fbthrift_field_max_i16_field;
 private:
  ::std::int16_t __fbthrift_field_min_i16_field;
 private:
  ::std::int8_t __fbthrift_field_max_byte_field;
 private:
  ::std::int8_t __fbthrift_field_min_byte_field;
 private:
  apache::thrift::detail::isset_bitset<8, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const Limits&) const;
  bool operator<(const Limits&) const;

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_i64_field_ref() const& {
    return {this->__fbthrift_field_max_i64_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_i64_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_i64_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_i64_field_ref() & {
    return {this->__fbthrift_field_max_i64_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_i64_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_i64_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_i64_field() const& {
    return {this->__fbthrift_field_max_i64_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_i64_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_i64_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_i64_field() & {
    return {this->__fbthrift_field_max_i64_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "max_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_i64_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_i64_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_i64_field_ref() const& {
    return {this->__fbthrift_field_min_i64_field, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_i64_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_i64_field), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_i64_field_ref() & {
    return {this->__fbthrift_field_min_i64_field, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_i64_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_i64_field), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_i64_field() const& {
    return {this->__fbthrift_field_min_i64_field, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_i64_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_i64_field), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_i64_field() & {
    return {this->__fbthrift_field_min_i64_field, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "min_i64_field" } */
  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_i64_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_i64_field), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_i32_field_ref() const& {
    return {this->__fbthrift_field_max_i32_field, __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_i32_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_i32_field), __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_i32_field_ref() & {
    return {this->__fbthrift_field_max_i32_field, __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_i32_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_i32_field), __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_i32_field() const& {
    return {this->__fbthrift_field_max_i32_field, __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_i32_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_i32_field), __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_i32_field() & {
    return {this->__fbthrift_field_max_i32_field, __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "max_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_i32_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_i32_field), __isset.at(2), __isset.bit(2)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_i32_field_ref() const& {
    return {this->__fbthrift_field_min_i32_field, __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_i32_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_i32_field), __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_i32_field_ref() & {
    return {this->__fbthrift_field_min_i32_field, __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_i32_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_i32_field), __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_i32_field() const& {
    return {this->__fbthrift_field_min_i32_field, __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_i32_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_i32_field), __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_i32_field() & {
    return {this->__fbthrift_field_min_i32_field, __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "min_i32_field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_i32_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_i32_field), __isset.at(3), __isset.bit(3)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_i16_field_ref() const& {
    return {this->__fbthrift_field_max_i16_field, __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_i16_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_i16_field), __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_i16_field_ref() & {
    return {this->__fbthrift_field_max_i16_field, __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_i16_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_i16_field), __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_i16_field() const& {
    return {this->__fbthrift_field_max_i16_field, __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_i16_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_i16_field), __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_i16_field() & {
    return {this->__fbthrift_field_max_i16_field, __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "max_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_i16_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_i16_field), __isset.at(4), __isset.bit(4)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_i16_field_ref() const& {
    return {this->__fbthrift_field_min_i16_field, __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_i16_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_i16_field), __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_i16_field_ref() & {
    return {this->__fbthrift_field_min_i16_field, __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_i16_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_i16_field), __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_i16_field() const& {
    return {this->__fbthrift_field_min_i16_field, __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_i16_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_i16_field), __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_i16_field() & {
    return {this->__fbthrift_field_min_i16_field, __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "min_i16_field" } */
  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_i16_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_i16_field), __isset.at(5), __isset.bit(5)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_byte_field_ref() const& {
    return {this->__fbthrift_field_max_byte_field, __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_byte_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_byte_field), __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_byte_field_ref() & {
    return {this->__fbthrift_field_max_byte_field, __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_byte_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_byte_field), __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> max_byte_field() const& {
    return {this->__fbthrift_field_max_byte_field, __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> max_byte_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_max_byte_field), __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> max_byte_field() & {
    return {this->__fbthrift_field_max_byte_field, __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "max_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> max_byte_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_max_byte_field), __isset.at(6), __isset.bit(6)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_byte_field_ref() const& {
    return {this->__fbthrift_field_min_byte_field, __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_byte_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_byte_field), __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_byte_field_ref() & {
    return {this->__fbthrift_field_min_byte_field, __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_byte_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_byte_field), __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> min_byte_field() const& {
    return {this->__fbthrift_field_min_byte_field, __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> min_byte_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_min_byte_field), __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> min_byte_field() & {
    return {this->__fbthrift_field_min_byte_field, __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "min_byte_field" } */
  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> min_byte_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_min_byte_field), __isset.at(7), __isset.bit(7)};
  }

  /** Glean { "field": "max_i64_field" } */
  [[deprecated("Use `FOO.max_i64_field().value();` instead of `FOO.get_max_i64_field();`")]]
  ::std::int64_t get_max_i64_field() const {
    return __fbthrift_field_max_i64_field;
  }

  /** Glean { "field": "max_i64_field" } */
  [[deprecated("Use `FOO.max_i64_field() = BAR;` instead of `FOO.set_max_i64_field(BAR);`")]]
  ::std::int64_t& set_max_i64_field(::std::int64_t max_i64_field_) {
    max_i64_field_ref() = max_i64_field_;
    return __fbthrift_field_max_i64_field;
  }

  /** Glean { "field": "min_i64_field" } */
  [[deprecated("Use `FOO.min_i64_field().value();` instead of `FOO.get_min_i64_field();`")]]
  ::std::int64_t get_min_i64_field() const {
    return __fbthrift_field_min_i64_field;
  }

  /** Glean { "field": "min_i64_field" } */
  [[deprecated("Use `FOO.min_i64_field() = BAR;` instead of `FOO.set_min_i64_field(BAR);`")]]
  ::std::int64_t& set_min_i64_field(::std::int64_t min_i64_field_) {
    min_i64_field_ref() = min_i64_field_;
    return __fbthrift_field_min_i64_field;
  }

  /** Glean { "field": "max_i32_field" } */
  [[deprecated("Use `FOO.max_i32_field().value();` instead of `FOO.get_max_i32_field();`")]]
  ::std::int32_t get_max_i32_field() const {
    return __fbthrift_field_max_i32_field;
  }

  /** Glean { "field": "max_i32_field" } */
  [[deprecated("Use `FOO.max_i32_field() = BAR;` instead of `FOO.set_max_i32_field(BAR);`")]]
  ::std::int32_t& set_max_i32_field(::std::int32_t max_i32_field_) {
    max_i32_field_ref() = max_i32_field_;
    return __fbthrift_field_max_i32_field;
  }

  /** Glean { "field": "min_i32_field" } */
  [[deprecated("Use `FOO.min_i32_field().value();` instead of `FOO.get_min_i32_field();`")]]
  ::std::int32_t get_min_i32_field() const {
    return __fbthrift_field_min_i32_field;
  }

  /** Glean { "field": "min_i32_field" } */
  [[deprecated("Use `FOO.min_i32_field() = BAR;` instead of `FOO.set_min_i32_field(BAR);`")]]
  ::std::int32_t& set_min_i32_field(::std::int32_t min_i32_field_) {
    min_i32_field_ref() = min_i32_field_;
    return __fbthrift_field_min_i32_field;
  }

  /** Glean { "field": "max_i16_field" } */
  [[deprecated("Use `FOO.max_i16_field().value();` instead of `FOO.get_max_i16_field();`")]]
  ::std::int16_t get_max_i16_field() const {
    return __fbthrift_field_max_i16_field;
  }

  /** Glean { "field": "max_i16_field" } */
  [[deprecated("Use `FOO.max_i16_field() = BAR;` instead of `FOO.set_max_i16_field(BAR);`")]]
  ::std::int16_t& set_max_i16_field(::std::int16_t max_i16_field_) {
    max_i16_field_ref() = max_i16_field_;
    return __fbthrift_field_max_i16_field;
  }

  /** Glean { "field": "min_i16_field" } */
  [[deprecated("Use `FOO.min_i16_field().value();` instead of `FOO.get_min_i16_field();`")]]
  ::std::int16_t get_min_i16_field() const {
    return __fbthrift_field_min_i16_field;
  }

  /** Glean { "field": "min_i16_field" } */
  [[deprecated("Use `FOO.min_i16_field() = BAR;` instead of `FOO.set_min_i16_field(BAR);`")]]
  ::std::int16_t& set_min_i16_field(::std::int16_t min_i16_field_) {
    min_i16_field_ref() = min_i16_field_;
    return __fbthrift_field_min_i16_field;
  }

  /** Glean { "field": "max_byte_field" } */
  [[deprecated("Use `FOO.max_byte_field().value();` instead of `FOO.get_max_byte_field();`")]]
  ::std::int8_t get_max_byte_field() const {
    return __fbthrift_field_max_byte_field;
  }

  /** Glean { "field": "max_byte_field" } */
  [[deprecated("Use `FOO.max_byte_field() = BAR;` instead of `FOO.set_max_byte_field(BAR);`")]]
  ::std::int8_t& set_max_byte_field(::std::int8_t max_byte_field_) {
    max_byte_field_ref() = max_byte_field_;
    return __fbthrift_field_max_byte_field;
  }

  /** Glean { "field": "min_byte_field" } */
  [[deprecated("Use `FOO.min_byte_field().value();` instead of `FOO.get_min_byte_field();`")]]
  ::std::int8_t get_min_byte_field() const {
    return __fbthrift_field_min_byte_field;
  }

  /** Glean { "field": "min_byte_field" } */
  [[deprecated("Use `FOO.min_byte_field() = BAR;` instead of `FOO.set_min_byte_field(BAR);`")]]
  ::std::int8_t& set_min_byte_field(::std::int8_t min_byte_field_) {
    min_byte_field_ref() = min_byte_field_;
    return __fbthrift_field_min_byte_field;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Limits>;
  friend void swap(Limits& a, Limits& b);
};

template <class Protocol_>
unsigned long Limits::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace cpp2
