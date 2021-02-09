# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from detect_s/YoloPiece.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class YoloPiece(genpy.Message):
  _md5sum = "402da640748cfc0204aa81cf174b42d0"
  _type = "detect_s/YoloPiece"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 x
uint32 y
uint32 w
uint32 h
float32 prob
float32 obj_id
float32 track_id
float32 frames_counter
"""
  __slots__ = ['x','y','w','h','prob','obj_id','track_id','frames_counter']
  _slot_types = ['uint32','uint32','uint32','uint32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x,y,w,h,prob,obj_id,track_id,frames_counter

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(YoloPiece, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.w is None:
        self.w = 0
      if self.h is None:
        self.h = 0
      if self.prob is None:
        self.prob = 0.
      if self.obj_id is None:
        self.obj_id = 0.
      if self.track_id is None:
        self.track_id = 0.
      if self.frames_counter is None:
        self.frames_counter = 0.
    else:
      self.x = 0
      self.y = 0
      self.w = 0
      self.h = 0
      self.prob = 0.
      self.obj_id = 0.
      self.track_id = 0.
      self.frames_counter = 0.

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
      buff.write(_get_struct_4I4f().pack(_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter,) = _get_struct_4I4f().unpack(str[start:end])
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
      end = 0
      _x = self
      start = end
      end += 32
      (_x.x, _x.y, _x.w, _x.h, _x.prob, _x.obj_id, _x.track_id, _x.frames_counter,) = _get_struct_4I4f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4I4f = None
def _get_struct_4I4f():
    global _struct_4I4f
    if _struct_4I4f is None:
        _struct_4I4f = struct.Struct("<4I4f")
    return _struct_4I4f
