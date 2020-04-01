// Auto-generated. Do not edit!

// (in-package example_pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Num {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.content = null;
      this.id = null;
      this.timestamp = null;
    }
    else {
      if (initObj.hasOwnProperty('content')) {
        this.content = initObj.content
      }
      else {
        this.content = '';
      }
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Num
    // Serialize message field [content]
    bufferOffset = _serializer.string(obj.content, buffer, bufferOffset);
    // Serialize message field [id]
    bufferOffset = _serializer.int64(obj.id, buffer, bufferOffset);
    // Serialize message field [timestamp]
    bufferOffset = _serializer.int64(obj.timestamp, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Num
    let len;
    let data = new Num(null);
    // Deserialize message field [content]
    data.content = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [id]
    data.id = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.content.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'example_pkg/Num';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '34f0a63c6019bc102c58640902c234e7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string content
    int64 id
    int64 timestamp
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Num(null);
    if (msg.content !== undefined) {
      resolved.content = msg.content;
    }
    else {
      resolved.content = ''
    }

    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = 0
    }

    return resolved;
    }
};

module.exports = Num;
