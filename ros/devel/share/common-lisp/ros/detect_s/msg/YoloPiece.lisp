; Auto-generated. Do not edit!


(cl:in-package detect_s-msg)


;//! \htmlinclude YoloPiece.msg.html

(cl:defclass <YoloPiece> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:integer
    :initform 0)
   (y
    :reader y
    :initarg :y
    :type cl:integer
    :initform 0)
   (w
    :reader w
    :initarg :w
    :type cl:integer
    :initform 0)
   (h
    :reader h
    :initarg :h
    :type cl:integer
    :initform 0)
   (prob
    :reader prob
    :initarg :prob
    :type cl:float
    :initform 0.0)
   (obj_id
    :reader obj_id
    :initarg :obj_id
    :type cl:float
    :initform 0.0)
   (track_id
    :reader track_id
    :initarg :track_id
    :type cl:float
    :initform 0.0)
   (frames_counter
    :reader frames_counter
    :initarg :frames_counter
    :type cl:float
    :initform 0.0))
)

(cl:defclass YoloPiece (<YoloPiece>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <YoloPiece>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'YoloPiece)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name detect_s-msg:<YoloPiece> is deprecated: use detect_s-msg:YoloPiece instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:x-val is deprecated.  Use detect_s-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:y-val is deprecated.  Use detect_s-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'w-val :lambda-list '(m))
(cl:defmethod w-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:w-val is deprecated.  Use detect_s-msg:w instead.")
  (w m))

(cl:ensure-generic-function 'h-val :lambda-list '(m))
(cl:defmethod h-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:h-val is deprecated.  Use detect_s-msg:h instead.")
  (h m))

(cl:ensure-generic-function 'prob-val :lambda-list '(m))
(cl:defmethod prob-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:prob-val is deprecated.  Use detect_s-msg:prob instead.")
  (prob m))

(cl:ensure-generic-function 'obj_id-val :lambda-list '(m))
(cl:defmethod obj_id-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:obj_id-val is deprecated.  Use detect_s-msg:obj_id instead.")
  (obj_id m))

(cl:ensure-generic-function 'track_id-val :lambda-list '(m))
(cl:defmethod track_id-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:track_id-val is deprecated.  Use detect_s-msg:track_id instead.")
  (track_id m))

(cl:ensure-generic-function 'frames_counter-val :lambda-list '(m))
(cl:defmethod frames_counter-val ((m <YoloPiece>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader detect_s-msg:frames_counter-val is deprecated.  Use detect_s-msg:frames_counter instead.")
  (frames_counter m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <YoloPiece>) ostream)
  "Serializes a message object of type '<YoloPiece>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'x)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'x)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'x)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'x)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'y)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'y)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'y)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'y)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'w)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'w)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'w)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'w)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'h)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'h)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'h)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'h)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'prob))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'obj_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'track_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'frames_counter))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <YoloPiece>) istream)
  "Deserializes a message object of type '<YoloPiece>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'x)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'x)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'x)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'x)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'y)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'y)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'y)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'y)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'w)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'w)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'w)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'w)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'h)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'h)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'h)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'h)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'prob) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'obj_id) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'track_id) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'frames_counter) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<YoloPiece>)))
  "Returns string type for a message object of type '<YoloPiece>"
  "detect_s/YoloPiece")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'YoloPiece)))
  "Returns string type for a message object of type 'YoloPiece"
  "detect_s/YoloPiece")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<YoloPiece>)))
  "Returns md5sum for a message object of type '<YoloPiece>"
  "402da640748cfc0204aa81cf174b42d0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'YoloPiece)))
  "Returns md5sum for a message object of type 'YoloPiece"
  "402da640748cfc0204aa81cf174b42d0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<YoloPiece>)))
  "Returns full string definition for message of type '<YoloPiece>"
  (cl:format cl:nil "uint32 x~%uint32 y~%uint32 w~%uint32 h~%float32 prob~%float32 obj_id~%float32 track_id~%float32 frames_counter~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'YoloPiece)))
  "Returns full string definition for message of type 'YoloPiece"
  (cl:format cl:nil "uint32 x~%uint32 y~%uint32 w~%uint32 h~%float32 prob~%float32 obj_id~%float32 track_id~%float32 frames_counter~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <YoloPiece>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <YoloPiece>))
  "Converts a ROS message object to a list"
  (cl:list 'YoloPiece
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':w (w msg))
    (cl:cons ':h (h msg))
    (cl:cons ':prob (prob msg))
    (cl:cons ':obj_id (obj_id msg))
    (cl:cons ':track_id (track_id msg))
    (cl:cons ':frames_counter (frames_counter msg))
))
