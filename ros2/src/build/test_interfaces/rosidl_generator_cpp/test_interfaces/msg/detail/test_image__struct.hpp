// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__STRUCT_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__test_interfaces__msg__TestImage __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces__msg__TestImage __declspec(deprecated)
#endif

namespace test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestImage_
{
  using Type = TestImage_<ContainerAllocator>;

  explicit TestImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0l;
      this->cols = 0l;
      this->elt_type = 0l;
      this->elt_size = 0l;
    }
  }

  explicit TestImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0l;
      this->cols = 0l;
      this->elt_type = 0l;
      this->elt_size = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rows_type =
    int32_t;
  _rows_type rows;
  using _cols_type =
    int32_t;
  _cols_type cols;
  using _elt_type_type =
    int32_t;
  _elt_type_type elt_type;
  using _elt_size_type =
    int32_t;
  _elt_size_type elt_size;
  using _mat_data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _mat_data_type mat_data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rows(
    const int32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__cols(
    const int32_t & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__elt_type(
    const int32_t & _arg)
  {
    this->elt_type = _arg;
    return *this;
  }
  Type & set__elt_size(
    const int32_t & _arg)
  {
    this->elt_size = _arg;
    return *this;
  }
  Type & set__mat_data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->mat_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces::msg::TestImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces::msg::TestImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces::msg::TestImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces::msg::TestImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::TestImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::TestImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::TestImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::TestImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces::msg::TestImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces::msg::TestImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces__msg__TestImage
    std::shared_ptr<test_interfaces::msg::TestImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces__msg__TestImage
    std::shared_ptr<test_interfaces::msg::TestImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rows != other.rows) {
      return false;
    }
    if (this->cols != other.cols) {
      return false;
    }
    if (this->elt_type != other.elt_type) {
      return false;
    }
    if (this->elt_size != other.elt_size) {
      return false;
    }
    if (this->mat_data != other.mat_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestImage_

// alias to use template instance with default allocator
using TestImage =
  test_interfaces::msg::TestImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__STRUCT_HPP_
