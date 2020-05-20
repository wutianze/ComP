// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_s:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_S__MSG__DETAIL__TEST__TRAITS_HPP_
#define SIMPLE_S__MSG__DETAIL__TEST__TRAITS_HPP_

#include "simple_s/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_s::msg::Test>()
{
  return "simple_s::msg::Test";
}

template<>
struct has_fixed_size<simple_s::msg::Test>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_s::msg::Test>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_s::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_S__MSG__DETAIL__TEST__TRAITS_HPP_
