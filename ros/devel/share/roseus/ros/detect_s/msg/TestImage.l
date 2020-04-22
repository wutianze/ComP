;; Auto-generated. Do not edit!


(when (boundp 'detect_s::TestImage)
  (if (not (find-package "DETECT_S"))
    (make-package "DETECT_S"))
  (shadow 'TestImage (find-package "DETECT_S")))
(unless (find-package "DETECT_S::TESTIMAGE")
  (make-package "DETECT_S::TESTIMAGE"))

(in-package "ROS")
;;//! \htmlinclude TestImage.msg.html
(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))


(defclass detect_s::TestImage
  :super ros::object
  :slots (_deliver_time _image ))

(defmethod detect_s::TestImage
  (:init
   (&key
    ((:deliver_time __deliver_time) (instance ros::time :init))
    ((:image __image) (instance sensor_msgs::Image :init))
    )
   (send-super :init)
   (setq _deliver_time __deliver_time)
   (setq _image __image)
   self)
  (:deliver_time
   (&optional __deliver_time)
   (if __deliver_time (setq _deliver_time __deliver_time)) _deliver_time)
  (:image
   (&rest __image)
   (if (keywordp (car __image))
       (send* _image __image)
     (progn
       (if __image (setq _image (car __image)))
       _image)))
  (:serialization-length
   ()
   (+
    ;; time _deliver_time
    8
    ;; sensor_msgs/Image _image
    (send _image :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; time _deliver_time
       (write-long (send _deliver_time :sec) s) (write-long (send _deliver_time :nsec) s)
     ;; sensor_msgs/Image _image
       (send _image :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; time _deliver_time
     (send _deliver_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _deliver_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; sensor_msgs/Image _image
     (send _image :deserialize buf ptr-) (incf ptr- (send _image :serialization-length))
   ;;
   self)
  )

(setf (get detect_s::TestImage :md5sum-) "f3cdf94aed878ccdf3efa835405364a9")
(setf (get detect_s::TestImage :datatype-) "detect_s/TestImage")
(setf (get detect_s::TestImage :definition-)
      "time deliver_time
sensor_msgs/Image image

================================================================================
MSG: sensor_msgs/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

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



(provide :detect_s/TestImage "f3cdf94aed878ccdf3efa835405364a9")


