// Auto-generated. Do not edit!

// (in-package detect_s.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let YoloPiece = require('./YoloPiece.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class YoloResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.result_num = null;
      this.result_array = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('result_num')) {
        this.result_num = initObj.result_num
      }
      else {
        this.result_num = 0;
      }
      if (initObj.hasOwnProperty('result_array')) {
        this.result_array = initObj.result_array
      }
      else {
        this.result_array = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type YoloResult
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [result_num]
    bufferOffset = _serializer.uint32(obj.result_num, buffer, bufferOffset);
    // Serialize message field [result_array]
    // Serialize the length for message field [result_array]
    bufferOffset = _serializer.uint32(obj.result_array.length, buffer, bufferOffset);
    obj.result_array.forEach((val) => {
      bufferOffset = YoloPiece.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type YoloResult
    let len;
    let data = new YoloResult(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [result_num]
    data.result_num = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [result_array]
    // Deserialize array length for message field [result_array]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.result_array = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.result_array[i] = YoloPiece.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 32 * object.result_array.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'detect_s/YoloResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '025cd73ca927f284ee50b77a0569f132';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new YoloResult(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.result_num !== undefined) {
      resolved.result_num = msg.result_num;
    }
    else {
      resolved.result_num = 0
    }

    if (msg.result_array !== undefined) {
      resolved.result_array = new Array(msg.result_array.length);
      for (let i = 0; i < resolved.result_array.length; ++i) {
        resolved.result_array[i] = YoloPiece.Resolve(msg.result_array[i]);
      }
    }
    else {
      resolved.result_array = []
    }

    return resolved;
    }
};

module.exports = YoloResult;
