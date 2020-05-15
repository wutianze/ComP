;; Auto-generated. Do not edit!


(when (boundp 'detect_s::LinesResult)
  (if (not (find-package "DETECT_S"))
    (make-package "DETECT_S"))
  (shadow 'LinesResult (find-package "DETECT_S")))
(unless (find-package "DETECT_S::LINESRESULT")
  (make-package "DETECT_S::LINESRESULT"))

(in-package "ROS")
;;//! \htmlinclude LinesResult.msg.html


(defclass detect_s::LinesResult
  :super ros::object
  :slots (_left1 _right1 _left2 _right2 ))

(defmethod detect_s::LinesResult
  (:init
   (&key
    ((:left1 __left1) (instance detect_s::PointDetect :init))
    ((:right1 __right1) (instance detect_s::PointDetect :init))
    ((:left2 __left2) (instance detect_s::PointDetect :init))
    ((:right2 __right2) (instance detect_s::PointDetect :init))
    )
   (send-super :init)
   (setq _left1 __left1)
   (setq _right1 __right1)
   (setq _left2 __left2)
   (setq _right2 __right2)
   self)
  (:left1
   (&rest __left1)
   (if (keywordp (car __left1))
       (send* _left1 __left1)
     (progn
       (if __left1 (setq _left1 (car __left1)))
       _left1)))
  (:right1
   (&rest __right1)
   (if (keywordp (car __right1))
       (send* _right1 __right1)
     (progn
       (if __right1 (setq _right1 (car __right1)))
       _right1)))
  (:left2
   (&rest __left2)
   (if (keywordp (car __left2))
       (send* _left2 __left2)
     (progn
       (if __left2 (setq _left2 (car __left2)))
       _left2)))
  (:right2
   (&rest __right2)
   (if (keywordp (car __right2))
       (send* _right2 __right2)
     (progn
       (if __right2 (setq _right2 (car __right2)))
       _right2)))
  (:serialization-length
   ()
   (+
    ;; detect_s/PointDetect _left1
    (send _left1 :serialization-length)
    ;; detect_s/PointDetect _right1
    (send _right1 :serialization-length)
    ;; detect_s/PointDetect _left2
    (send _left2 :serialization-length)
    ;; detect_s/PointDetect _right2
    (send _right2 :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; detect_s/PointDetect _left1
       (send _left1 :serialize s)
     ;; detect_s/PointDetect _right1
       (send _right1 :serialize s)
     ;; detect_s/PointDetect _left2
       (send _left2 :serialize s)
     ;; detect_s/PointDetect _right2
       (send _right2 :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; detect_s/PointDetect _left1
     (send _left1 :deserialize buf ptr-) (incf ptr- (send _left1 :serialization-length))
   ;; detect_s/PointDetect _right1
     (send _right1 :deserialize buf ptr-) (incf ptr- (send _right1 :serialization-length))
   ;; detect_s/PointDetect _left2
     (send _left2 :deserialize buf ptr-) (incf ptr- (send _left2 :serialization-length))
   ;; detect_s/PointDetect _right2
     (send _right2 :deserialize buf ptr-) (incf ptr- (send _right2 :serialization-length))
   ;;
   self)
  )

(setf (get detect_s::LinesResult :md5sum-) "31748639f016450bce732dc22ce90507")
(setf (get detect_s::LinesResult :datatype-) "detect_s/LinesResult")
(setf (get detect_s::LinesResult :definition-)
      "PointDetect left1
PointDetect right1
PointDetect left2
PointDetect right2

================================================================================
MSG: detect_s/PointDetect
int32 x
int32 y

")



(provide :detect_s/LinesResult "31748639f016450bce732dc22ce90507")


