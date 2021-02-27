# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from detect_s/YoloResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import detect_s.msg
import std_msgs.msg

class YoloResult(genpy.Message):
  _md5sum = "025cd73ca927f284ee50b77a0569f132"
  _type = "detect_s/YoloResult"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header
uint32 result_num
YoloPiece[] result_array

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: detect_s/YoloPiece
uint32 x
uint32 y
uint32 w
uint32 h
float32 prob
float32 obj_id
float32 track_id
float32 frames_counter
"""
  __slots__ = ['header','result_num','result_array']
  _slot_types = ['std_msgs/Header','uint32','detect_s/YoloPiece[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,result_num,result_array

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(YoloResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.result_num is None:
        self.result_num = 0
      if self.result_array is None:
        self.result_array = []
    else:
      self.header = std_msgs.msg.Header()
      self.result_num = 0
      self.result_array = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_I().pack(self.result_num))
      length = len(self.result_array)
      buff.write(_struct_I.pack(length))
      for val1 in self.result_array:
        _x = val1
        buff.write(_get_struct_4I4f().pack(_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.result_array is None:
        self.result_array = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.result_num,) = _get_struct_I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.result_array = []
      for i in range(0, length):
        val1 = detect_s.msg.YoloPiece()
        _x = val1
        start = end
        end += 32
        (_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter,) = _get_struct_4I4f().unpack(str[start:end])
        self.result_array.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_I().pack(self.result_num))
      length = len(self.result_array)
      buff.write(_struct_I.pack(length))
      for val1 in self.result_array:
        _x = val1
        buff.write(_get_struct_4I4f().pack(_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.result_array is None:
        self.result_array = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.result_num,) = _get_struct_I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.result_array = []
      for i in range(0, length):
        val1 = detect_s.msg.YoloPiece()
        _x = val1
        start = end
        end += 32
        (_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter,) = _get_struct_4I4f().unpack(str[start:end])
        self.result_array.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_4I4f = None
def _get_struct_4I4f():
    global _struct_4I4f
    if _struct_4I4f is None:
        _struct_4I4f = struct.Struct("<4I4f")
    return _struct_4I4f
