// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__COLOR__TRAITS_HPP_
#define TURTLESIM__MSG__DETAIL__COLOR__TRAITS_HPP_

#include "turtlesim/msg/detail/color__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::msg::Color>()
{
  return "turtlesim::msg::Color";
}

template<>
struct has_fixed_size<turtlesim::msg::Color>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::msg::Color>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::msg::Color>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__MSG__DETAIL__COLOR__TRAITS_HPP_
