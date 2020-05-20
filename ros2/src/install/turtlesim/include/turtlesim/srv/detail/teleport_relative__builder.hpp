// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_

#include "turtlesim/srv/detail/teleport_relative__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_TeleportRelative_Request_angular
{
public:
  explicit Init_TeleportRelative_Request_angular(::turtlesim::srv::TeleportRelative_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::TeleportRelative_Request angular(::turtlesim::srv::TeleportRelative_Request::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Request msg_;
};

class Init_TeleportRelative_Request_linear
{
public:
  Init_TeleportRelative_Request_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportRelative_Request_angular linear(::turtlesim::srv::TeleportRelative_Request::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_TeleportRelative_Request_angular(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportRelative_Request>()
{
  return turtlesim::srv::builder::Init_TeleportRelative_Request_linear();
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
auto build<::turtlesim::srv::TeleportRelative_Response>()
{
  return ::turtlesim::srv::TeleportRelative_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
