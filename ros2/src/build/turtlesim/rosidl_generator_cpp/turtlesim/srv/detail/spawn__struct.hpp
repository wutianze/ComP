// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SPAWN__STRUCT_HPP_
#define TURTLESIM__SRV__DETAIL__SPAWN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__Spawn_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__Spawn_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Spawn_Request_
{
  using Type = Spawn_Request_<ContainerAllocator>;

  explicit Spawn_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->name = "";
    }
  }

  explicit Spawn_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->name = "";
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::Spawn_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::Spawn_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Spawn_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Spawn_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__Spawn_Request
    std::shared_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__Spawn_Request
    std::shared_ptr<turtlesim::srv::Spawn_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Spawn_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Spawn_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Spawn_Request_

// alias to use template instance with default allocator
using Spawn_Request =
  turtlesim::srv::Spawn_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__Spawn_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__Spawn_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Spawn_Response_
{
  using Type = Spawn_Response_<ContainerAllocator>;

  explicit Spawn_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Spawn_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::Spawn_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::Spawn_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Spawn_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Spawn_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__Spawn_Response
    std::shared_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__Spawn_Response
    std::shared_ptr<turtlesim::srv::Spawn_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Spawn_Response_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Spawn_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Spawn_Response_

// alias to use template instance with default allocator
using Spawn_Response =
  turtlesim::srv::Spawn_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim

namespace turtlesim
{

namespace srv
{

struct Spawn
{
  using Request = turtlesim::srv::Spawn_Request;
  using Response = turtlesim::srv::Spawn_Response;
};

}  // namespace srv

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__SPAWN__STRUCT_HPP_
