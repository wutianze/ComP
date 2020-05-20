// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_s:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_S__MSG__DETAIL__TEST__FUNCTIONS_H_
#define SIMPLE_S__MSG__DETAIL__TEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_s/msg/rosidl_generator_c__visibility_control.h"

#include "simple_s/msg/detail/test__struct.h"

/// Initialize msg/Test message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_s__msg__Test
 * )) before or use
 * simple_s__msg__Test__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
bool
simple_s__msg__Test__init(simple_s__msg__Test * msg);

/// Finalize msg/Test message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
void
simple_s__msg__Test__fini(simple_s__msg__Test * msg);

/// Create msg/Test message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_s__msg__Test__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
simple_s__msg__Test *
simple_s__msg__Test__create();

/// Destroy msg/Test message.
/**
 * It calls
 * simple_s__msg__Test__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
void
simple_s__msg__Test__destroy(simple_s__msg__Test * msg);


/// Initialize array of msg/Test messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_s__msg__Test__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
bool
simple_s__msg__Test__Sequence__init(simple_s__msg__Test__Sequence * array, size_t size);

/// Finalize array of msg/Test messages.
/**
 * It calls
 * simple_s__msg__Test__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
void
simple_s__msg__Test__Sequence__fini(simple_s__msg__Test__Sequence * array);

/// Create array of msg/Test messages.
/**
 * It allocates the memory for the array and calls
 * simple_s__msg__Test__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
simple_s__msg__Test__Sequence *
simple_s__msg__Test__Sequence__create(size_t size);

/// Destroy array of msg/Test messages.
/**
 * It calls
 * simple_s__msg__Test__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_s
void
simple_s__msg__Test__Sequence__destroy(simple_s__msg__Test__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_S__MSG__DETAIL__TEST__FUNCTIONS_H_
