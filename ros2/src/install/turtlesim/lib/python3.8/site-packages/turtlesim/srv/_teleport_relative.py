# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtlesim:srv/TeleportRelative.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeleportRelative_Request(type):
    """Metaclass of message 'TeleportRelative_Request'."""

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
            module = import_type_support('turtlesim')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtlesim.srv.TeleportRelative_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__teleport_relative__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__teleport_relative__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__teleport_relative__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__teleport_relative__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__teleport_relative__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TeleportRelative_Request(metaclass=Metaclass_TeleportRelative_Request):
    """Message class 'TeleportRelative_Request'."""

    __slots__ = [
        '_linear',
        '_angular',
    ]

    _fields_and_field_types = {
        'linear': 'float',
        'angular': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear = kwargs.get('linear', float())
        self.angular = kwargs.get('angular', float())

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
        if self.linear != other.linear:
            return False
        if self.angular != other.angular:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def linear(self):
        """Message field 'linear'."""
        return self._linear

    @linear.setter
    def linear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear' field must be of type 'float'"
        self._linear = value

    @property
    def angular(self):
        """Message field 'angular'."""
        return self._angular

    @angular.setter
    def angular(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular' field must be of type 'float'"
        self._angular = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TeleportRelative_Response(type):
    """Metaclass of message 'TeleportRelative_Response'."""

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
            module = import_type_support('turtlesim')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtlesim.srv.TeleportRelative_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__teleport_relative__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__teleport_relative__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__teleport_relative__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__teleport_relative__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__teleport_relative__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TeleportRelative_Response(metaclass=Metaclass_TeleportRelative_Response):
    """Message class 'TeleportRelative_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_TeleportRelative(type):
    """Metaclass of service 'TeleportRelative'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtlesim')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtlesim.srv.TeleportRelative')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__teleport_relative

            from turtlesim.srv import _teleport_relative
            if _teleport_relative.Metaclass_TeleportRelative_Request._TYPE_SUPPORT is None:
                _teleport_relative.Metaclass_TeleportRelative_Request.__import_type_support__()
            if _teleport_relative.Metaclass_TeleportRelative_Response._TYPE_SUPPORT is None:
                _teleport_relative.Metaclass_TeleportRelative_Response.__import_type_support__()


class TeleportRelative(metaclass=Metaclass_TeleportRelative):
    from turtlesim.srv._teleport_relative import TeleportRelative_Request as Request
    from turtlesim.srv._teleport_relative import TeleportRelative_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
