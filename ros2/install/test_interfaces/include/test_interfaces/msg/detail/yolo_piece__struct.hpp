// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interfaces:msg/YoloPiece.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__STRUCT_HPP_
#define TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__test_interfaces__msg__YoloPiece __attribute__((deprecated))
#else
# define DEPRECATED__test_interfaces__msg__YoloPiece __declspec(deprecated)
#endif

namespace test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloPiece_
{
  using Type = YoloPiece_<ContainerAllocator>;

  explicit YoloPiece_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ul;
      this->y = 0ul;
      this->w = 0ul;
      this->h = 0ul;
      this->prob = 0.0f;
      this->obj_id = 0.0f;
      this->track_id = 0.0f;
      this->frames_counter = 0.0f;
    }
  }

  explicit YoloPiece_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ul;
      this->y = 0ul;
      this->w = 0ul;
      this->h = 0ul;
      this->prob = 0.0f;
      this->obj_id = 0.0f;
      this->track_id = 0.0f;
      this->frames_counter = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    uint32_t;
  _x_type x;
  using _y_type =
    uint32_t;
  _y_type y;
  using _w_type =
    uint32_t;
  _w_type w;
  using _h_type =
    uint32_t;
  _h_type h;
  using _prob_type =
    float;
  _prob_type prob;
  using _obj_id_type =
    float;
  _obj_id_type obj_id;
  using _track_id_type =
    float;
  _track_id_type track_id;
  using _frames_counter_type =
    float;
  _frames_counter_type frames_counter;

  // setters for named parameter idiom
  Type & set__x(
    const uint32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const uint32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__w(
    const uint32_t & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__h(
    const uint32_t & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__prob(
    const float & _arg)
  {
    this->prob = _arg;
    return *this;
  }
  Type & set__obj_id(
    const float & _arg)
  {
    this->obj_id = _arg;
    return *this;
  }
  Type & set__track_id(
    const float & _arg)
  {
    this->track_id = _arg;
    return *this;
  }
  Type & set__frames_counter(
    const float & _arg)
  {
    this->frames_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interfaces::msg::YoloPiece_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interfaces::msg::YoloPiece_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::YoloPiece_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interfaces::msg::YoloPiece_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interfaces__msg__YoloPiece
    std::shared_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interfaces__msg__YoloPiece
    std::shared_ptr<test_interfaces::msg::YoloPiece_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloPiece_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->prob != other.prob) {
      return false;
    }
    if (this->obj_id != other.obj_id) {
      return false;
    }
    if (this->track_id != other.track_id) {
      return false;
    }
    if (this->frames_counter != other.frames_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloPiece_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloPiece_

// alias to use template instance with default allocator
using YoloPiece =
  test_interfaces::msg::YoloPiece_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__STRUCT_HPP_
