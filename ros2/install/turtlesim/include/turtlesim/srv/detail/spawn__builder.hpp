// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SPAWN__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__SPAWN__BUILDER_HPP_

#include "turtlesim/srv/detail/spawn__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_Spawn_Request_name
{
public:
  explicit Init_Spawn_Request_name(::turtlesim::srv::Spawn_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::Spawn_Request name(::turtlesim::srv::Spawn_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::Spawn_Request msg_;
};

class Init_Spawn_Request_theta
{
public:
  explicit Init_Spawn_Request_theta(::turtlesim::srv::Spawn_Request & msg)
  : msg_(msg)
  {}
  Init_Spawn_Request_name theta(::turtlesim::srv::Spawn_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Spawn_Request_name(msg_);
  }

private:
  ::turtlesim::srv::Spawn_Request msg_;
};

class Init_Spawn_Request_y
{
public:
  explicit Init_Spawn_Request_y(::turtlesim::srv::Spawn_Request & msg)
  : msg_(msg)
  {}
  Init_Spawn_Request_theta y(::turtlesim::srv::Spawn_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Spawn_Request_theta(msg_);
  }

private:
  ::turtlesim::srv::Spawn_Request msg_;
};

class Init_Spawn_Request_x
{
public:
  Init_Spawn_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Spawn_Request_y x(::turtlesim::srv::Spawn_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Spawn_Request_y(msg_);
  }

private:
  ::turtlesim::srv::Spawn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::Spawn_Request>()
{
  return turtlesim::srv::builder::Init_Spawn_Request_x();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_Spawn_Response_name
{
public:
  Init_Spawn_Response_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::srv::Spawn_Response name(::turtlesim::srv::Spawn_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::Spawn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::Spawn_Response>()
{
  return turtlesim::srv::builder::Init_Spawn_Response_name();
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__SPAWN__BUILDER_HPP_
