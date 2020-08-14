// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_

#include "test_interfaces/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_Test_count
{
public:
  explicit Init_Test_count(::test_interfaces::msg::Test & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::Test count(::test_interfaces::msg::Test::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::Test msg_;
};

class Init_Test_content
{
public:
  explicit Init_Test_content(::test_interfaces::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_count content(::test_interfaces::msg::Test::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Test_count(msg_);
  }

private:
  ::test_interfaces::msg::Test msg_;
};

class Init_Test_header
{
public:
  Init_Test_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_content header(::test_interfaces::msg::Test::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Test_content(msg_);
  }

private:
  ::test_interfaces::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::Test>()
{
  return test_interfaces::msg::builder::Init_Test_header();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_
