// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interfaces:msg/FusionResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__STRUCT_HPP_
#define TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__STRUCT_HPP_

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
# define DEPRECATED__test_interfaces__msg__FusionResult __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces__msg__FusionResult __declspec(deprecated)
#endif

namespace test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FusionResult_
{
  using Type = FusionResult_<ContainerAllocator>;

  explicit FusionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fusion_result = "";
    }
  }

  explicit FusionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fusion_result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fusion_result = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fusion_result_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _fusion_result_type fusion_result;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fusion_result(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->fusion_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces::msg::FusionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces::msg::FusionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::FusionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::FusionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces__msg__FusionResult
    std::shared_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces__msg__FusionResult
    std::shared_ptr<test_interfaces::msg::FusionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FusionResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fusion_result != other.fusion_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FusionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FusionResult_

// alias to use template instance with default allocator
using FusionResult =
  test_interfaces::msg::FusionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__STRUCT_HPP_
