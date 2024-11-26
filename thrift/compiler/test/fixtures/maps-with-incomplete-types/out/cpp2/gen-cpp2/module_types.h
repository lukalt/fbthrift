/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct some_map;
struct field;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_some_map
#define APACHE_THRIFT_ACCESSOR_some_map
APACHE_THRIFT_DEFINE_ACCESSOR(some_map);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field
#define APACHE_THRIFT_ACCESSOR_field
APACHE_THRIFT_DEFINE_ACCESSOR(field);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace apache::thrift::test {
class A;
class B;
} // namespace apache::thrift::test
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace apache::thrift::test {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


/** Glean {"file": "thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift", "name": "B", "kind": "struct" } */
class B final  {
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
    ::apache::thrift::ident::field
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::i32_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

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
  using __fbthrift_cpp2_type = B;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  B() :
      __fbthrift_field_field() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  B(apache::thrift::FragileConstructor, ::std::int32_t field__arg);

  B(B&&) = default;

  B(const B&) = default;


  B& operator=(B&&) = default;

  B& operator=(const B&) = default;
 private:
  ::std::int32_t __fbthrift_field_field;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const B&) const;
  bool operator<(const B&) const;

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field_ref() const& {
    return {this->__fbthrift_field_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field_ref() & {
    return {this->__fbthrift_field_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field() const& {
    return {this->__fbthrift_field_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field() & {
    return {this->__fbthrift_field_field, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field() && {
    return {static_cast<T&&>(this->__fbthrift_field_field), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "field" } */
  [[deprecated("Use `FOO.field().value();` instead of `FOO.get_field();`")]]
  const ::std::int32_t* get_field() const& {
    return field_ref() ? std::addressof(__fbthrift_field_field) : nullptr;
  }

  /** Glean { "field": "field" } */
  [[deprecated("Use `FOO.field().value();` instead of `FOO.get_field();`")]]
  ::std::int32_t* get_field() & {
    return field_ref() ? std::addressof(__fbthrift_field_field) : nullptr;
  }
  /** Glean { "field": "field" } */
  [[deprecated("Use `FOO.field().value();` instead of `FOO.get_field();`")]]
  ::std::int32_t* get_field() && = delete;

  /** Glean { "field": "field" } */
  [[deprecated("Use `FOO.field() = BAR;` instead of `FOO.set_field(BAR);`")]]
  ::std::int32_t& set_field(::std::int32_t field_) {
    field_ref() = field_;
    return __fbthrift_field_field;
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

  friend class ::apache::thrift::Cpp2Ops<B>;
  friend void swap(B& a, B& b);
};

template <class Protocol_>
unsigned long B::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


/** Glean {"file": "thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift", "name": "A", "kind": "struct" } */
class A final  {
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
    ::apache::thrift::ident::some_map
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::cpp_type<std::unordered_map<::std::int32_t, ::apache::thrift::test::B>, ::apache::thrift::type::map<::apache::thrift::type::i32_t, ::apache::thrift::type::struct_t<::apache::thrift::test::B>>>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

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
  using __fbthrift_cpp2_type = A;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  A();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  A(apache::thrift::FragileConstructor, std::unordered_map<::std::int32_t, ::apache::thrift::test::B> some_map__arg);

  A(A&&) noexcept;

  A(const A& src);


  A& operator=(A&&) noexcept;
  A& operator=(const A& src);

  ~A();

 private:
  std::unordered_map<::std::int32_t, ::apache::thrift::test::B> __fbthrift_field_some_map;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const A&) const;
  bool operator<(const A&) const;

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> some_map_ref() const& {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> some_map_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> some_map_ref() & {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> some_map_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> some_map() const& {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> some_map() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> some_map() & {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "some_map" } */
  template <typename..., typename T = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> some_map() && {
    return {static_cast<T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }
  /** Glean { "field": "some_map" } */
  [[deprecated("Use `FOO.some_map().value();` instead of `FOO.get_some_map();`")]]
  const std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* get_some_map() const&;
  /** Glean { "field": "some_map" } */
  [[deprecated("Use `FOO.some_map().value();` instead of `FOO.get_some_map();`")]]
  std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* get_some_map() &;
  /** Glean { "field": "some_map" } */
  [[deprecated("Use `FOO.some_map().value();` instead of `FOO.get_some_map();`")]]
  std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* get_some_map() && = delete;

  /** Glean { "field": "some_map" } */
  template <typename T_A_some_map_struct_setter = std::unordered_map<::std::int32_t, ::apache::thrift::test::B>>
  [[deprecated("Use `FOO.some_map() = BAR;` instead of `FOO.set_some_map(BAR);`")]]
  std::unordered_map<::std::int32_t, ::apache::thrift::test::B>& set_some_map(T_A_some_map_struct_setter&& some_map_) {
    some_map_ref() = std::forward<T_A_some_map_struct_setter>(some_map_);
    return __fbthrift_field_some_map;
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

  friend class ::apache::thrift::Cpp2Ops<A>;
  friend void swap(A& a, A& b);
};

template <class Protocol_>
unsigned long A::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace apache::thrift::test
