// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SET_PEN__STRUCT_HPP_
#define TURTLESIM__SRV__DETAIL__SET_PEN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__SetPen_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__SetPen_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPen_Request_
{
  using Type = SetPen_Request_<ContainerAllocator>;

  explicit SetPen_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0;
      this->g = 0;
      this->b = 0;
      this->width = 0;
      this->off = 0;
    }
  }

  explicit SetPen_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0;
      this->g = 0;
      this->b = 0;
      this->width = 0;
      this->off = 0;
    }
  }

  // field types and members
  using _r_type =
    uint8_t;
  _r_type r;
  using _g_type =
    uint8_t;
  _g_type g;
  using _b_type =
    uint8_t;
  _b_type b;
  using _width_type =
    uint8_t;
  _width_type width;
  using _off_type =
    uint8_t;
  _off_type off;

  // setters for named parameter idiom
  Type & set__r(
    const uint8_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const uint8_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const uint8_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__width(
    const uint8_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__off(
    const uint8_t & _arg)
  {
    this->off = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::srv::SetPen_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::SetPen_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::SetPen_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::SetPen_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__SetPen_Request
    std::shared_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__SetPen_Request
    std::shared_ptr<turtlesim::srv::SetPen_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPen_Request_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->off != other.off) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPen_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPen_Request_

// alias to use template instance with default allocator
using SetPen_Request =
  turtlesim::srv::SetPen_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__SetPen_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__SetPen_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPen_Response_
{
  using Type = SetPen_Response_<ContainerAllocator>;

  explicit SetPen_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetPen_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtlesim::srv::SetPen_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::SetPen_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::SetPen_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::SetPen_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__SetPen_Response
    std::shared_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__SetPen_Response
    std::shared_ptr<turtlesim::srv::SetPen_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPen_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPen_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPen_Response_

// alias to use template instance with default allocator
using SetPen_Response =
  turtlesim::srv::SetPen_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim

namespace turtlesim
{

namespace srv
{

struct SetPen
{
  using Request = turtlesim::srv::SetPen_Request;
  using Response = turtlesim::srv::SetPen_Response;
};

}  // namespace srv

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__SET_PEN__STRUCT_HPP_
