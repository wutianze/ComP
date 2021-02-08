// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/YoloResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__BUILDER_HPP_

#include "test_interfaces/msg/detail/yolo_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_YoloResult_result_array
{
public:
  explicit Init_YoloResult_result_array(::test_interfaces::msg::YoloResult & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::YoloResult result_array(::test_interfaces::msg::YoloResult::_result_array_type arg)
  {
    msg_.result_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::YoloResult msg_;
};

class Init_YoloResult_result_num
{
public:
  explicit Init_YoloResult_result_num(::test_interfaces::msg::YoloResult & msg)
  : msg_(msg)
  {}
  Init_YoloResult_result_array result_num(::test_interfaces::msg::YoloResult::_result_num_type arg)
  {
    msg_.result_num = std::move(arg);
    return Init_YoloResult_result_array(msg_);
  }

private:
  ::test_interfaces::msg::YoloResult msg_;
};

class Init_YoloResult_header
{
public:
  Init_YoloResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloResult_result_num header(::test_interfaces::msg::YoloResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YoloResult_result_num(msg_);
  }

private:
  ::test_interfaces::msg::YoloResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::YoloResult>()
{
  return test_interfaces::msg::builder::Init_YoloResult_header();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__BUILDER_HPP_
