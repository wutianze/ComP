// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__FUNCTIONS_H_
#define TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "test_interfaces/msg/detail/test_image__struct.h"

/// Initialize msg/TestImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_interfaces__msg__TestImage
 * )) before or use
 * test_interfaces__msg__TestImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
bool
test_interfaces__msg__TestImage__init(test_interfaces__msg__TestImage * msg);

/// Finalize msg/TestImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__TestImage__fini(test_interfaces__msg__TestImage * msg);

/// Create msg/TestImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_interfaces__msg__TestImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
test_interfaces__msg__TestImage *
test_interfaces__msg__TestImage__create();

/// Destroy msg/TestImage message.
/**
 * It calls
 * test_interfaces__msg__TestImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__TestImage__destroy(test_interfaces__msg__TestImage * msg);


/// Initialize array of msg/TestImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_interfaces__msg__TestImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
bool
test_interfaces__msg__TestImage__Sequence__init(test_interfaces__msg__TestImage__Sequence * array, size_t size);

/// Finalize array of msg/TestImage messages.
/**
 * It calls
 * test_interfaces__msg__TestImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__TestImage__Sequence__fini(test_interfaces__msg__TestImage__Sequence * array);

/// Create array of msg/TestImage messages.
/**
 * It allocates the memory for the array and calls
 * test_interfaces__msg__TestImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
test_interfaces__msg__TestImage__Sequence *
test_interfaces__msg__TestImage__Sequence__create(size_t size);

/// Destroy array of msg/TestImage messages.
/**
 * It calls
 * test_interfaces__msg__TestImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_interfaces
void
test_interfaces__msg__TestImage__Sequence__destroy(test_interfaces__msg__TestImage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__FUNCTIONS_H_
