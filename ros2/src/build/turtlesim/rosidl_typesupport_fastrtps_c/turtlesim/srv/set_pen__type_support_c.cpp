// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/set_pen__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlesim/srv/detail/set_pen__struct.h"
#include "turtlesim/srv/detail/set_pen__functions.h"
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


using _SetPen_Request__ros_msg_type = turtlesim__srv__SetPen_Request;

static bool _SetPen_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPen_Request__ros_msg_type * ros_message = static_cast<const _SetPen_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: r
  {
    cdr << ros_message->r;
  }

  // Field name: g
  {
    cdr << ros_message->g;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: off
  {
    cdr << ros_message->off;
  }

  return true;
}

static bool _SetPen_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPen_Request__ros_msg_type * ros_message = static_cast<_SetPen_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: r
  {
    cdr >> ros_message->r;
  }

  // Field name: g
  {
    cdr >> ros_message->g;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: off
  {
    cdr >> ros_message->off;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__SetPen_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPen_Request__ros_msg_type * ros_message = static_cast<const _SetPen_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name r
  {
    size_t item_size = sizeof(ros_message->r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name g
  {
    size_t item_size = sizeof(ros_message->g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name off
  {
    size_t item_size = sizeof(ros_message->off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPen_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__srv__SetPen_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__SetPen_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: g
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: off
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPen_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__srv__SetPen_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPen_Request = {
  "turtlesim::srv",
  "SetPen_Request",
  _SetPen_Request__cdr_serialize,
  _SetPen_Request__cdr_deserialize,
  _SetPen_Request__get_serialized_size,
  _SetPen_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPen_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPen_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen_Request)() {
  return &_SetPen_Request__type_support;
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
// #include "turtlesim/srv/detail/set_pen__struct.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__functions.h"
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


using _SetPen_Response__ros_msg_type = turtlesim__srv__SetPen_Response;

static bool _SetPen_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPen_Response__ros_msg_type * ros_message = static_cast<const _SetPen_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SetPen_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPen_Response__ros_msg_type * ros_message = static_cast<_SetPen_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__SetPen_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPen_Response__ros_msg_type * ros_message = static_cast<const _SetPen_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPen_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlesim__srv__SetPen_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__SetPen_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPen_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtlesim__srv__SetPen_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPen_Response = {
  "turtlesim::srv",
  "SetPen_Response",
  _SetPen_Response__cdr_serialize,
  _SetPen_Response__cdr_deserialize,
  _SetPen_Response__get_serialized_size,
  _SetPen_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPen_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPen_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen_Response)() {
  return &_SetPen_Response__type_support;
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
#include "turtlesim/srv/set_pen.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPen__callbacks = {
  "turtlesim::srv",
  "SetPen",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen_Response)(),
};

static rosidl_service_type_support_t SetPen__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPen__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen)() {
  return &SetPen__handle;
}

#if defined(__cplusplus)
}
#endif
