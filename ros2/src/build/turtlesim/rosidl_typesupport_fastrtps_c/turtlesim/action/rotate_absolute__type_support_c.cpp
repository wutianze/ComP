// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice
#include "turtlesim/action/rotate_absolute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlesim/action/detail/rotate_absolute__struct.h"
#include "turtlesim/action/detail/rotate_absolute__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RotateAbsolute_Goal__ros_msg_type = turtlesim__action__RotateAbsolute_Goal;

static bool _RotateAbsolute_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_Goal__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: theta
  {
    cdr << ros_message->theta;
  }

  return true;
}

static bool _RotateAbsolute_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_Goal__ros_msg_type * ros_message = static_cast<_RotateAbsolute_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: theta
  {
    cdr >> ros_message->theta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_Goal__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name theta
  {
    size_t item_size = sizeof(ros_message->theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_Goal = {
  "turtlesim::action",
  "RotateAbsolute_Goal",
  _RotateAbsolute_Goal__cdr_serialize,
  _RotateAbsolute_Goal__cdr_deserialize,
  _RotateAbsolute_Goal__get_serialized_size,
  _RotateAbsolute_Goal__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Goal)() {
  return &_RotateAbsolute_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RotateAbsolute_Result__ros_msg_type = turtlesim__action__RotateAbsolute_Result;

static bool _RotateAbsolute_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_Result__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    cdr << ros_message->delta;
  }

  return true;
}

static bool _RotateAbsolute_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_Result__ros_msg_type * ros_message = static_cast<_RotateAbsolute_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    cdr >> ros_message->delta;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_Result__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name delta
  {
    size_t item_size = sizeof(ros_message->delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_Result = {
  "turtlesim::action",
  "RotateAbsolute_Result",
  _RotateAbsolute_Result__cdr_serialize,
  _RotateAbsolute_Result__cdr_deserialize,
  _RotateAbsolute_Result__get_serialized_size,
  _RotateAbsolute_Result__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Result)() {
  return &_RotateAbsolute_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RotateAbsolute_Feedback__ros_msg_type = turtlesim__action__RotateAbsolute_Feedback;

static bool _RotateAbsolute_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_Feedback__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: remaining
  {
    cdr << ros_message->remaining;
  }

  return true;
}

static bool _RotateAbsolute_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_Feedback__ros_msg_type * ros_message = static_cast<_RotateAbsolute_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: remaining
  {
    cdr >> ros_message->remaining;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_Feedback__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name remaining
  {
    size_t item_size = sizeof(ros_message->remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: remaining
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_Feedback = {
  "turtlesim::action",
  "RotateAbsolute_Feedback",
  _RotateAbsolute_Feedback__cdr_serialize,
  _RotateAbsolute_Feedback__cdr_deserialize,
  _RotateAbsolute_Feedback__get_serialized_size,
  _RotateAbsolute_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Feedback)() {
  return &_RotateAbsolute_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_turtlesim__action__RotateAbsolute_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_turtlesim__action__RotateAbsolute_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _RotateAbsolute_SendGoal_Request__ros_msg_type = turtlesim__action__RotateAbsolute_SendGoal_Request;

static bool _RotateAbsolute_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RotateAbsolute_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_SendGoal_Request__ros_msg_type * ros_message = static_cast<_RotateAbsolute_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_turtlesim__action__RotateAbsolute_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_turtlesim__action__RotateAbsolute_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_SendGoal_Request = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal_Request",
  _RotateAbsolute_SendGoal_Request__cdr_serialize,
  _RotateAbsolute_SendGoal_Request__cdr_deserialize,
  _RotateAbsolute_SendGoal_Request__get_serialized_size,
  _RotateAbsolute_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_SendGoal_Request)() {
  return &_RotateAbsolute_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _RotateAbsolute_SendGoal_Response__ros_msg_type = turtlesim__action__RotateAbsolute_SendGoal_Response;

static bool _RotateAbsolute_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RotateAbsolute_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_SendGoal_Response__ros_msg_type * ros_message = static_cast<_RotateAbsolute_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_SendGoal_Response = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal_Response",
  _RotateAbsolute_SendGoal_Response__cdr_serialize,
  _RotateAbsolute_SendGoal_Response__cdr_deserialize,
  _RotateAbsolute_SendGoal_Response__get_serialized_size,
  _RotateAbsolute_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_SendGoal_Response)() {
  return &_RotateAbsolute_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlesim/action/rotate_absolute.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RotateAbsolute_SendGoal__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_SendGoal_Response)(),
};

static rosidl_service_type_support_t RotateAbsolute_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RotateAbsolute_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_SendGoal)() {
  return &RotateAbsolute_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _RotateAbsolute_GetResult_Request__ros_msg_type = turtlesim__action__RotateAbsolute_GetResult_Request;

static bool _RotateAbsolute_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_GetResult_Request__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RotateAbsolute_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_GetResult_Request__ros_msg_type * ros_message = static_cast<_RotateAbsolute_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_GetResult_Request__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_GetResult_Request = {
  "turtlesim::action",
  "RotateAbsolute_GetResult_Request",
  _RotateAbsolute_GetResult_Request__cdr_serialize,
  _RotateAbsolute_GetResult_Request__cdr_deserialize,
  _RotateAbsolute_GetResult_Request__get_serialized_size,
  _RotateAbsolute_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_GetResult_Request)() {
  return &_RotateAbsolute_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_turtlesim__action__RotateAbsolute_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_turtlesim__action__RotateAbsolute_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Result)();


using _RotateAbsolute_GetResult_Response__ros_msg_type = turtlesim__action__RotateAbsolute_GetResult_Response;

static bool _RotateAbsolute_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_GetResult_Response__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RotateAbsolute_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_GetResult_Response__ros_msg_type * ros_message = static_cast<_RotateAbsolute_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_GetResult_Response__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_turtlesim__action__RotateAbsolute_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_turtlesim__action__RotateAbsolute_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_GetResult_Response = {
  "turtlesim::action",
  "RotateAbsolute_GetResult_Response",
  _RotateAbsolute_GetResult_Response__cdr_serialize,
  _RotateAbsolute_GetResult_Response__cdr_deserialize,
  _RotateAbsolute_GetResult_Response__get_serialized_size,
  _RotateAbsolute_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_GetResult_Response)() {
  return &_RotateAbsolute_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/rotate_absolute.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RotateAbsolute_GetResult__callbacks = {
  "turtlesim::action",
  "RotateAbsolute_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_GetResult_Response)(),
};

static rosidl_service_type_support_t RotateAbsolute_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RotateAbsolute_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_GetResult)() {
  return &RotateAbsolute_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtlesim
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _RotateAbsolute_FeedbackMessage__ros_msg_type = turtlesim__action__RotateAbsolute_FeedbackMessage;

static bool _RotateAbsolute_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RotateAbsolute_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RotateAbsolute_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RotateAbsolute_FeedbackMessage__ros_msg_type * ros_message = static_cast<_RotateAbsolute_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__action__RotateAbsolute_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RotateAbsolute_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _RotateAbsolute_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RotateAbsolute_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__action__RotateAbsolute_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__action__RotateAbsolute_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_turtlesim__action__RotateAbsolute_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RotateAbsolute_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__action__RotateAbsolute_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RotateAbsolute_FeedbackMessage = {
  "turtlesim::action",
  "RotateAbsolute_FeedbackMessage",
  _RotateAbsolute_FeedbackMessage__cdr_serialize,
  _RotateAbsolute_FeedbackMessage__cdr_deserialize,
  _RotateAbsolute_FeedbackMessage__get_serialized_size,
  _RotateAbsolute_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _RotateAbsolute_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RotateAbsolute_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, action, RotateAbsolute_FeedbackMessage)() {
  return &_RotateAbsolute_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
