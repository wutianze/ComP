// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interfaces:msg/YoloResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__TRAITS_HPP_
#define TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__TRAITS_HPP_

#include "test_interfaces/msg/detail/yolo_result__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interfaces::msg::YoloResult>()
{
  return "test_interfaces::msg::YoloResult";
}

template<>
struct has_fixed_size<test_interfaces::msg::YoloResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_interfaces::msg::YoloResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_interfaces::msg::YoloResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__TRAITS_HPP_
