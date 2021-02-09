; Auto-generated. Do not edit!


(cl:in-package detect_s-msg)


;//! \htmlinclude YoloResult.msg.html

(cl:defclass <YoloResult> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (result_num
    :reader result_num
    :initarg :result_num
    :type cl:integer
    :initform 0)
   (result_array
    :reader result_array
    :initarg :result_array
    :type (cl:vector detect_s-msg:YoloPiece)
   :initform (cl:make-array 0 :element-type 'detect_s-msg:YoloPiece :initial-element (cl:make-instance 'detect_s-msg:YoloPiece))))
)

(cl:defclass YoloResult (<YoloResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <YoloResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'YoloResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name detect_s-msg:<YoloResult> is deprecated: use detect_s-msg:YoloResult instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <YoloResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:header-val is deprecated.  Use detect_s-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'result_num-val :lambda-list '(m))
(cl:defmethod result_num-val ((m <YoloResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:result_num-val is deprecated.  Use detect_s-msg:result_num instead.")
  (result_num m))

(cl:ensure-generic-function 'result_array-val :lambda-list '(m))
(cl:defmethod result_array-val ((m <YoloResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:result_array-val is deprecated.  Use detect_s-msg:result_array instead.")
  (result_array m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <YoloResult>) ostream)
  "Serializes a message object of type '<YoloResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'result_num)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'result_num)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'result_num)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'result_num)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'result_array))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'result_array))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <YoloResult>) istream)
  "Deserializes a message object of type '<YoloResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'result_num)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'result_num)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'result_num)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'result_num)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'result_array) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'result_array)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'detect_s-msg:YoloPiece))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<YoloResult>)))
  "Returns string type for a message object of type '<YoloResult>"
  "detect_s/YoloResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'YoloResult)))
  "Returns string type for a message object of type 'YoloResult"
  "detect_s/YoloResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<YoloResult>)))
  "Returns md5sum for a message object of type '<YoloResult>"
  "025cd73ca927f284ee50b77a0569f132")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'YoloResult)))
  "Returns md5sum for a message object of type 'YoloResult"
  "025cd73ca927f284ee50b77a0569f132")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<YoloResult>)))
  "Returns full string definition for message of type '<YoloResult>"
  (cl:format cl:nil "std_msgs/Header header~%uint32 result_num~%YoloPiece[] result_array~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: detect_s/YoloPiece~%uint32 x~%uint32 y~%uint32 w~%uint32 h~%float32 prob~%float32 obj_id~%float32 track_id~%float32 frames_counter~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'YoloResult)))
  "Returns full string definition for message of type 'YoloResult"
  (cl:format cl:nil "std_msgs/Header header~%uint32 result_num~%YoloPiece[] result_array~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: detect_s/YoloPiece~%uint32 x~%uint32 y~%uint32 w~%uint32 h~%float32 prob~%float32 obj_id~%float32 track_id~%float32 frames_counter~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <YoloResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'result_array) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <YoloResult>))
  "Converts a ROS message object to a list"
  (cl:list 'YoloResult
    (cl:cons ':header (header msg))
    (cl:cons ':result_num (result_num msg))
    (cl:cons ':result_array (result_array msg))
))
