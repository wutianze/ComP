// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SET_PEN__TRAITS_HPP_
#define TURTLESIM__SRV__DETAIL__SET_PEN__TRAITS_HPP_

#include "turtlesim/srv/detail/set_pen__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::SetPen_Request>()
{
  return "turtlesim::srv::SetPen_Request";
}

template<>
struct has_fixed_size<turtlesim::srv::SetPen_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::SetPen_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::SetPen_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::SetPen_Response>()
{
  return "turtlesim::srv::SetPen_Response";
}

template<>
struct has_fixed_size<turtlesim::srv::SetPen_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::SetPen_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::SetPen_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::SetPen>()
{
  return "turtlesim::srv::SetPen";
}

template<>
struct has_fixed_size<turtlesim::srv::SetPen>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::srv::SetPen_Request>::value &&
    has_fixed_size<turtlesim::srv::SetPen_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::srv::SetPen>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::srv::SetPen_Request>::value &&
    has_bounded_size<turtlesim::srv::SetPen_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::srv::SetPen>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::srv::SetPen_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::srv::SetPen_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__SRV__DETAIL__SET_PEN__TRAITS_HPP_
