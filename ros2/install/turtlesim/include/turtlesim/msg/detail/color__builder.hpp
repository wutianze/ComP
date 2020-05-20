// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__COLOR__BUILDER_HPP_
#define TURTLESIM__MSG__DETAIL__COLOR__BUILDER_HPP_

#include "turtlesim/msg/detail/color__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace msg
{

namespace builder
{

class Init_Color_b
{
public:
  explicit Init_Color_b(::turtlesim::msg::Color & msg)
  : msg_(msg)
  {}
  ::turtlesim::msg::Color b(::turtlesim::msg::Color::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::msg::Color msg_;
};

class Init_Color_g
{
public:
  explicit Init_Color_g(::turtlesim::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_b g(::turtlesim::msg::Color::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Color_b(msg_);
  }

private:
  ::turtlesim::msg::Color msg_;
};

class Init_Color_r
{
public:
  Init_Color_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_g r(::turtlesim::msg::Color::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Color_g(msg_);
  }

private:
  ::turtlesim::msg::Color msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::msg::Color>()
{
  return turtlesim::msg::builder::Init_Color_r();
}

}  // namespace turtlesim

#endif  // TURTLESIM__MSG__DETAIL__COLOR__BUILDER_HPP_
