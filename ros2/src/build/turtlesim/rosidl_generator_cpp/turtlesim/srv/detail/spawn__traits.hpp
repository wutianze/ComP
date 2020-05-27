// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SPAWN__TRAITS_HPP_
#define TURTLESIM__SRV__DETAIL__SPAWN__TRAITS_HPP_

#include "turtlesim/srv/detail/spawn__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::Spawn_Request>()
{
  return "turtlesim::srv::Spawn_Request";
}

template<>
struct has_fixed_size<turtlesim::srv::Spawn_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim::srv::Spawn_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim::srv::Spawn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::Spawn_Response>()
{
  return "turtlesim::srv::Spawn_Response";
}

template<>
struct has_fixed_size<turtlesim::srv::Spawn_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim::srv::Spawn_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim::srv::Spawn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::Spawn>()
{
  return "turtlesim::srv::Spawn";
}

template<>
struct has_fixed_size<turtlesim::srv::Spawn>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::srv::Spawn_Request>::value &&
    has_fixed_size<turtlesim::srv::Spawn_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::srv::Spawn>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::srv::Spawn_Request>::value &&
    has_bounded_size<turtlesim::srv::Spawn_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::srv::Spawn>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::srv::Spawn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::srv::Spawn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__SRV__DETAIL__SPAWN__TRAITS_HPP_
