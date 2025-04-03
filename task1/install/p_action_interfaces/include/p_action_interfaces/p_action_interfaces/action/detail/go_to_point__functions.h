// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from p_action_interfaces:action/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__FUNCTIONS_H_
#define P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "p_action_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "p_action_interfaces/action/detail/go_to_point__struct.h"

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_Goal
 * )) before or use
 * p_action_interfaces__action__GoToPoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Goal__init(p_action_interfaces__action__GoToPoint_Goal * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Goal__fini(p_action_interfaces__action__GoToPoint_Goal * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_Goal *
p_action_interfaces__action__GoToPoint_Goal__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Goal__destroy(p_action_interfaces__action__GoToPoint_Goal * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Goal__are_equal(const p_action_interfaces__action__GoToPoint_Goal * lhs, const p_action_interfaces__action__GoToPoint_Goal * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Goal__copy(
  const p_action_interfaces__action__GoToPoint_Goal * input,
  p_action_interfaces__action__GoToPoint_Goal * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Goal__Sequence__init(p_action_interfaces__action__GoToPoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Goal__Sequence__fini(p_action_interfaces__action__GoToPoint_Goal__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_Goal__Sequence *
p_action_interfaces__action__GoToPoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Goal__Sequence__destroy(p_action_interfaces__action__GoToPoint_Goal__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Goal__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_Goal__Sequence * lhs, const p_action_interfaces__action__GoToPoint_Goal__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Goal__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_Goal__Sequence * input,
  p_action_interfaces__action__GoToPoint_Goal__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_Result
 * )) before or use
 * p_action_interfaces__action__GoToPoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Result__init(p_action_interfaces__action__GoToPoint_Result * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Result__fini(p_action_interfaces__action__GoToPoint_Result * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_Result *
p_action_interfaces__action__GoToPoint_Result__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Result__destroy(p_action_interfaces__action__GoToPoint_Result * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Result__are_equal(const p_action_interfaces__action__GoToPoint_Result * lhs, const p_action_interfaces__action__GoToPoint_Result * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Result__copy(
  const p_action_interfaces__action__GoToPoint_Result * input,
  p_action_interfaces__action__GoToPoint_Result * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Result__Sequence__init(p_action_interfaces__action__GoToPoint_Result__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Result__Sequence__fini(p_action_interfaces__action__GoToPoint_Result__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_Result__Sequence *
p_action_interfaces__action__GoToPoint_Result__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Result__Sequence__destroy(p_action_interfaces__action__GoToPoint_Result__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Result__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_Result__Sequence * lhs, const p_action_interfaces__action__GoToPoint_Result__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Result__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_Result__Sequence * input,
  p_action_interfaces__action__GoToPoint_Result__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_Feedback
 * )) before or use
 * p_action_interfaces__action__GoToPoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Feedback__init(p_action_interfaces__action__GoToPoint_Feedback * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Feedback__fini(p_action_interfaces__action__GoToPoint_Feedback * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_Feedback *
p_action_interfaces__action__GoToPoint_Feedback__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Feedback__destroy(p_action_interfaces__action__GoToPoint_Feedback * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Feedback__are_equal(const p_action_interfaces__action__GoToPoint_Feedback * lhs, const p_action_interfaces__action__GoToPoint_Feedback * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Feedback__copy(
  const p_action_interfaces__action__GoToPoint_Feedback * input,
  p_action_interfaces__action__GoToPoint_Feedback * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Feedback__Sequence__init(p_action_interfaces__action__GoToPoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Feedback__Sequence__fini(p_action_interfaces__action__GoToPoint_Feedback__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_Feedback__Sequence *
p_action_interfaces__action__GoToPoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_Feedback__Sequence__destroy(p_action_interfaces__action__GoToPoint_Feedback__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Feedback__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_Feedback__Sequence * lhs, const p_action_interfaces__action__GoToPoint_Feedback__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_Feedback__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_Feedback__Sequence * input,
  p_action_interfaces__action__GoToPoint_Feedback__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_SendGoal_Request
 * )) before or use
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Request__init(p_action_interfaces__action__GoToPoint_SendGoal_Request * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Request__fini(p_action_interfaces__action__GoToPoint_SendGoal_Request * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_SendGoal_Request *
p_action_interfaces__action__GoToPoint_SendGoal_Request__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Request__destroy(p_action_interfaces__action__GoToPoint_SendGoal_Request * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Request__are_equal(const p_action_interfaces__action__GoToPoint_SendGoal_Request * lhs, const p_action_interfaces__action__GoToPoint_SendGoal_Request * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Request__copy(
  const p_action_interfaces__action__GoToPoint_SendGoal_Request * input,
  p_action_interfaces__action__GoToPoint_SendGoal_Request * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__init(p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__fini(p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence *
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__destroy(p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * lhs, const p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * input,
  p_action_interfaces__action__GoToPoint_SendGoal_Request__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_SendGoal_Response
 * )) before or use
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Response__init(p_action_interfaces__action__GoToPoint_SendGoal_Response * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Response__fini(p_action_interfaces__action__GoToPoint_SendGoal_Response * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_SendGoal_Response *
p_action_interfaces__action__GoToPoint_SendGoal_Response__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Response__destroy(p_action_interfaces__action__GoToPoint_SendGoal_Response * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Response__are_equal(const p_action_interfaces__action__GoToPoint_SendGoal_Response * lhs, const p_action_interfaces__action__GoToPoint_SendGoal_Response * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Response__copy(
  const p_action_interfaces__action__GoToPoint_SendGoal_Response * input,
  p_action_interfaces__action__GoToPoint_SendGoal_Response * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__init(p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__fini(p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence *
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__destroy(p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * lhs, const p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * input,
  p_action_interfaces__action__GoToPoint_SendGoal_Response__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_GetResult_Request
 * )) before or use
 * p_action_interfaces__action__GoToPoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Request__init(p_action_interfaces__action__GoToPoint_GetResult_Request * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Request__fini(p_action_interfaces__action__GoToPoint_GetResult_Request * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_GetResult_Request *
p_action_interfaces__action__GoToPoint_GetResult_Request__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Request__destroy(p_action_interfaces__action__GoToPoint_GetResult_Request * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Request__are_equal(const p_action_interfaces__action__GoToPoint_GetResult_Request * lhs, const p_action_interfaces__action__GoToPoint_GetResult_Request * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Request__copy(
  const p_action_interfaces__action__GoToPoint_GetResult_Request * input,
  p_action_interfaces__action__GoToPoint_GetResult_Request * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__init(p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__fini(p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence *
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__destroy(p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * lhs, const p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * input,
  p_action_interfaces__action__GoToPoint_GetResult_Request__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_GetResult_Response
 * )) before or use
 * p_action_interfaces__action__GoToPoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Response__init(p_action_interfaces__action__GoToPoint_GetResult_Response * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Response__fini(p_action_interfaces__action__GoToPoint_GetResult_Response * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_GetResult_Response *
p_action_interfaces__action__GoToPoint_GetResult_Response__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Response__destroy(p_action_interfaces__action__GoToPoint_GetResult_Response * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Response__are_equal(const p_action_interfaces__action__GoToPoint_GetResult_Response * lhs, const p_action_interfaces__action__GoToPoint_GetResult_Response * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Response__copy(
  const p_action_interfaces__action__GoToPoint_GetResult_Response * input,
  p_action_interfaces__action__GoToPoint_GetResult_Response * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__init(p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__fini(p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence *
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__destroy(p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * lhs, const p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * input,
  p_action_interfaces__action__GoToPoint_GetResult_Response__Sequence * output);

/// Initialize action/GoToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p_action_interfaces__action__GoToPoint_FeedbackMessage
 * )) before or use
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_FeedbackMessage__init(p_action_interfaces__action__GoToPoint_FeedbackMessage * msg);

/// Finalize action/GoToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_FeedbackMessage__fini(p_action_interfaces__action__GoToPoint_FeedbackMessage * msg);

/// Create action/GoToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_FeedbackMessage *
p_action_interfaces__action__GoToPoint_FeedbackMessage__create();

/// Destroy action/GoToPoint message.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_FeedbackMessage__destroy(p_action_interfaces__action__GoToPoint_FeedbackMessage * msg);

/// Check for action/GoToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_FeedbackMessage__are_equal(const p_action_interfaces__action__GoToPoint_FeedbackMessage * lhs, const p_action_interfaces__action__GoToPoint_FeedbackMessage * rhs);

/// Copy a action/GoToPoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_FeedbackMessage__copy(
  const p_action_interfaces__action__GoToPoint_FeedbackMessage * input,
  p_action_interfaces__action__GoToPoint_FeedbackMessage * output);

/// Initialize array of action/GoToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__init(p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__fini(p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * array);

/// Create array of action/GoToPoint messages.
/**
 * It allocates the memory for the array and calls
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence *
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoToPoint messages.
/**
 * It calls
 * p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
void
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__destroy(p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * array);

/// Check for action/GoToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__are_equal(const p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * lhs, const p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GoToPoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_p_action_interfaces
bool
p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence__copy(
  const p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * input,
  p_action_interfaces__action__GoToPoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__FUNCTIONS_H_
