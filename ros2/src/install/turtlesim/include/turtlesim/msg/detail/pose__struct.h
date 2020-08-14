// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__POSE__STRUCT_H_
#define TURTLESIM__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pose in the package turtlesim.
typedef struct turtlesim__msg__Pose
{
  float x;
  float y;
  float theta;
  float linear_velocity;
  float angular_velocity;
} turtlesim__msg__Pose;

// Struct for a sequence of turtlesim__msg__Pose.
typedef struct turtlesim__msg__Pose__Sequence
{
  turtlesim__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__MSG__DETAIL__POSE__STRUCT_H_
