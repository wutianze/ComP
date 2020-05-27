// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__KILL__FUNCTIONS_H_
#define TURTLESIM__SRV__DETAIL__KILL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim/srv/detail/kill__struct.h"

/// Initialize srv/Kill message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim__srv__Kill_Request
 * )) before or use
 * turtlesim__srv__Kill_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__Kill_Request__init(turtlesim__srv__Kill_Request * msg);

/// Finalize srv/Kill message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Request__fini(turtlesim__srv__Kill_Request * msg);

/// Create srv/Kill message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim__srv__Kill_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__Kill_Request *
turtlesim__srv__Kill_Request__create();

/// Destroy srv/Kill message.
/**
 * It calls
 * turtlesim__srv__Kill_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Request__destroy(turtlesim__srv__Kill_Request * msg);


/// Initialize array of srv/Kill messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim__srv__Kill_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__Kill_Request__Sequence__init(turtlesim__srv__Kill_Request__Sequence * array, size_t size);

/// Finalize array of srv/Kill messages.
/**
 * It calls
 * turtlesim__srv__Kill_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Request__Sequence__fini(turtlesim__srv__Kill_Request__Sequence * array);

/// Create array of srv/Kill messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim__srv__Kill_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__Kill_Request__Sequence *
turtlesim__srv__Kill_Request__Sequence__create(size_t size);

/// Destroy array of srv/Kill messages.
/**
 * It calls
 * turtlesim__srv__Kill_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Request__Sequence__destroy(turtlesim__srv__Kill_Request__Sequence * array);

/// Initialize srv/Kill message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim__srv__Kill_Response
 * )) before or use
 * turtlesim__srv__Kill_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__Kill_Response__init(turtlesim__srv__Kill_Response * msg);

/// Finalize srv/Kill message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Response__fini(turtlesim__srv__Kill_Response * msg);

/// Create srv/Kill message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim__srv__Kill_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__Kill_Response *
turtlesim__srv__Kill_Response__create();

/// Destroy srv/Kill message.
/**
 * It calls
 * turtlesim__srv__Kill_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Response__destroy(turtlesim__srv__Kill_Response * msg);


/// Initialize array of srv/Kill messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim__srv__Kill_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
bool
turtlesim__srv__Kill_Response__Sequence__init(turtlesim__srv__Kill_Response__Sequence * array, size_t size);

/// Finalize array of srv/Kill messages.
/**
 * It calls
 * turtlesim__srv__Kill_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Response__Sequence__fini(turtlesim__srv__Kill_Response__Sequence * array);

/// Create array of srv/Kill messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim__srv__Kill_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
turtlesim__srv__Kill_Response__Sequence *
turtlesim__srv__Kill_Response__Sequence__create(size_t size);

/// Destroy array of srv/Kill messages.
/**
 * It calls
 * turtlesim__srv__Kill_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim
void
turtlesim__srv__Kill_Response__Sequence__destroy(turtlesim__srv__Kill_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__SRV__DETAIL__KILL__FUNCTIONS_H_
