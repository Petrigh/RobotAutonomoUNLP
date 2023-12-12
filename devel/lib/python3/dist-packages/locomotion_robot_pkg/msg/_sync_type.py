# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from locomotion_robot_pkg/sync_type.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class sync_type(genpy.Message):
  _md5sum = "2ed07a61fe23e1a973a3f61ff858d59f"
  _type = "locomotion_robot_pkg/sync_type"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """std_msgs/UInt8 sync_type
std_msgs/Float32 factor
std_msgs/UInt8 dominant_motor
================================================================================
MSG: std_msgs/UInt8
uint8 data

================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['sync_type','factor','dominant_motor']
  _slot_types = ['std_msgs/UInt8','std_msgs/Float32','std_msgs/UInt8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sync_type,factor,dominant_motor

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(sync_type, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.sync_type is None:
        self.sync_type = std_msgs.msg.UInt8()
      if self.factor is None:
        self.factor = std_msgs.msg.Float32()
      if self.dominant_motor is None:
        self.dominant_motor = std_msgs.msg.UInt8()
    else:
      self.sync_type = std_msgs.msg.UInt8()
      self.factor = std_msgs.msg.Float32()
      self.dominant_motor = std_msgs.msg.UInt8()

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
      buff.write(_get_struct_BfB().pack(_x.sync_type.data, _x.factor.data, _x.dominant_motor.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.sync_type is None:
        self.sync_type = std_msgs.msg.UInt8()
      if self.factor is None:
        self.factor = std_msgs.msg.Float32()
      if self.dominant_motor is None:
        self.dominant_motor = std_msgs.msg.UInt8()
      end = 0
      _x = self
      start = end
      end += 6
      (_x.sync_type.data, _x.factor.data, _x.dominant_motor.data,) = _get_struct_BfB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_BfB().pack(_x.sync_type.data, _x.factor.data, _x.dominant_motor.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.sync_type is None:
        self.sync_type = std_msgs.msg.UInt8()
      if self.factor is None:
        self.factor = std_msgs.msg.Float32()
      if self.dominant_motor is None:
        self.dominant_motor = std_msgs.msg.UInt8()
      end = 0
      _x = self
      start = end
      end += 6
      (_x.sync_type.data, _x.factor.data, _x.dominant_motor.data,) = _get_struct_BfB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_BfB = None
def _get_struct_BfB():
    global _struct_BfB
    if _struct_BfB is None:
        _struct_BfB = struct.Struct("<BfB")
    return _struct_BfB
