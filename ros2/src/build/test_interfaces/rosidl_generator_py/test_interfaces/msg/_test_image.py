# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_interfaces:msg/TestImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'mat_data'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestImage(type):
    """Metaclass of message 'TestImage'."""

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
            module = import_type_support('test_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_interfaces.msg.TestImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_image

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestImage(metaclass=Metaclass_TestImage):
    """Message class 'TestImage'."""

    __slots__ = [
        '_header',
        '_rows',
        '_cols',
        '_elt_type',
        '_elt_size',
        '_mat_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rows': 'int32',
        'cols': 'int32',
        'elt_type': 'int32',
        'elt_size': 'int32',
        'mat_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.rows = kwargs.get('rows', int())
        self.cols = kwargs.get('cols', int())
        self.elt_type = kwargs.get('elt_type', int())
        self.elt_size = kwargs.get('elt_size', int())
        self.mat_data = array.array('B', kwargs.get('mat_data', []))

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
        if self.header != other.header:
            return False
        if self.rows != other.rows:
            return False
        if self.cols != other.cols:
            return False
        if self.elt_type != other.elt_type:
            return False
        if self.elt_size != other.elt_size:
            return False
        if self.mat_data != other.mat_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def rows(self):
        """Message field 'rows'."""
        return self._rows

    @rows.setter
    def rows(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rows' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rows' field must be an integer in [-2147483648, 2147483647]"
        self._rows = value

    @property
    def cols(self):
        """Message field 'cols'."""
        return self._cols

    @cols.setter
    def cols(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cols' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cols' field must be an integer in [-2147483648, 2147483647]"
        self._cols = value

    @property
    def elt_type(self):
        """Message field 'elt_type'."""
        return self._elt_type

    @elt_type.setter
    def elt_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elt_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'elt_type' field must be an integer in [-2147483648, 2147483647]"
        self._elt_type = value

    @property
    def elt_size(self):
        """Message field 'elt_size'."""
        return self._elt_size

    @elt_size.setter
    def elt_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'elt_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'elt_size' field must be an integer in [-2147483648, 2147483647]"
        self._elt_size = value

    @property
    def mat_data(self):
        """Message field 'mat_data'."""
        return self._mat_data

    @mat_data.setter
    def mat_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'mat_data' array.array() must have the type code of 'B'"
            self._mat_data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'mat_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._mat_data = array.array('B', value)
