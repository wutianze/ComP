// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_interfaces:msg/FusionResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__FUNCTIONS_H_
#define TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "test_interfaces/msg/detail/fusion_result__struct.h"

/// Initialize msg/FusionResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_interfaces__msg__FusionResult
 * )) before or use
 * test_interfaces__msg__FusionResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
bool
test_interfaces__msg__FusionResult__init(test_interfaces__msg__FusionResult * msg);

/// Finalize msg/FusionResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FusionResult__fini(test_interfaces__msg__FusionResult * msg);

/// Create msg/FusionResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_interfaces__msg__FusionResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
test_interfaces__msg__FusionResult *
test_interfaces__msg__FusionResult__create();

/// Destroy msg/FusionResult message.
/**
 * It calls
 * test_interfaces__msg__FusionResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FusionResult__destroy(test_interfaces__msg__FusionResult * msg);


/// Initialize array of msg/FusionResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_interfaces__msg__FusionResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
bool
test_interfaces__msg__FusionResult__Sequence__init(test_interfaces__msg__FusionResult__Sequence * array, size_t size);

/// Finalize array of msg/FusionResult messages.
/**
 * It calls
 * test_interfaces__msg__FusionResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FusionResult__Sequence__fini(test_interfaces__msg__FusionResult__Sequence * array);

/// Create array of msg/FusionResult messages.
/**
 * It allocates the memory for the array and calls
 * test_interfaces__msg__FusionResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
test_interfaces__msg__FusionResult__Sequence *
test_interfaces__msg__FusionResult__Sequence__create(size_t size);

/// Destroy array of msg/FusionResult messages.
/**
 * It calls
 * test_interfaces__msg__FusionResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__FusionResult__Sequence__destroy(test_interfaces__msg__FusionResult__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__FUNCTIONS_H_
