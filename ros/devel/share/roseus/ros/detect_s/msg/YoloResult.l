;; Auto-generated. Do not edit!


(when (boundp 'detect_s::YoloResult)
  (if (not (find-package "DETECT_S"))
    (make-package "DETECT_S"))
  (shadow 'YoloResult (find-package "DETECT_S")))
(unless (find-package "DETECT_S::YOLORESULT")
  (make-package "DETECT_S::YOLORESULT"))

(in-package "ROS")
;;//! \htmlinclude YoloResult.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass detect_s::YoloResult
  :super ros::object
  :slots (_header _result_num _result_array ))

(defmethod detect_s::YoloResult
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:result_num __result_num) 0)
    ((:result_array __result_array) (let (r) (dotimes (i 0) (push (instance detect_s::YoloPiece :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _result_num (round __result_num))
   (setq _result_array __result_array)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:result_num
   (&optional __result_num)
   (if __result_num (setq _result_num __result_num)) _result_num)
  (:result_array
   (&rest __result_array)
   (if (keywordp (car __result_array))
       (send* _result_array __result_array)
     (progn
       (if __result_array (setq _result_array (car __result_array)))
       _result_array)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint32 _result_num
    4
    ;; detect_s/YoloPiece[] _result_array
    (apply #'+ (send-all _result_array :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint32 _result_num
       (write-long _result_num s)
     ;; detect_s/YoloPiece[] _result_array
     (write-long (length _result_array) s)
     (dolist (elem _result_array)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint32 _result_num
     (setq _result_num (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; detect_s/YoloPiece[] _result_array
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _result_array (let (r) (dotimes (i n) (push (instance detect_s::YoloPiece :init) r)) r))
     (dolist (elem- _result_array)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get detect_s::YoloResult :md5sum-) "025cd73ca927f284ee50b77a0569f132")
(setf (get detect_s::YoloResult :datatype-) "detect_s/YoloResult")
(setf (get detect_s::YoloResult :definition-)
      "std_msgs/Header header
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

")



(provide :detect_s/YoloResult "025cd73ca927f284ee50b77a0569f132")


