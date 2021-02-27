// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/YoloPiece.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/YoloPiece in the package test_interfaces.
typedef struct test_interfaces__msg__YoloPiece
{
  uint32_t x;
  uint32_t y;
  uint32_t w;
  uint32_t h;
  float prob;
  float obj_id;
  float track_id;
  float frames_counter;
} test_interfaces__msg__YoloPiece;

// Struct for a sequence of test_interfaces__msg__YoloPiece.
typedef struct test_interfaces__msg__YoloPiece__Sequence
{
  test_interfaces__msg__YoloPiece * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__YoloPiece__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__STRUCT_H_
