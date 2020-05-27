// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SPAWN__STRUCT_H_
#define TURTLESIM__SRV__DETAIL__SPAWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Spawn in the package turtlesim.
typedef struct turtlesim__srv__Spawn_Request
{
  float x;
  float y;
  float theta;
  rosidl_runtime_c__String name;
} turtlesim__srv__Spawn_Request;

// Struct for a sequence of turtlesim__srv__Spawn_Request.
typedef struct turtlesim__srv__Spawn_Request__Sequence
{
  turtlesim__srv__Spawn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__Spawn_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Spawn in the package turtlesim.
typedef struct turtlesim__srv__Spawn_Response
{
  rosidl_runtime_c__String name;
} turtlesim__srv__Spawn_Response;

// Struct for a sequence of turtlesim__srv__Spawn_Response.
typedef struct turtlesim__srv__Spawn_Response__Sequence
{
  turtlesim__srv__Spawn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__Spawn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__SRV__DETAIL__SPAWN__STRUCT_H_
