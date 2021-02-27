// Auto-generated. Do not edit!

// (in-package detect_s.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let PointDetect = require('./PointDetect.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class LinesResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.left1 = null;
      this.right1 = null;
      this.left2 = null;
      this.right2 = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('left1')) {
        this.left1 = initObj.left1
      }
      else {
        this.left1 = new PointDetect();
      }
      if (initObj.hasOwnProperty('right1')) {
        this.right1 = initObj.right1
      }
      else {
        this.right1 = new PointDetect();
      }
      if (initObj.hasOwnProperty('left2')) {
        this.left2 = initObj.left2
      }
      else {
        this.left2 = new PointDetect();
      }
      if (initObj.hasOwnProperty('right2')) {
        this.right2 = initObj.right2
      }
      else {
        this.right2 = new PointDetect();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LinesResult
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [left1]
    bufferOffset = PointDetect.serialize(obj.left1, buffer, bufferOffset);
    // Serialize message field [right1]
    bufferOffset = PointDetect.serialize(obj.right1, buffer, bufferOffset);
    // Serialize message field [left2]
    bufferOffset = PointDetect.serialize(obj.left2, buffer, bufferOffset);
    // Serialize message field [right2]
    bufferOffset = PointDetect.serialize(obj.right2, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LinesResult
    let len;
    let data = new LinesResult(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [left1]
    data.left1 = PointDetect.deserialize(buffer, bufferOffset);
    // Deserialize message field [right1]
    data.right1 = PointDetect.deserialize(buffer, bufferOffset);
    // Deserialize message field [left2]
    data.left2 = PointDetect.deserialize(buffer, bufferOffset);
    // Deserialize message field [right2]
    data.right2 = PointDetect.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 32;
  }

  static datatype() {
    // Returns string type for a message object
    return 'detect_s/LinesResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '450c7b7554f64d28c44fff48a609a687';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    PointDetect left1
    PointDetect right1
    PointDetect left2
    PointDetect right2
    
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
    MSG: detect_s/PointDetect
    int32 x
    int32 y
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LinesResult(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.left1 !== undefined) {
      resolved.left1 = PointDetect.Resolve(msg.left1)
    }
    else {
      resolved.left1 = new PointDetect()
    }

    if (msg.right1 !== undefined) {
      resolved.right1 = PointDetect.Resolve(msg.right1)
    }
    else {
      resolved.right1 = new PointDetect()
    }

    if (msg.left2 !== undefined) {
      resolved.left2 = PointDetect.Resolve(msg.left2)
    }
    else {
      resolved.left2 = new PointDetect()
    }

    if (msg.right2 !== undefined) {
      resolved.right2 = PointDetect.Resolve(msg.right2)
    }
    else {
      resolved.right2 = new PointDetect()
    }

    return resolved;
    }
};

module.exports = LinesResult;
