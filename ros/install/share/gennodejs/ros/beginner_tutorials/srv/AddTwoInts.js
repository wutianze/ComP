// Auto-generated. Do not edit!

// (in-package beginner_tutorials.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class AddTwoIntsRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.a = null;
    }
    else {
      if (initObj.hasOwnProperty('a')) {
        this.a = initObj.a
      }
      else {
        this.a = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AddTwoIntsRequest
    // Serialize message field [a]
    bufferOffset = _serializer.string(obj.a, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AddTwoIntsRequest
    let len;
    let data = new AddTwoIntsRequest(null);
    // Deserialize message field [a]
    data.a = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.a.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'beginner_tutorials/AddTwoIntsRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cec2f53f86620c7bb01476cbe41b2fae';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string a
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new AddTwoIntsRequest(null);
    if (msg.a !== undefined) {
      resolved.a = msg.a;
    }
    else {
      resolved.a = ''
    }

    return resolved;
    }
};

class AddTwoIntsResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.b = null;
    }
    else {
      if (initObj.hasOwnProperty('b')) {
        this.b = initObj.b
      }
      else {
        this.b = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AddTwoIntsResponse
    // Serialize message field [b]
    bufferOffset = _serializer.string(obj.b, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AddTwoIntsResponse
    let len;
    let data = new AddTwoIntsResponse(null);
    // Deserialize message field [b]
    data.b = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.b.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'beginner_tutorials/AddTwoIntsResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7ce4159d4691541e9099927d38b0b65f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string b
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new AddTwoIntsResponse(null);
    if (msg.b !== undefined) {
      resolved.b = msg.b;
    }
    else {
      resolved.b = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: AddTwoIntsRequest,
  Response: AddTwoIntsResponse,
  md5sum() { return '945e963769938e4ddc3288e80fdfddf4'; },
  datatype() { return 'beginner_tutorials/AddTwoInts'; }
};
