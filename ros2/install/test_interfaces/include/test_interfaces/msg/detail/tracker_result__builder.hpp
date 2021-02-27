// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/TrackerResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__BUILDER_HPP_

#include "test_interfaces/msg/detail/tracker_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrackerResult_height
{
public:
  explicit Init_TrackerResult_height(::test_interfaces::msg::TrackerResult & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::TrackerResult height(::test_interfaces::msg::TrackerResult::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::TrackerResult msg_;
};

class Init_TrackerResult_width
{
public:
  explicit Init_TrackerResult_width(::test_interfaces::msg::TrackerResult & msg)
  : msg_(msg)
  {}
  Init_TrackerResult_height width(::test_interfaces::msg::TrackerResult::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TrackerResult_height(msg_);
  }

private:
  ::test_interfaces::msg::TrackerResult msg_;
};

class Init_TrackerResult_y
{
public:
  explicit Init_TrackerResult_y(::test_interfaces::msg::TrackerResult & msg)
  : msg_(msg)
  {}
  Init_TrackerResult_width y(::test_interfaces::msg::TrackerResult::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrackerResult_width(msg_);
  }

private:
  ::test_interfaces::msg::TrackerResult msg_;
};

class Init_TrackerResult_x
{
public:
  explicit Init_TrackerResult_x(::test_interfaces::msg::TrackerResult & msg)
  : msg_(msg)
  {}
  Init_TrackerResult_y x(::test_interfaces::msg::TrackerResult::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrackerResult_y(msg_);
  }

private:
  ::test_interfaces::msg::TrackerResult msg_;
};

class Init_TrackerResult_header
{
public:
  Init_TrackerResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackerResult_x header(::test_interfaces::msg::TrackerResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackerResult_x(msg_);
  }

private:
  ::test_interfaces::msg::TrackerResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::TrackerResult>()
{
  return test_interfaces::msg::builder::Init_TrackerResult_header();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__BUILDER_HPP_
