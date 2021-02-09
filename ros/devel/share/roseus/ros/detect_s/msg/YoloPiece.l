;; Auto-generated. Do not edit!


(when (boundp 'detect_s::YoloPiece)
  (if (not (find-package "DETECT_S"))
    (make-package "DETECT_S"))
  (shadow 'YoloPiece (find-package "DETECT_S")))
(unless (find-package "DETECT_S::YOLOPIECE")
  (make-package "DETECT_S::YOLOPIECE"))

(in-package "ROS")
;;//! \htmlinclude YoloPiece.msg.html


(defclass detect_s::YoloPiece
  :super ros::object
  :slots (_x _y _w _h _prob _obj_id _track_id _frames_counter ))

(defmethod detect_s::YoloPiece
  (:init
   (&key
    ((:x __x) 0)
    ((:y __y) 0)
    ((:w __w) 0)
    ((:h __h) 0)
    ((:prob __prob) 0.0)
    ((:obj_id __obj_id) 0.0)
    ((:track_id __track_id) 0.0)
    ((:frames_counter __frames_counter) 0.0)
    )
   (send-super :init)
   (setq _x (round __x))
   (setq _y (round __y))
   (setq _w (round __w))
   (setq _h (round __h))
   (setq _prob (float __prob))
   (setq _obj_id (float __obj_id))
   (setq _track_id (float __track_id))
   (setq _frames_counter (float __frames_counter))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:w
   (&optional __w)
   (if __w (setq _w __w)) _w)
  (:h
   (&optional __h)
   (if __h (setq _h __h)) _h)
  (:prob
   (&optional __prob)
   (if __prob (setq _prob __prob)) _prob)
  (:obj_id
   (&optional __obj_id)
   (if __obj_id (setq _obj_id __obj_id)) _obj_id)
  (:track_id
   (&optional __track_id)
   (if __track_id (setq _track_id __track_id)) _track_id)
  (:frames_counter
   (&optional __frames_counter)
   (if __frames_counter (setq _frames_counter __frames_counter)) _frames_counter)
  (:serialization-length
   ()
   (+
    ;; uint32 _x
    4
    ;; uint32 _y
    4
    ;; uint32 _w
    4
    ;; uint32 _h
    4
    ;; float32 _prob
    4
    ;; float32 _obj_id
    4
    ;; float32 _track_id
    4
    ;; float32 _frames_counter
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _x
       (write-long _x s)
     ;; uint32 _y
       (write-long _y s)
     ;; uint32 _w
       (write-long _w s)
     ;; uint32 _h
       (write-long _h s)
     ;; float32 _prob
       (sys::poke _prob (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _obj_id
       (sys::poke _obj_id (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _track_id
       (sys::poke _track_id (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _frames_counter
       (sys::poke _frames_counter (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _x
     (setq _x (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _y
     (setq _y (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _w
     (setq _w (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _h
     (setq _h (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _prob
     (setq _prob (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _obj_id
     (setq _obj_id (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _track_id
     (setq _track_id (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _frames_counter
     (setq _frames_counter (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get detect_s::YoloPiece :md5sum-) "402da640748cfc0204aa81cf174b42d0")
(setf (get detect_s::YoloPiece :datatype-) "detect_s/YoloPiece")
(setf (get detect_s::YoloPiece :definition-)
      "uint32 x
uint32 y
uint32 w
uint32 h
float32 prob
float32 obj_id
float32 track_id
float32 frames_counter

")



(provide :detect_s/YoloPiece "402da640748cfc0204aa81cf174b42d0")


