// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__KILL__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__KILL__BUILDER_HPP_

#include "turtlesim/srv/detail/kill__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_Kill_Request_name
{
public:
  Init_Kill_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::srv::Kill_Request name(::turtlesim::srv::Kill_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::Kill_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::Kill_Request>()
{
  return turtlesim::srv::builder::Init_Kill_Request_name();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::Kill_Response>()
{
  return ::turtlesim::srv::Kill_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__KILL__BUILDER_HPP_
