// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "test_interfaces/msg/detail/test_image__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _TestImage_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _TestImage_type_support_ids_t;

static const _TestImage_type_support_ids_t _TestImage_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TestImage_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _TestImage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestImage_type_support_symbol_names_t _TestImage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, test_interfaces, msg, TestImage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_interfaces, msg, TestImage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, TestImage)),
  }
};

typedef struct _TestImage_type_support_data_t
{
  void * data[3];
} _TestImage_type_support_data_t;

static _TestImage_type_support_data_t _TestImage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestImage_message_typesupport_map = {
  3,
  "test_interfaces",
  &_TestImage_message_typesupport_ids.typesupport_identifier[0],
  &_TestImage_message_typesupport_symbol_names.symbol_name[0],
  &_TestImage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestImage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestImage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace test_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_interfaces, msg, TestImage)() {
  return &::test_interfaces::msg::rosidl_typesupport_c::TestImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
