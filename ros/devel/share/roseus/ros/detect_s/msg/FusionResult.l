;; Auto-generated. Do not edit!


(when (boundp 'detect_s::FusionResult)
  (if (not (find-package "DETECT_S"))
    (make-package "DETECT_S"))
  (shadow 'FusionResult (find-package "DETECT_S")))
(unless (find-package "DETECT_S::FUSIONRESULT")
  (make-package "DETECT_S::FUSIONRESULT"))

(in-package "ROS")
;;//! \htmlinclude FusionResult.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass detect_s::FusionResult
  :super ros::object
  :slots (_header _fusion_result ))

(defmethod detect_s::FusionResult
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:fusion_result __fusion_result) "")
    )
   (send-super :init)
   (setq _header __header)
   (setq _fusion_result (string __fusion_result))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:fusion_result
   (&optional __fusion_result)
   (if __fusion_result (setq _fusion_result __fusion_result)) _fusion_result)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _fusion_result
    4 (length _fusion_result)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _fusion_result
       (write-long (length _fusion_result) s) (princ _fusion_result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _fusion_result
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _fusion_result (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get detect_s::FusionResult :md5sum-) "13ab230e8044806d1305c415579c8329")
(setf (get detect_s::FusionResult :datatype-) "detect_s/FusionResult")
(setf (get detect_s::FusionResult :definition-)
      "std_msgs/Header header
string fusion_result

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

")



(provide :detect_s/FusionResult "13ab230e8044806d1305c415579c8329")


