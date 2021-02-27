// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interfaces:msg/PointDetect.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__TRAITS_HPP_
#define TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__TRAITS_HPP_

#include "test_interfaces/msg/detail/point_detect__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces::msg::PointDetect>()
{
  return "test_interfaces::msg::PointDetect";
}

template<>
struct has_fixed_size<test_interfaces::msg::PointDetect>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_interfaces::msg::PointDetect>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_interfaces::msg::PointDetect>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__TRAITS_HPP_
