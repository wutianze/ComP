// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__KILL__STRUCT_HPP_
#define TURTLESIM__SRV__DETAIL__KILL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__Kill_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__Kill_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kill_Request_
{
  using Type = Kill_Request_<ContainerAllocator>;

  explicit Kill_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Kill_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtlesim::srv::Kill_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::Kill_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Kill_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Kill_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__Kill_Request
    std::shared_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__Kill_Request
    std::shared_ptr<turtlesim::srv::Kill_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kill_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kill_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kill_Request_

// alias to use template instance with default allocator
using Kill_Request =
  turtlesim::srv::Kill_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__srv__Kill_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__srv__Kill_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kill_Response_
{
  using Type = Kill_Response_<ContainerAllocator>;

  explicit Kill_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Kill_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    turtlesim::srv::Kill_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::srv::Kill_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Kill_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::srv::Kill_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__srv__Kill_Response
    std::shared_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__srv__Kill_Response
    std::shared_ptr<turtlesim::srv::Kill_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kill_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kill_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kill_Response_

// alias to use template instance with default allocator
using Kill_Response =
  turtlesim::srv::Kill_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim

namespace turtlesim
{

namespace srv
{

struct Kill
{
  using Request = turtlesim::srv::Kill_Request;
  using Response = turtlesim::srv::Kill_Response;
};

}  // namespace srv

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__KILL__STRUCT_HPP_
