// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim/srv/detail/spawn__rosidl_typesupport_introspection_c.h"
#include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim/srv/detail/spawn__functions.h"
#include "turtlesim/srv/detail/spawn__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__Spawn_Request__init(message_memory);
}

void Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_fini_function(void * message_memory)
{
  turtlesim__srv__Spawn_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__Spawn_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__Spawn_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__Spawn_Request, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__Spawn_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_members = {
  "turtlesim__srv",  // message namespace
  "Spawn_Request",  // message name
  4,  // number of fields
  sizeof(turtlesim__srv__Spawn_Request),
  Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_member_array,  // message members
  Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_type_support_handle = {
  0,
  &Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn_Request)() {
  if (!Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_type_support_handle.typesupport_identifier) {
    Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Spawn_Request__rosidl_typesupport_introspection_c__Spawn_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlesim/srv/detail/spawn__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlesim/srv/detail/spawn__functions.h"
// already included above
// #include "turtlesim/srv/detail/spawn__struct.h"


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__Spawn_Response__init(message_memory);
}

void Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_fini_function(void * message_memory)
{
  turtlesim__srv__Spawn_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__Spawn_Response, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_members = {
  "turtlesim__srv",  // message namespace
  "Spawn_Response",  // message name
  1,  // number of fields
  sizeof(turtlesim__srv__Spawn_Response),
  Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_member_array,  // message members
  Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_type_support_handle = {
  0,
  &Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn_Response)() {
  if (!Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_type_support_handle.typesupport_identifier) {
    Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Spawn_Response__rosidl_typesupport_introspection_c__Spawn_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/spawn__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_members = {
  "turtlesim__srv",  // service namespace
  "Spawn",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_Request_message_type_support_handle,
  NULL  // response message
  // turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_type_support_handle = {
  0,
  &turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn)() {
  if (!turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_type_support_handle.typesupport_identifier) {
    turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, Spawn_Response)()->data;
  }

  return &turtlesim__srv__detail__spawn__rosidl_typesupport_introspection_c__Spawn_service_type_support_handle;
}
