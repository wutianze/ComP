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

class Init_Test_timestamp
{
public:
  explicit Init_Test_timestamp(::test_interfaces::msg::Test & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::Test timestamp(::test_interfaces::msg::Test::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::Test msg_;
};

class Init_Test_id
{
public:
  explicit Init_Test_id(::test_interfaces::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_timestamp id(::test_interfaces::msg::Test::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Test_timestamp(msg_);
  }

private:
  ::test_interfaces::msg::Test msg_;
};

class Init_Test_content
{
public:
  Init_Test_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_id content(::test_interfaces::msg::Test::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Test_id(msg_);
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
  return test_interfaces::msg::builder::Init_Test_content();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_
