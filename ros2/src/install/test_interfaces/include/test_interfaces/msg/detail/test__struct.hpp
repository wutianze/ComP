// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interfaces:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST__STRUCT_HPP_
#define TEST_INTERFACES__MSG__DETAIL__TEST__STRUCT_HPP_

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
# define DEPRECATED__test_interfaces__msg__Test __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces__msg__Test __declspec(deprecated)
#endif

namespace test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Test_
{
  using Type = Test_<ContainerAllocator>;

  explicit Test_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
      this->count = 0ull;
    }
  }

  explicit Test_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
      this->count = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _content_type content;
  using _count_type =
    uint64_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->content = _arg;
    return *this;
  }
  Type & set__count(
    const uint64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces::msg::Test_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces::msg::Test_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces::msg::Test_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces::msg::Test_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::Test_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::Test_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::Test_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::Test_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces::msg::Test_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces::msg::Test_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces__msg__Test
    std::shared_ptr<test_interfaces::msg::Test_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces__msg__Test
    std::shared_ptr<test_interfaces::msg::Test_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Test_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Test_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Test_

// alias to use template instance with default allocator
using Test =
  test_interfaces::msg::Test_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST__STRUCT_HPP_
