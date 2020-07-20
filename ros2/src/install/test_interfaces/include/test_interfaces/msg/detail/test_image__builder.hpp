// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__BUILDER_HPP_

#include "test_interfaces/msg/detail/test_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_TestImage_mat_data
{
public:
  explicit Init_TestImage_mat_data(::test_interfaces::msg::TestImage & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::TestImage mat_data(::test_interfaces::msg::TestImage::_mat_data_type arg)
  {
    msg_.mat_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::TestImage msg_;
};

class Init_TestImage_test_a
{
public:
  explicit Init_TestImage_test_a(::test_interfaces::msg::TestImage & msg)
  : msg_(msg)
  {}
  Init_TestImage_mat_data test_a(::test_interfaces::msg::TestImage::_test_a_type arg)
  {
    msg_.test_a = std::move(arg);
    return Init_TestImage_mat_data(msg_);
  }

private:
  ::test_interfaces::msg::TestImage msg_;
};

class Init_TestImage_elt_size
{
public:
  explicit Init_TestImage_elt_size(::test_interfaces::msg::TestImage & msg)
  : msg_(msg)
  {}
  Init_TestImage_test_a elt_size(::test_interfaces::msg::TestImage::_elt_size_type arg)
  {
    msg_.elt_size = std::move(arg);
    return Init_TestImage_test_a(msg_);
  }

private:
  ::test_interfaces::msg::TestImage msg_;
};

class Init_TestImage_elt_type
{
public:
  explicit Init_TestImage_elt_type(::test_interfaces::msg::TestImage & msg)
  : msg_(msg)
  {}
  Init_TestImage_elt_size elt_type(::test_interfaces::msg::TestImage::_elt_type_type arg)
  {
    msg_.elt_type = std::move(arg);
    return Init_TestImage_elt_size(msg_);
  }

private:
  ::test_interfaces::msg::TestImage msg_;
};

class Init_TestImage_cols
{
public:
  explicit Init_TestImage_cols(::test_interfaces::msg::TestImage & msg)
  : msg_(msg)
  {}
  Init_TestImage_elt_type cols(::test_interfaces::msg::TestImage::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_TestImage_elt_type(msg_);
  }

private:
  ::test_interfaces::msg::TestImage msg_;
};

class Init_TestImage_rows
{
public:
  Init_TestImage_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestImage_cols rows(::test_interfaces::msg::TestImage::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_TestImage_cols(msg_);
  }

private:
  ::test_interfaces::msg::TestImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::TestImage>()
{
  return test_interfaces::msg::builder::Init_TestImage_rows();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__BUILDER_HPP_
