// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from p_action_interfaces:action/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_
#define P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_Goal
{
  float x;
  float y;
} p_action_interfaces__action__GoToPoint_Goal;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_Goal.
typedef struct p_action_interfaces__action__GoToPoint_Goal__Sequence
{
  p_action_interfaces__action__GoToPoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_Result
{
  bool success;
} p_action_interfaces__action__GoToPoint_Result;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_Result.
typedef struct p_action_interfaces__action__GoToPoint_Result__Sequence
{
  p_action_interfaces__action__GoToPoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "turtlesim/msg/detail/pose__struct.h"

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_Feedback
{
  turtlesim__msg__Pose pose;
} p_action_interfaces__action__GoToPoint_Feedback;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_Feedback.
typedef struct p_action_interfaces__action__GoToPoint_Feedback__Sequence
{
  p_action_interfaces__action__GoToPoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "p_action_interfaces/action/detail/go_to_point__struct.h"

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  p_action_interfaces__action__GoToPoint_Goal goal;
} p_action_interfaces__action__GoToPoint_SendGoal_Request;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_SendGoal_Request.
typedef struct p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence
{
  p_action_interfaces__action__GoToPoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} p_action_interfaces__action__GoToPoint_SendGoal_Response;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_SendGoal_Response.
typedef struct p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence
{
  p_action_interfaces__action__GoToPoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} p_action_interfaces__action__GoToPoint_GetResult_Request;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_GetResult_Request.
typedef struct p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence
{
  p_action_interfaces__action__GoToPoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "p_action_interfaces/action/detail/go_to_point__struct.h"

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_GetResult_Response
{
  int8_t status;
  p_action_interfaces__action__GoToPoint_Result result;
} p_action_interfaces__action__GoToPoint_GetResult_Response;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_GetResult_Response.
typedef struct p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence
{
  p_action_interfaces__action__GoToPoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "p_action_interfaces/action/detail/go_to_point__struct.h"

/// Struct defined in action/GoToPoint in the package p_action_interfaces.
typedef struct p_action_interfaces__action__GoToPoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  p_action_interfaces__action__GoToPoint_Feedback feedback;
} p_action_interfaces__action__GoToPoint_FeedbackMessage;

// Struct for a sequence of p_action_interfaces__action__GoToPoint_FeedbackMessage.
typedef struct p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence
{
  p_action_interfaces__action__GoToPoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_
