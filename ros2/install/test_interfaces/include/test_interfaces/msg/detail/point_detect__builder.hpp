// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/PointDetect.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__BUILDER_HPP_

#include "test_interfaces/msg/detail/point_detect__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_PointDetect_y
{
public:
  explicit Init_PointDetect_y(::test_interfaces::msg::PointDetect & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::PointDetect y(::test_interfaces::msg::PointDetect::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::PointDetect msg_;
};

class Init_PointDetect_x
{
public:
  Init_PointDetect_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointDetect_y x(::test_interfaces::msg::PointDetect::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointDetect_y(msg_);
  }

private:
  ::test_interfaces::msg::PointDetect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::PointDetect>()
{
  return test_interfaces::msg::builder::Init_PointDetect_x();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__BUILDER_HPP_
