// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from p_interfaces:srv/ChangeRadius.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "p_interfaces/srv/detail/change_radius__rosidl_typesupport_introspection_c.h"
#include "p_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "p_interfaces/srv/detail/change_radius__functions.h"
#include "p_interfaces/srv/detail/change_radius__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  p_interfaces__srv__ChangeRadius_Request__init(message_memory);
}

void p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_fini_function(void * message_memory)
{
  p_interfaces__srv__ChangeRadius_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_member_array[1] = {
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p_interfaces__srv__ChangeRadius_Request, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_members = {
  "p_interfaces__srv",  // message namespace
  "ChangeRadius_Request",  // message name
  1,  // number of fields
  sizeof(p_interfaces__srv__ChangeRadius_Request),
  p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_member_array,  // message members
  p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_type_support_handle = {
  0,
  &p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius_Request)() {
  if (!p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_type_support_handle.typesupport_identifier) {
    p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &p_interfaces__srv__ChangeRadius_Request__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "p_interfaces/srv/detail/change_radius__rosidl_typesupport_introspection_c.h"
// already included above
// #include "p_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "p_interfaces/srv/detail/change_radius__functions.h"
// already included above
// #include "p_interfaces/srv/detail/change_radius__struct.h"


// Include directives for member types
// Member `linear_velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `linear_velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  p_interfaces__srv__ChangeRadius_Response__init(message_memory);
}

void p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_fini_function(void * message_memory)
{
  p_interfaces__srv__ChangeRadius_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_member_array[2] = {
  {
    "radius_changed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p_interfaces__srv__ChangeRadius_Response, radius_changed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p_interfaces__srv__ChangeRadius_Response, linear_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_members = {
  "p_interfaces__srv",  // message namespace
  "ChangeRadius_Response",  // message name
  2,  // number of fields
  sizeof(p_interfaces__srv__ChangeRadius_Response),
  p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_member_array,  // message members
  p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_type_support_handle = {
  0,
  &p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius_Response)() {
  p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_type_support_handle.typesupport_identifier) {
    p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &p_interfaces__srv__ChangeRadius_Response__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "p_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "p_interfaces/srv/detail/change_radius__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_members = {
  "p_interfaces__srv",  // service namespace
  "ChangeRadius",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_Request_message_type_support_handle,
  NULL  // response message
  // p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_Response_message_type_support_handle
};

static rosidl_service_type_support_t p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_type_support_handle = {
  0,
  &p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius)() {
  if (!p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_type_support_handle.typesupport_identifier) {
    p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p_interfaces, srv, ChangeRadius_Response)()->data;
  }

  return &p_interfaces__srv__detail__change_radius__rosidl_typesupport_introspection_c__ChangeRadius_service_type_support_handle;
}
