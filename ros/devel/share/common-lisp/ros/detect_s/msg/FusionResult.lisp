; Auto-generated. Do not edit!


(cl:in-package detect_s-msg)


;//! \htmlinclude FusionResult.msg.html

(cl:defclass <FusionResult> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (fusion_result
    :reader fusion_result
    :initarg :fusion_result
    :type cl:string
    :initform ""))
)

(cl:defclass FusionResult (<FusionResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FusionResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FusionResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name detect_s-msg:<FusionResult> is deprecated: use detect_s-msg:FusionResult instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <FusionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:header-val is deprecated.  Use detect_s-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'fusion_result-val :lambda-list '(m))
(cl:defmethod fusion_result-val ((m <FusionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:fusion_result-val is deprecated.  Use detect_s-msg:fusion_result instead.")
  (fusion_result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FusionResult>) ostream)
  "Serializes a message object of type '<FusionResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'fusion_result))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'fusion_result))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FusionResult>) istream)
  "Deserializes a message object of type '<FusionResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'fusion_result) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'fusion_result) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FusionResult>)))
  "Returns string type for a message object of type '<FusionResult>"
  "detect_s/FusionResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FusionResult)))
  "Returns string type for a message object of type 'FusionResult"
  "detect_s/FusionResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FusionResult>)))
  "Returns md5sum for a message object of type '<FusionResult>"
  "13ab230e8044806d1305c415579c8329")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FusionResult)))
  "Returns md5sum for a message object of type 'FusionResult"
  "13ab230e8044806d1305c415579c8329")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FusionResult>)))
  "Returns full string definition for message of type '<FusionResult>"
  (cl:format cl:nil "std_msgs/Header header~%string fusion_result~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FusionResult)))
  "Returns full string definition for message of type 'FusionResult"
  (cl:format cl:nil "std_msgs/Header header~%string fusion_result~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FusionResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'fusion_result))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FusionResult>))
  "Converts a ROS message object to a list"
  (cl:list 'FusionResult
    (cl:cons ':header (header msg))
    (cl:cons ':fusion_result (fusion_result msg))
))
