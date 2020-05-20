// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__TRAITS_HPP_
#define TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__TRAITS_HPP_

#include "turtlesim/srv/detail/teleport_relative__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::TeleportRelative_Request>()
{
  return "turtlesim::srv::TeleportRelative_Request";
}

template<>
struct has_fixed_size<turtlesim::srv::TeleportRelative_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::TeleportRelative_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::TeleportRelative_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::TeleportRelative_Response>()
{
  return "turtlesim::srv::TeleportRelative_Response";
}

template<>
struct has_fixed_size<turtlesim::srv::TeleportRelative_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::TeleportRelative_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::TeleportRelative_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::TeleportRelative>()
{
  return "turtlesim::srv::TeleportRelative";
}

template<>
struct has_fixed_size<turtlesim::srv::TeleportRelative>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::srv::TeleportRelative_Request>::value &&
    has_fixed_size<turtlesim::srv::TeleportRelative_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::srv::TeleportRelative>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::srv::TeleportRelative_Request>::value &&
    has_bounded_size<turtlesim::srv::TeleportRelative_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::srv::TeleportRelative>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::srv::TeleportRelative_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::srv::TeleportRelative_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__TRAITS_HPP_
