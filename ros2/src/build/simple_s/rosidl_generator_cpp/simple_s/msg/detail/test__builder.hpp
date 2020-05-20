// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_s:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_S__MSG__DETAIL__TEST__BUILDER_HPP_
#define SIMPLE_S__MSG__DETAIL__TEST__BUILDER_HPP_

#include "simple_s/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace simple_s
{

namespace msg
{

namespace builder
{

class Init_Test_id
{
public:
  explicit Init_Test_id(::simple_s::msg::Test & msg)
  : msg_(msg)
  {}
  ::simple_s::msg::Test id(::simple_s::msg::Test::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_s::msg::Test msg_;
};

class Init_Test_content
{
public:
  explicit Init_Test_content(::simple_s::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_id content(::simple_s::msg::Test::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Test_id(msg_);
  }

private:
  ::simple_s::msg::Test msg_;
};

class Init_Test_header
{
public:
  Init_Test_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_content header(::simple_s::msg::Test::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Test_content(msg_);
  }

private:
  ::simple_s::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_s::msg::Test>()
{
  return simple_s::msg::builder::Init_Test_header();
}

}  // namespace simple_s

#endif  // SIMPLE_S__MSG__DETAIL__TEST__BUILDER_HPP_
