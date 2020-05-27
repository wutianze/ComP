// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_

#include "turtlesim/srv/detail/teleport_absolute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_TeleportAbsolute_Request_theta
{
public:
  explicit Init_TeleportAbsolute_Request_theta(::turtlesim::srv::TeleportAbsolute_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::TeleportAbsolute_Request theta(::turtlesim::srv::TeleportAbsolute_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Request msg_;
};

class Init_TeleportAbsolute_Request_y
{
public:
  explicit Init_TeleportAbsolute_Request_y(::turtlesim::srv::TeleportAbsolute_Request & msg)
  : msg_(msg)
  {}
  Init_TeleportAbsolute_Request_theta y(::turtlesim::srv::TeleportAbsolute_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TeleportAbsolute_Request_theta(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Request msg_;
};

class Init_TeleportAbsolute_Request_x
{
public:
  Init_TeleportAbsolute_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportAbsolute_Request_y x(::turtlesim::srv::TeleportAbsolute_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TeleportAbsolute_Request_y(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportAbsolute_Request>()
{
  return turtlesim::srv::builder::Init_TeleportAbsolute_Request_x();
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
auto build<::turtlesim::srv::TeleportAbsolute_Response>()
{
  return ::turtlesim::srv::TeleportAbsolute_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_
