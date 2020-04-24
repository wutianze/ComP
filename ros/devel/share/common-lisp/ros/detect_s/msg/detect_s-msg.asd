
(cl:in-package :asdf)

(defsystem "detect_s-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "TestImage" :depends-on ("_package_TestImage"))
    (:file "_package_TestImage" :depends-on ("_package"))
  ))