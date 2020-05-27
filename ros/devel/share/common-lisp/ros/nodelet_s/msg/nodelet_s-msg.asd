
(cl:in-package :asdf)

(defsystem "nodelet_s-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Test" :depends-on ("_package_Test"))
    (:file "_package_Test" :depends-on ("_package"))
  ))