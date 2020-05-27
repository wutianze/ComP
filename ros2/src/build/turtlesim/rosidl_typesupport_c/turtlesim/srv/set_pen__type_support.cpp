// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlesim/msg/rosidl_typesupport_c__visibility_control.h"
#include "turtlesim/srv/detail/set_pen__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetPen_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetPen_Request_type_support_ids_t;

static const _SetPen_Request_type_support_ids_t _SetPen_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPen_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetPen_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPen_Request_type_support_symbol_names_t _SetPen_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, turtlesim, srv, SetPen_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Request)),
  }
};

typedef struct _SetPen_Request_type_support_data_t
{
  void * data[3];
} _SetPen_Request_type_support_data_t;

static _SetPen_Request_type_support_data_t _SetPen_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPen_Request_message_typesupport_map = {
  3,
  "turtlesim",
  &_SetPen_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPen_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPen_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPen_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPen_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, SetPen_Request)() {
  return &::turtlesim::srv::rosidl_typesupport_c::SetPen_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/set_pen__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetPen_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetPen_Response_type_support_ids_t;

static const _SetPen_Response_type_support_ids_t _SetPen_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPen_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetPen_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPen_Response_type_support_symbol_names_t _SetPen_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, turtlesim, srv, SetPen_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen_Response)),
  }
};

typedef struct _SetPen_Response_type_support_data_t
{
  void * data[3];
} _SetPen_Response_type_support_data_t;

static _SetPen_Response_type_support_data_t _SetPen_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPen_Response_message_typesupport_map = {
  3,
  "turtlesim",
  &_SetPen_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPen_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPen_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPen_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPen_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, SetPen_Response)() {
  return &::turtlesim::srv::rosidl_typesupport_c::SetPen_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetPen_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _SetPen_type_support_ids_t;

static const _SetPen_type_support_ids_t _SetPen_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPen_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _SetPen_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPen_type_support_symbol_names_t _SetPen_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_c, turtlesim, srv, SetPen)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, SetPen)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, SetPen)),
  }
};

typedef struct _SetPen_type_support_data_t
{
  void * data[3];
} _SetPen_type_support_data_t;

static _SetPen_type_support_data_t _SetPen_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPen_service_typesupport_map = {
  3,
  "turtlesim",
  &_SetPen_service_typesupport_ids.typesupport_identifier[0],
  &_SetPen_service_typesupport_symbol_names.symbol_name[0],
  &_SetPen_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPen_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPen_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_turtlesim
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, SetPen)() {
  return &::turtlesim::srv::rosidl_typesupport_c::SetPen_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
