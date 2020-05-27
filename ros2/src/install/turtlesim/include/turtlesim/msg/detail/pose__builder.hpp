// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__POSE__BUILDER_HPP_
#define TURTLESIM__MSG__DETAIL__POSE__BUILDER_HPP_

#include "turtlesim/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace msg
{

namespace builder
{

class Init_Pose_angular_velocity
{
public:
  explicit Init_Pose_angular_velocity(::turtlesim::msg::Pose & msg)
  : msg_(msg)
  {}
  ::turtlesim::msg::Pose angular_velocity(::turtlesim::msg::Pose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::msg::Pose msg_;
};

class Init_Pose_linear_velocity
{
public:
  explicit Init_Pose_linear_velocity(::turtlesim::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity linear_velocity(::turtlesim::msg::Pose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Pose_angular_velocity(msg_);
  }

private:
  ::turtlesim::msg::Pose msg_;
};

class Init_Pose_theta
{
public:
  explicit Init_Pose_theta(::turtlesim::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_velocity theta(::turtlesim::msg::Pose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Pose_linear_velocity(msg_);
  }

private:
  ::turtlesim::msg::Pose msg_;
};

class Init_Pose_y
{
public:
  explicit Init_Pose_y(::turtlesim::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_theta y(::turtlesim::msg::Pose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose_theta(msg_);
  }

private:
  ::turtlesim::msg::Pose msg_;
};

class Init_Pose_x
{
public:
  Init_Pose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_y x(::turtlesim::msg::Pose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose_y(msg_);
  }

private:
  ::turtlesim::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::msg::Pose>()
{
  return turtlesim::msg::builder::Init_Pose_x();
}

}  // namespace turtlesim

#endif  // TURTLESIM__MSG__DETAIL__POSE__BUILDER_HPP_
