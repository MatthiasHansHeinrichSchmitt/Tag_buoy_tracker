# generated from rosidl_generator_py/resource/_idl.py.em
# with input from p_interfaces:srv/ChangeRadius.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeRadius_Request(type):
    """Metaclass of message 'ChangeRadius_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('p_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'p_interfaces.srv.ChangeRadius_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_radius__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_radius__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_radius__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_radius__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_radius__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeRadius_Request(metaclass=Metaclass_ChangeRadius_Request):
    """Message class 'ChangeRadius_Request'."""

    __slots__ = [
        '_radius',
    ]

    _fields_and_field_types = {
        'radius': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.radius = kwargs.get('radius', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.radius != other.radius:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radius' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'radius' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._radius = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeRadius_Response(type):
    """Metaclass of message 'ChangeRadius_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('p_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'p_interfaces.srv.ChangeRadius_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_radius__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_radius__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_radius__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_radius__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_radius__response

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeRadius_Response(metaclass=Metaclass_ChangeRadius_Response):
    """Message class 'ChangeRadius_Response'."""

    __slots__ = [
        '_radius_changed',
        '_linear_velocity',
    ]

    _fields_and_field_types = {
        'radius_changed': 'boolean',
        'linear_velocity': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.radius_changed = kwargs.get('radius_changed', bool())
        from geometry_msgs.msg import Vector3
        self.linear_velocity = kwargs.get('linear_velocity', Vector3())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.radius_changed != other.radius_changed:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def radius_changed(self):
        """Message field 'radius_changed'."""
        return self._radius_changed

    @radius_changed.setter
    def radius_changed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radius_changed' field must be of type 'bool'"
        self._radius_changed = value

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_velocity' field must be a sub message of type 'Vector3'"
        self._linear_velocity = value


class Metaclass_ChangeRadius(type):
    """Metaclass of service 'ChangeRadius'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('p_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'p_interfaces.srv.ChangeRadius')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_radius

            from p_interfaces.srv import _change_radius
            if _change_radius.Metaclass_ChangeRadius_Request._TYPE_SUPPORT is None:
                _change_radius.Metaclass_ChangeRadius_Request.__import_type_support__()
            if _change_radius.Metaclass_ChangeRadius_Response._TYPE_SUPPORT is None:
                _change_radius.Metaclass_ChangeRadius_Response.__import_type_support__()


class ChangeRadius(metaclass=Metaclass_ChangeRadius):
    from p_interfaces.srv._change_radius import ChangeRadius_Request as Request
    from p_interfaces.srv._change_radius import ChangeRadius_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
