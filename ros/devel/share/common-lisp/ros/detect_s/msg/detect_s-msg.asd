
(cl:in-package :asdf)

(defsystem "detect_s-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "LinesResult" :depends-on ("_package_LinesResult"))
    (:file "_package_LinesResult" :depends-on ("_package"))
    (:file "PointDetect" :depends-on ("_package_PointDetect"))
    (:file "_package_PointDetect" :depends-on ("_package"))
    (:file "TestImage" :depends-on ("_package_TestImage"))
    (:file "_package_TestImage" :depends-on ("_package"))
    (:file "TrackerResult" :depends-on ("_package_TrackerResult"))
    (:file "_package_TrackerResult" :depends-on ("_package"))
    (:file "YoloResult" :depends-on ("_package_YoloResult"))
    (:file "_package_YoloResult" :depends-on ("_package"))
  ))