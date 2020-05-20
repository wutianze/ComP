// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim/srv/detail/set_pen__rosidl_typesupport_introspection_c.h"
#include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim/srv/detail/set_pen__functions.h"
#include "turtlesim/srv/detail/set_pen__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__SetPen_Request__init(message_memory);
}

void SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_fini_function(void * message_memory)
{
  turtlesim__srv__SetPen_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_member_array[5] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__SetPen_Request, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__SetPen_Request, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__SetPen_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__SetPen_Request, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "off",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__SetPen_Request, off),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_members = {
  "turtlesim__srv",  // message namespace
  "SetPen_Request",  // message name
  5,  // number of fields
  sizeof(turtlesim__srv__SetPen_Request),
  SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_member_array,  // message members
  SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_type_support_handle = {
  0,
  &SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Request)() {
  if (!SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_type_support_handle.typesupport_identifier) {
    SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetPen_Request__rosidl_typesupport_introspection_c__SetPen_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlesim/srv/detail/set_pen__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__functions.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__SetPen_Response__init(message_memory);
}

void SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_fini_function(void * message_memory)
{
  turtlesim__srv__SetPen_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__SetPen_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_members = {
  "turtlesim__srv",  // message namespace
  "SetPen_Response",  // message name
  1,  // number of fields
  sizeof(turtlesim__srv__SetPen_Response),
  SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_member_array,  // message members
  SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_type_support_handle = {
  0,
  &SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Response)() {
  if (!SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_type_support_handle.typesupport_identifier) {
    SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetPen_Response__rosidl_typesupport_introspection_c__SetPen_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_members = {
  "turtlesim__srv",  // service namespace
  "SetPen",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_Request_message_type_support_handle,
  NULL  // response message
  // turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_type_support_handle = {
  0,
  &turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen)() {
  if (!turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_type_support_handle.typesupport_identifier) {
    turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Response)()->data;
  }

  return &turtlesim__srv__detail__set_pen__rosidl_typesupport_introspection_c__SetPen_service_type_support_handle;
}
