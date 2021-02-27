// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interfaces:msg/PointDetect.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__STRUCT_HPP_
#define TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__test_interfaces__msg__PointDetect __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces__msg__PointDetect __declspec(deprecated)
#endif

namespace test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointDetect_
{
  using Type = PointDetect_<ContainerAllocator>;

  explicit PointDetect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
    }
  }

  explicit PointDetect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces::msg::PointDetect_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces::msg::PointDetect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::PointDetect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::PointDetect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces__msg__PointDetect
    std::shared_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces__msg__PointDetect
    std::shared_ptr<test_interfaces::msg::PointDetect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointDetect_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointDetect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointDetect_

// alias to use template instance with default allocator
using PointDetect =
  test_interfaces::msg::PointDetect_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__STRUCT_HPP_
