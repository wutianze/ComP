// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/LinesResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__BUILDER_HPP_

#include "test_interfaces/msg/detail/lines_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_LinesResult_right2
{
public:
  explicit Init_LinesResult_right2(::test_interfaces::msg::LinesResult & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::LinesResult right2(::test_interfaces::msg::LinesResult::_right2_type arg)
  {
    msg_.right2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::LinesResult msg_;
};

class Init_LinesResult_left2
{
public:
  explicit Init_LinesResult_left2(::test_interfaces::msg::LinesResult & msg)
  : msg_(msg)
  {}
  Init_LinesResult_right2 left2(::test_interfaces::msg::LinesResult::_left2_type arg)
  {
    msg_.left2 = std::move(arg);
    return Init_LinesResult_right2(msg_);
  }

private:
  ::test_interfaces::msg::LinesResult msg_;
};

class Init_LinesResult_right1
{
public:
  explicit Init_LinesResult_right1(::test_interfaces::msg::LinesResult & msg)
  : msg_(msg)
  {}
  Init_LinesResult_left2 right1(::test_interfaces::msg::LinesResult::_right1_type arg)
  {
    msg_.right1 = std::move(arg);
    return Init_LinesResult_left2(msg_);
  }

private:
  ::test_interfaces::msg::LinesResult msg_;
};

class Init_LinesResult_left1
{
public:
  explicit Init_LinesResult_left1(::test_interfaces::msg::LinesResult & msg)
  : msg_(msg)
  {}
  Init_LinesResult_right1 left1(::test_interfaces::msg::LinesResult::_left1_type arg)
  {
    msg_.left1 = std::move(arg);
    return Init_LinesResult_right1(msg_);
  }

private:
  ::test_interfaces::msg::LinesResult msg_;
};

class Init_LinesResult_header
{
public:
  Init_LinesResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinesResult_left1 header(::test_interfaces::msg::LinesResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LinesResult_left1(msg_);
  }

private:
  ::test_interfaces::msg::LinesResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::LinesResult>()
{
  return test_interfaces::msg::builder::Init_LinesResult_header();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__BUILDER_HPP_
