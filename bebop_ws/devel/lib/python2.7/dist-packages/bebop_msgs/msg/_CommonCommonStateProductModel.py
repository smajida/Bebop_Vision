# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from bebop_msgs/CommonCommonStateProductModel.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class CommonCommonStateProductModel(genpy.Message):
  _md5sum = "efa705dd25ca4badc44b32b9ceee2b68"
  _type = "bebop_msgs/CommonCommonStateProductModel"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# CommonCommonStateProductModel
# auto-generated from https://raw.githubusercontent.com/Parrot-Developers/libARCommands/7e2f55fafcd45ba2380ca2574a08b7359c005f47/Xml/common_commands.xml
# Do not modify this file by hand. Check scripts/meta folder for generator files.
#
# SDK Comment: Inform of the product model. This is used to customize the UI depending on the connected product.

Header header

# The Model of the product.
uint8 model_RS_TRAVIS=0  # Travis (RS taxi) model.
uint8 model_RS_MARS=1  # Mars (RS space) model
uint8 model_RS_SWAT=2  # SWAT (RS SWAT) model
uint8 model_RS_MCLANE=3  # Mc Lane (RS police) model
uint8 model_RS_BLAZE=4  # Blaze (RS fire) model
uint8 model_RS_ORAK=5  # Orak (RS carbon hydrofoil) model
uint8 model_RS_NEWZ=6  # New Z (RS wooden hydrofoil) model
uint8 model_JS_MARSHALL=7  # Marshall (JS fire) model
uint8 model_JS_DIESEL=8  # Diesel (JS SWAT) model
uint8 model_JS_BUZZ=9  # Buzz (JS space) model
uint8 model_JS_MAX=10  # Max (JS F1) model
uint8 model_JS_JETT=11  # Jett (JS flames) model
uint8 model_JS_TUKTUK=12  # Tuk-Tuk (JS taxi) model
uint8 model

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
  # Pseudo-constants
  model_RS_TRAVIS = 0
  model_RS_MARS = 1
  model_RS_SWAT = 2
  model_RS_MCLANE = 3
  model_RS_BLAZE = 4
  model_RS_ORAK = 5
  model_RS_NEWZ = 6
  model_JS_MARSHALL = 7
  model_JS_DIESEL = 8
  model_JS_BUZZ = 9
  model_JS_MAX = 10
  model_JS_JETT = 11
  model_JS_TUKTUK = 12

  __slots__ = ['header','model']
  _slot_types = ['std_msgs/Header','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,model

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CommonCommonStateProductModel, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.model is None:
        self.model = 0
    else:
      self.header = std_msgs.msg.Header()
      self.model = 0

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
      buff.write(_struct_B.pack(self.model))
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
      start = end
      end += 1
      (self.model,) = _struct_B.unpack(str[start:end])
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
      buff.write(_struct_B.pack(self.model))
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
      start = end
      end += 1
      (self.model,) = _struct_B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_B = struct.Struct("<B")
