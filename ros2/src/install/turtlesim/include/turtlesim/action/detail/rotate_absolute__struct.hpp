// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_HPP_
#define TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_Goal __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_Goal __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_Goal_
{
  using Type = RotateAbsolute_Goal_<ContainerAllocator>;

  explicit RotateAbsolute_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0f;
    }
  }

  explicit RotateAbsolute_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_Goal
    std::shared_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_Goal
    std::shared_ptr<turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_Goal_ & other) const
  {
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_Goal_

// alias to use template instance with default allocator
using RotateAbsolute_Goal =
  turtlesim::action::RotateAbsolute_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_Result __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_Result __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_Result_
{
  using Type = RotateAbsolute_Result_<ContainerAllocator>;

  explicit RotateAbsolute_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta = 0.0f;
    }
  }

  explicit RotateAbsolute_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta = 0.0f;
    }
  }

  // field types and members
  using _delta_type =
    float;
  _delta_type delta;

  // setters for named parameter idiom
  Type & set__delta(
    const float & _arg)
  {
    this->delta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_Result
    std::shared_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_Result
    std::shared_ptr<turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_Result_ & other) const
  {
    if (this->delta != other.delta) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_Result_

// alias to use template instance with default allocator
using RotateAbsolute_Result =
  turtlesim::action::RotateAbsolute_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim


#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_Feedback __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_Feedback_
{
  using Type = RotateAbsolute_Feedback_<ContainerAllocator>;

  explicit RotateAbsolute_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining = 0.0f;
    }
  }

  explicit RotateAbsolute_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining = 0.0f;
    }
  }

  // field types and members
  using _remaining_type =
    float;
  _remaining_type remaining;

  // setters for named parameter idiom
  Type & set__remaining(
    const float & _arg)
  {
    this->remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_Feedback
    std::shared_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_Feedback
    std::shared_ptr<turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_Feedback_ & other) const
  {
    if (this->remaining != other.remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_Feedback_

// alias to use template instance with default allocator
using RotateAbsolute_Feedback =
  turtlesim::action::RotateAbsolute_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_SendGoal_Request_
{
  using Type = RotateAbsolute_SendGoal_Request_<ContainerAllocator>;

  explicit RotateAbsolute_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RotateAbsolute_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const turtlesim::action::RotateAbsolute_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Request
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Request
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_SendGoal_Request_

// alias to use template instance with default allocator
using RotateAbsolute_SendGoal_Request =
  turtlesim::action::RotateAbsolute_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_SendGoal_Response_
{
  using Type = RotateAbsolute_SendGoal_Response_<ContainerAllocator>;

  explicit RotateAbsolute_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RotateAbsolute_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Response
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_SendGoal_Response
    std::shared_ptr<turtlesim::action::RotateAbsolute_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_SendGoal_Response_

// alias to use template instance with default allocator
using RotateAbsolute_SendGoal_Response =
  turtlesim::action::RotateAbsolute_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim

namespace turtlesim
{

namespace action
{

struct RotateAbsolute_SendGoal
{
  using Request = turtlesim::action::RotateAbsolute_SendGoal_Request;
  using Response = turtlesim::action::RotateAbsolute_SendGoal_Response;
};

}  // namespace action

}  // namespace turtlesim


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Request __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_GetResult_Request_
{
  using Type = RotateAbsolute_GetResult_Request_<ContainerAllocator>;

  explicit RotateAbsolute_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RotateAbsolute_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Request
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Request
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_GetResult_Request_

// alias to use template instance with default allocator
using RotateAbsolute_GetResult_Request =
  turtlesim::action::RotateAbsolute_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim


// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Response __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_GetResult_Response_
{
  using Type = RotateAbsolute_GetResult_Response_<ContainerAllocator>;

  explicit RotateAbsolute_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RotateAbsolute_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    turtlesim::action::RotateAbsolute_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const turtlesim::action::RotateAbsolute_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Response
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_GetResult_Response
    std::shared_ptr<turtlesim::action::RotateAbsolute_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_GetResult_Response_

// alias to use template instance with default allocator
using RotateAbsolute_GetResult_Response =
  turtlesim::action::RotateAbsolute_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim

namespace turtlesim
{

namespace action
{

struct RotateAbsolute_GetResult
{
  using Request = turtlesim::action::RotateAbsolute_GetResult_Request;
  using Response = turtlesim::action::RotateAbsolute_GetResult_Response;
};

}  // namespace action

}  // namespace turtlesim


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim__action__RotateAbsolute_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim__action__RotateAbsolute_FeedbackMessage __declspec(deprecated)
#endif

namespace turtlesim
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RotateAbsolute_FeedbackMessage_
{
  using Type = RotateAbsolute_FeedbackMessage_<ContainerAllocator>;

  explicit RotateAbsolute_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RotateAbsolute_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const turtlesim::action::RotateAbsolute_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_FeedbackMessage
    std::shared_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim__action__RotateAbsolute_FeedbackMessage
    std::shared_ptr<turtlesim::action::RotateAbsolute_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotateAbsolute_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotateAbsolute_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotateAbsolute_FeedbackMessage_

// alias to use template instance with default allocator
using RotateAbsolute_FeedbackMessage =
  turtlesim::action::RotateAbsolute_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtlesim

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace turtlesim
{

namespace action
{

struct RotateAbsolute
{
  /// The goal message defined in the action definition.
  using Goal = turtlesim::action::RotateAbsolute_Goal;
  /// The result message defined in the action definition.
  using Result = turtlesim::action::RotateAbsolute_Result;
  /// The feedback message defined in the action definition.
  using Feedback = turtlesim::action::RotateAbsolute_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = turtlesim::action::RotateAbsolute_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = turtlesim::action::RotateAbsolute_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = turtlesim::action::RotateAbsolute_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RotateAbsolute RotateAbsolute;

}  // namespace action

}  // namespace turtlesim

#endif  // TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_HPP_
