// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/test_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_interfaces/msg/detail/test_image__struct.h"
#include "test_interfaces/msg/detail/test_image__functions.h"
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

#include "rosidl_runtime_c/string.h"  // mat_data
#include "rosidl_runtime_c/string_functions.h"  // mat_data
#include "sensor_msgs/msg/detail/image__functions.h"  // test_a

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _TestImage__ros_msg_type = test_interfaces__msg__TestImage;

static bool _TestImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestImage__ros_msg_type * ros_message = static_cast<const _TestImage__ros_msg_type *>(untyped_ros_message);
  // Field name: rows
  {
    cdr << ros_message->rows;
  }

  // Field name: cols
  {
    cdr << ros_message->cols;
  }

  // Field name: elt_type
  {
    cdr << ros_message->elt_type;
  }

  // Field name: elt_size
  {
    cdr << ros_message->elt_size;
  }

  // Field name: test_a
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->test_a, cdr))
    {
      return false;
    }
  }

  // Field name: mat_data
  {
    const rosidl_runtime_c__String * str = &ros_message->mat_data;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TestImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestImage__ros_msg_type * ros_message = static_cast<_TestImage__ros_msg_type *>(untyped_ros_message);
  // Field name: rows
  {
    cdr >> ros_message->rows;
  }

  // Field name: cols
  {
    cdr >> ros_message->cols;
  }

  // Field name: elt_type
  {
    cdr >> ros_message->elt_type;
  }

  // Field name: elt_size
  {
    cdr >> ros_message->elt_size;
  }

  // Field name: test_a
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->test_a))
    {
      return false;
    }
  }

  // Field name: mat_data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mat_data.data) {
      rosidl_runtime_c__String__init(&ros_message->mat_data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mat_data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mat_data'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_interfaces
size_t get_serialized_size_test_interfaces__msg__TestImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestImage__ros_msg_type * ros_message = static_cast<const _TestImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rows
  {
    size_t item_size = sizeof(ros_message->rows);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cols
  {
    size_t item_size = sizeof(ros_message->cols);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elt_type
  {
    size_t item_size = sizeof(ros_message->elt_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elt_size
  {
    size_t item_size = sizeof(ros_message->elt_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name test_a

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->test_a), current_alignment);
  // field.name mat_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mat_data.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TestImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_interfaces__msg__TestImage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_interfaces
size_t max_serialized_size_test_interfaces__msg__TestImage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rows
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cols
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elt_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elt_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: test_a
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }
  // member: mat_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TestImage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_test_interfaces__msg__TestImage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TestImage = {
  "test_interfaces::msg",
  "TestImage",
  _TestImage__cdr_serialize,
  _TestImage__cdr_deserialize,
  _TestImage__get_serialized_size,
  _TestImage__max_serialized_size
};

static rosidl_message_type_support_t _TestImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestImage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_interfaces, msg, TestImage)() {
  return &_TestImage__type_support;
}

#if defined(__cplusplus)
}
#endif
