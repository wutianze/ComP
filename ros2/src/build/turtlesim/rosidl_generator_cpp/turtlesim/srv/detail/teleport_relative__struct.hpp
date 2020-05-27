// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__STRUCT_HPP_
#define TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__TeleportRelative_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__TeleportRelative_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TeleportRelative_Request_
{
  using Type = TeleportRelative_Request_<ContainerAllocator>;

  explicit TeleportRelative_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = 0.0f;
      this->angular = 0.0f;
    }
  }

  explicit TeleportRelative_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = 0.0f;
      this->angular = 0.0f;
    }
  }

  // field types and members
  using _linear_type =
    float;
  _linear_type linear;
  using _angular_type =
    float;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const float & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const float & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::TeleportRelative_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::TeleportRelative_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportRelative_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportRelative_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__TeleportRelative_Request
    std::shared_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__TeleportRelative_Request
    std::shared_ptr<turtlesim::srv::TeleportRelative_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleportRelative_Request_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleportRelative_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleportRelative_Request_

// alias to use template instance with default allocator
using TeleportRelative_Request =
  turtlesim::srv::TeleportRelative_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__TeleportRelative_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__TeleportRelative_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TeleportRelative_Response_
{
  using Type = TeleportRelative_Response_<ContainerAllocator>;

  explicit TeleportRelative_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TeleportRelative_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::TeleportRelative_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::TeleportRelative_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportRelative_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::TeleportRelative_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__TeleportRelative_Response
    std::shared_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__TeleportRelative_Response
    std::shared_ptr<turtlesim::srv::TeleportRelative_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeleportRelative_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeleportRelative_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeleportRelative_Response_

// alias to use template instance with default allocator
using TeleportRelative_Response =
  turtlesim::srv::TeleportRelative_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim

namespace turtlesim
{

namespace srv
{

struct TeleportRelative
{
  using Request = turtlesim::srv::TeleportRelative_Request;
  using Response = turtlesim::srv::TeleportRelative_Response;
};

}  // namespace srv

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__STRUCT_HPP_
