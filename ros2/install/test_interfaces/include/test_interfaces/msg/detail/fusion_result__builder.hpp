// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/FusionResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__BUILDER_HPP_

#include "test_interfaces/msg/detail/fusion_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_FusionResult_fusion_result
{
public:
  explicit Init_FusionResult_fusion_result(::test_interfaces::msg::FusionResult & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::FusionResult fusion_result(::test_interfaces::msg::FusionResult::_fusion_result_type arg)
  {
    msg_.fusion_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::FusionResult msg_;
};

class Init_FusionResult_header
{
public:
  Init_FusionResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionResult_fusion_result header(::test_interfaces::msg::FusionResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FusionResult_fusion_result(msg_);
  }

private:
  ::test_interfaces::msg::FusionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::FusionResult>()
{
  return test_interfaces::msg::builder::Init_FusionResult_header();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__BUILDER_HPP_
