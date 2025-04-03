// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from p_interfaces:srv/ChangeRadius.idl
// generated code does not contain a copyright notice

#ifndef P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__STRUCT_H_
#define P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeRadius in the package p_interfaces.
typedef struct p_interfaces__srv__ChangeRadius_Request
{
  int64_t radius;
} p_interfaces__srv__ChangeRadius_Request;

// Struct for a sequence of p_interfaces__srv__ChangeRadius_Request.
typedef struct p_interfaces__srv__ChangeRadius_Request__Sequence
{
  p_interfaces__srv__ChangeRadius_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_interfaces__srv__ChangeRadius_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in srv/ChangeRadius in the package p_interfaces.
typedef struct p_interfaces__srv__ChangeRadius_Response
{
  bool radius_changed;
  geometry_msgs__msg__Vector3 linear_velocity;
} p_interfaces__srv__ChangeRadius_Response;

// Struct for a sequence of p_interfaces__srv__ChangeRadius_Response.
typedef struct p_interfaces__srv__ChangeRadius_Response__Sequence
{
  p_interfaces__srv__ChangeRadius_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_interfaces__srv__ChangeRadius_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__STRUCT_H_
