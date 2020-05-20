// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__POSE__TRAITS_HPP_
#define TURTLESIM__MSG__DETAIL__POSE__TRAITS_HPP_

#include "turtlesim/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::msg::Pose>()
{
  return "turtlesim::msg::Pose";
}

template<>
struct has_fixed_size<turtlesim::msg::Pose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::msg::Pose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__MSG__DETAIL__POSE__TRAITS_HPP_
