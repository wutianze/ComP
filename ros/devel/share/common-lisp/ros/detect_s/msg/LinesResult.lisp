; Auto-generated. Do not edit!


(cl:in-package detect_s-msg)


;//! \htmlinclude LinesResult.msg.html

(cl:defclass <LinesResult> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (left1
    :reader left1
    :initarg :left1
    :type detect_s-msg:PointDetect
    :initform (cl:make-instance 'detect_s-msg:PointDetect))
   (right1
    :reader right1
    :initarg :right1
    :type detect_s-msg:PointDetect
    :initform (cl:make-instance 'detect_s-msg:PointDetect))
   (left2
    :reader left2
    :initarg :left2
    :type detect_s-msg:PointDetect
    :initform (cl:make-instance 'detect_s-msg:PointDetect))
   (right2
    :reader right2
    :initarg :right2
    :type detect_s-msg:PointDetect
    :initform (cl:make-instance 'detect_s-msg:PointDetect)))
)

(cl:defclass LinesResult (<LinesResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LinesResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LinesResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name detect_s-msg:<LinesResult> is deprecated: use detect_s-msg:LinesResult instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LinesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:header-val is deprecated.  Use detect_s-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'left1-val :lambda-list '(m))
(cl:defmethod left1-val ((m <LinesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:left1-val is deprecated.  Use detect_s-msg:left1 instead.")
  (left1 m))

(cl:ensure-generic-function 'right1-val :lambda-list '(m))
(cl:defmethod right1-val ((m <LinesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:right1-val is deprecated.  Use detect_s-msg:right1 instead.")
  (right1 m))

(cl:ensure-generic-function 'left2-val :lambda-list '(m))
(cl:defmethod left2-val ((m <LinesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:left2-val is deprecated.  Use detect_s-msg:left2 instead.")
  (left2 m))

(cl:ensure-generic-function 'right2-val :lambda-list '(m))
(cl:defmethod right2-val ((m <LinesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:right2-val is deprecated.  Use detect_s-msg:right2 instead.")
  (right2 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LinesResult>) ostream)
  "Serializes a message object of type '<LinesResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left1) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right1) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'left2) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'right2) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LinesResult>) istream)
  "Deserializes a message object of type '<LinesResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left1) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right1) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'left2) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'right2) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LinesResult>)))
  "Returns string type for a message object of type '<LinesResult>"
  "detect_s/LinesResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LinesResult)))
  "Returns string type for a message object of type 'LinesResult"
  "detect_s/LinesResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LinesResult>)))
  "Returns md5sum for a message object of type '<LinesResult>"
  "450c7b7554f64d28c44fff48a609a687")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LinesResult)))
  "Returns md5sum for a message object of type 'LinesResult"
  "450c7b7554f64d28c44fff48a609a687")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LinesResult>)))
  "Returns full string definition for message of type '<LinesResult>"
  (cl:format cl:nil "std_msgs/Header header~%PointDetect left1~%PointDetect right1~%PointDetect left2~%PointDetect right2~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: detect_s/PointDetect~%int32 x~%int32 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LinesResult)))
  "Returns full string definition for message of type 'LinesResult"
  (cl:format cl:nil "std_msgs/Header header~%PointDetect left1~%PointDetect right1~%PointDetect left2~%PointDetect right2~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: detect_s/PointDetect~%int32 x~%int32 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LinesResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left1))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right1))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'left2))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'right2))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LinesResult>))
  "Converts a ROS message object to a list"
  (cl:list 'LinesResult
    (cl:cons ':header (header msg))
    (cl:cons ':left1 (left1 msg))
    (cl:cons ':right1 (right1 msg))
    (cl:cons ':left2 (left2 msg))
    (cl:cons ':right2 (right2 msg))
))
