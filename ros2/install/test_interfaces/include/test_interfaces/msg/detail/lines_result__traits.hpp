// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interfaces:msg/LinesResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__TRAITS_HPP_
#define TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__TRAITS_HPP_

#include "test_interfaces/msg/detail/lines_result__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'left1'
// Member 'right1'
// Member 'left2'
// Member 'right2'
#include "test_interfaces/msg/detail/point_detect__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces::msg::LinesResult>()
{
  return "test_interfaces::msg::LinesResult";
}

template<>
struct has_fixed_size<test_interfaces::msg::LinesResult>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<test_interfaces::msg::PointDetect>::value> {};

template<>
struct has_bounded_size<test_interfaces::msg::LinesResult>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<test_interfaces::msg::PointDetect>::value> {};

template<>
struct is_message<test_interfaces::msg::LinesResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__TRAITS_HPP_
