// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_s:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_S__MSG__DETAIL__TEST__STRUCT_HPP_
#define SIMPLE_S__MSG__DETAIL__TEST__STRUCT_HPP_

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
# define DEPRECATED__simple_s__msg__Test __attribute__((deprecated))
#else
# define DEPRECATED__simple_s__msg__Test __declspec(deprecated)
#endif

namespace simple_s
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
      this->id = 0ll;
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
      this->id = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _content_type content;
  using _id_type =
    int64_t;
  _id_type id;

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
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_s::msg::Test_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_s::msg::Test_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_s::msg::Test_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_s::msg::Test_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_s::msg::Test_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_s::msg::Test_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_s::msg::Test_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_s::msg::Test_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_s::msg::Test_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_s::msg::Test_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_s__msg__Test
    std::shared_ptr<simple_s::msg::Test_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_s__msg__Test
    std::shared_ptr<simple_s::msg::Test_<ContainerAllocator> const>
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
    if (this->id != other.id) {
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
  simple_s::msg::Test_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_s

#endif  // SIMPLE_S__MSG__DETAIL__TEST__STRUCT_HPP_
