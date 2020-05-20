// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SET_PEN__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__SET_PEN__BUILDER_HPP_

#include "turtlesim/srv/detail/set_pen__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_SetPen_Request_off
{
public:
  explicit Init_SetPen_Request_off(::turtlesim::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::SetPen_Request off(::turtlesim::srv::SetPen_Request::_off_type arg)
  {
    msg_.off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_width
{
public:
  explicit Init_SetPen_Request_width(::turtlesim::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  Init_SetPen_Request_off width(::turtlesim::srv::SetPen_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SetPen_Request_off(msg_);
  }

private:
  ::turtlesim::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_b
{
public:
  explicit Init_SetPen_Request_b(::turtlesim::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  Init_SetPen_Request_width b(::turtlesim::srv::SetPen_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_SetPen_Request_width(msg_);
  }

private:
  ::turtlesim::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_g
{
public:
  explicit Init_SetPen_Request_g(::turtlesim::srv::SetPen_Request & msg)
  : msg_(msg)
  {}
  Init_SetPen_Request_b g(::turtlesim::srv::SetPen_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_SetPen_Request_b(msg_);
  }

private:
  ::turtlesim::srv::SetPen_Request msg_;
};

class Init_SetPen_Request_r
{
public:
  Init_SetPen_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPen_Request_g r(::turtlesim::srv::SetPen_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_SetPen_Request_g(msg_);
  }

private:
  ::turtlesim::srv::SetPen_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::SetPen_Request>()
{
  return turtlesim::srv::builder::Init_SetPen_Request_r();
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
auto build<::turtlesim::srv::SetPen_Response>()
{
  return ::turtlesim::srv::SetPen_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__SET_PEN__BUILDER_HPP_
