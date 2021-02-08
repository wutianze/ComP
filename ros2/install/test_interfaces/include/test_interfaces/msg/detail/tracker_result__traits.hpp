// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interfaces:msg/TrackerResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__TRAITS_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__TRAITS_HPP_

#include "test_interfaces/msg/detail/tracker_result__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces::msg::TrackerResult>()
{
  return "test_interfaces::msg::TrackerResult";
}

template<>
struct has_fixed_size<test_interfaces::msg::TrackerResult>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<test_interfaces::msg::TrackerResult>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<test_interfaces::msg::TrackerResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__TRAITS_HPP_
