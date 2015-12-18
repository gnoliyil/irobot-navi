# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from irobotcreate2/Brushes.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Brushes(genpy.Message):
  _md5sum = "d4c497f02ce3244991df05e0d729013c"
  _type = "irobotcreate2/Brushes"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
bool main_brush
int8 main_brush_pwm
bool main_brush_direction
bool side_brush
int8 side_brush_pwm
bool side_brush_clockwise
bool vacuum
int8 vacuum_pwm

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
# 0: no frame
# 1: global frame
string frame_id

"""
  __slots__ = ['header','main_brush','main_brush_pwm','main_brush_direction','side_brush','side_brush_pwm','side_brush_clockwise','vacuum','vacuum_pwm']
  _slot_types = ['std_msgs/Header','bool','int8','bool','bool','int8','bool','bool','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,main_brush,main_brush_pwm,main_brush_direction,side_brush,side_brush_pwm,side_brush_clockwise,vacuum,vacuum_pwm

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Brushes, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.main_brush is None:
        self.main_brush = False
      if self.main_brush_pwm is None:
        self.main_brush_pwm = 0
      if self.main_brush_direction is None:
        self.main_brush_direction = False
      if self.side_brush is None:
        self.side_brush = False
      if self.side_brush_pwm is None:
        self.side_brush_pwm = 0
      if self.side_brush_clockwise is None:
        self.side_brush_clockwise = False
      if self.vacuum is None:
        self.vacuum = False
      if self.vacuum_pwm is None:
        self.vacuum_pwm = 0
    else:
      self.header = std_msgs.msg.Header()
      self.main_brush = False
      self.main_brush_pwm = 0
      self.main_brush_direction = False
      self.side_brush = False
      self.side_brush_pwm = 0
      self.side_brush_clockwise = False
      self.vacuum = False
      self.vacuum_pwm = 0

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_Bb2Bb2Bb.pack(_x.main_brush, _x.main_brush_pwm, _x.main_brush_direction, _x.side_brush, _x.side_brush_pwm, _x.side_brush_clockwise, _x.vacuum, _x.vacuum_pwm))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.main_brush, _x.main_brush_pwm, _x.main_brush_direction, _x.side_brush, _x.side_brush_pwm, _x.side_brush_clockwise, _x.vacuum, _x.vacuum_pwm,) = _struct_Bb2Bb2Bb.unpack(str[start:end])
      self.main_brush = bool(self.main_brush)
      self.main_brush_direction = bool(self.main_brush_direction)
      self.side_brush = bool(self.side_brush)
      self.side_brush_clockwise = bool(self.side_brush_clockwise)
      self.vacuum = bool(self.vacuum)
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_Bb2Bb2Bb.pack(_x.main_brush, _x.main_brush_pwm, _x.main_brush_direction, _x.side_brush, _x.side_brush_pwm, _x.side_brush_clockwise, _x.vacuum, _x.vacuum_pwm))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.main_brush, _x.main_brush_pwm, _x.main_brush_direction, _x.side_brush, _x.side_brush_pwm, _x.side_brush_clockwise, _x.vacuum, _x.vacuum_pwm,) = _struct_Bb2Bb2Bb.unpack(str[start:end])
      self.main_brush = bool(self.main_brush)
      self.main_brush_direction = bool(self.main_brush_direction)
      self.side_brush = bool(self.side_brush)
      self.side_brush_clockwise = bool(self.side_brush_clockwise)
      self.vacuum = bool(self.vacuum)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_Bb2Bb2Bb = struct.Struct("<Bb2Bb2Bb")
_struct_3I = struct.Struct("<3I")
