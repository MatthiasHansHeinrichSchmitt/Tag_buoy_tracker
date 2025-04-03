// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from p_interfaces:srv/ChangeRadius.idl
// generated code does not contain a copyright notice
#include "p_interfaces/srv/detail/change_radius__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
p_interfaces__srv__ChangeRadius_Request__init(p_interfaces__srv__ChangeRadius_Request * msg)
{
  if (!msg) {
    return false;
  }
  // radius
  return true;
}

void
p_interfaces__srv__ChangeRadius_Request__fini(p_interfaces__srv__ChangeRadius_Request * msg)
{
  if (!msg) {
    return;
  }
  // radius
}

bool
p_interfaces__srv__ChangeRadius_Request__are_equal(const p_interfaces__srv__ChangeRadius_Request * lhs, const p_interfaces__srv__ChangeRadius_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
p_interfaces__srv__ChangeRadius_Request__copy(
  const p_interfaces__srv__ChangeRadius_Request * input,
  p_interfaces__srv__ChangeRadius_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

p_interfaces__srv__ChangeRadius_Request *
p_interfaces__srv__ChangeRadius_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p_interfaces__srv__ChangeRadius_Request * msg = (p_interfaces__srv__ChangeRadius_Request *)allocator.allocate(sizeof(p_interfaces__srv__ChangeRadius_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(p_interfaces__srv__ChangeRadius_Request));
  bool success = p_interfaces__srv__ChangeRadius_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
p_interfaces__srv__ChangeRadius_Request__destroy(p_interfaces__srv__ChangeRadius_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    p_interfaces__srv__ChangeRadius_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
p_interfaces__srv__ChangeRadius_Request__Sequence__init(p_interfaces__srv__ChangeRadius_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p_interfaces__srv__ChangeRadius_Request * data = NULL;

  if (size) {
    data = (p_interfaces__srv__ChangeRadius_Request *)allocator.zero_allocate(size, sizeof(p_interfaces__srv__ChangeRadius_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = p_interfaces__srv__ChangeRadius_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        p_interfaces__srv__ChangeRadius_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
p_interfaces__srv__ChangeRadius_Request__Sequence__fini(p_interfaces__srv__ChangeRadius_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      p_interfaces__srv__ChangeRadius_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

p_interfaces__srv__ChangeRadius_Request__Sequence *
p_interfaces__srv__ChangeRadius_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p_interfaces__srv__ChangeRadius_Request__Sequence * array = (p_interfaces__srv__ChangeRadius_Request__Sequence *)allocator.allocate(sizeof(p_interfaces__srv__ChangeRadius_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = p_interfaces__srv__ChangeRadius_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
p_interfaces__srv__ChangeRadius_Request__Sequence__destroy(p_interfaces__srv__ChangeRadius_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    p_interfaces__srv__ChangeRadius_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
p_interfaces__srv__ChangeRadius_Request__Sequence__are_equal(const p_interfaces__srv__ChangeRadius_Request__Sequence * lhs, const p_interfaces__srv__ChangeRadius_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!p_interfaces__srv__ChangeRadius_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
p_interfaces__srv__ChangeRadius_Request__Sequence__copy(
  const p_interfaces__srv__ChangeRadius_Request__Sequence * input,
  p_interfaces__srv__ChangeRadius_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(p_interfaces__srv__ChangeRadius_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    p_interfaces__srv__ChangeRadius_Request * data =
      (p_interfaces__srv__ChangeRadius_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!p_interfaces__srv__ChangeRadius_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          p_interfaces__srv__ChangeRadius_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!p_interfaces__srv__ChangeRadius_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `linear_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
p_interfaces__srv__ChangeRadius_Response__init(p_interfaces__srv__ChangeRadius_Response * msg)
{
  if (!msg) {
    return false;
  }
  // radius_changed
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_velocity)) {
    p_interfaces__srv__ChangeRadius_Response__fini(msg);
    return false;
  }
  return true;
}

void
p_interfaces__srv__ChangeRadius_Response__fini(p_interfaces__srv__ChangeRadius_Response * msg)
{
  if (!msg) {
    return;
  }
  // radius_changed
  // linear_velocity
  geometry_msgs__msg__Vector3__fini(&msg->linear_velocity);
}

bool
p_interfaces__srv__ChangeRadius_Response__are_equal(const p_interfaces__srv__ChangeRadius_Response * lhs, const p_interfaces__srv__ChangeRadius_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // radius_changed
  if (lhs->radius_changed != rhs->radius_changed) {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  return true;
}

bool
p_interfaces__srv__ChangeRadius_Response__copy(
  const p_interfaces__srv__ChangeRadius_Response * input,
  p_interfaces__srv__ChangeRadius_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // radius_changed
  output->radius_changed = input->radius_changed;
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  return true;
}

p_interfaces__srv__ChangeRadius_Response *
p_interfaces__srv__ChangeRadius_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p_interfaces__srv__ChangeRadius_Response * msg = (p_interfaces__srv__ChangeRadius_Response *)allocator.allocate(sizeof(p_interfaces__srv__ChangeRadius_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(p_interfaces__srv__ChangeRadius_Response));
  bool success = p_interfaces__srv__ChangeRadius_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
p_interfaces__srv__ChangeRadius_Response__destroy(p_interfaces__srv__ChangeRadius_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    p_interfaces__srv__ChangeRadius_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
p_interfaces__srv__ChangeRadius_Response__Sequence__init(p_interfaces__srv__ChangeRadius_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p_interfaces__srv__ChangeRadius_Response * data = NULL;

  if (size) {
    data = (p_interfaces__srv__ChangeRadius_Response *)allocator.zero_allocate(size, sizeof(p_interfaces__srv__ChangeRadius_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = p_interfaces__srv__ChangeRadius_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        p_interfaces__srv__ChangeRadius_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
p_interfaces__srv__ChangeRadius_Response__Sequence__fini(p_interfaces__srv__ChangeRadius_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      p_interfaces__srv__ChangeRadius_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

p_interfaces__srv__ChangeRadius_Response__Sequence *
p_interfaces__srv__ChangeRadius_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p_interfaces__srv__ChangeRadius_Response__Sequence * array = (p_interfaces__srv__ChangeRadius_Response__Sequence *)allocator.allocate(sizeof(p_interfaces__srv__ChangeRadius_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = p_interfaces__srv__ChangeRadius_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
p_interfaces__srv__ChangeRadius_Response__Sequence__destroy(p_interfaces__srv__ChangeRadius_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    p_interfaces__srv__ChangeRadius_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
p_interfaces__srv__ChangeRadius_Response__Sequence__are_equal(const p_interfaces__srv__ChangeRadius_Response__Sequence * lhs, const p_interfaces__srv__ChangeRadius_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!p_interfaces__srv__ChangeRadius_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
p_interfaces__srv__ChangeRadius_Response__Sequence__copy(
  const p_interfaces__srv__ChangeRadius_Response__Sequence * input,
  p_interfaces__srv__ChangeRadius_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(p_interfaces__srv__ChangeRadius_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    p_interfaces__srv__ChangeRadius_Response * data =
      (p_interfaces__srv__ChangeRadius_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!p_interfaces__srv__ChangeRadius_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          p_interfaces__srv__ChangeRadius_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!p_interfaces__srv__ChangeRadius_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
