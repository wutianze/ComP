// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interfaces:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST__TRAITS_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TEST__TRAITS_HPP_

#include "test_interfaces/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces::msg::Test>()
{
  return "test_interfaces::msg::Test";
}

template<>
struct has_fixed_size<test_interfaces::msg::Test>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_interfaces::msg::Test>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_interfaces::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST__TRAITS_HPP_
