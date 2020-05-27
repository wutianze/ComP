load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])
#cc_binary(
#    name = "libtest.so",
#    linkopts = ["-shared"],
#    linkstatic = False,
#    deps = [":A_lib",":B_lib"],
#)
#cc_binary(
#	name = "libp1.so",
#	linkopts = ["-shared"],
#	linkstatic = False,
#	deps = [":A_lib"],
#		)
#cc_binary(
#	name = "libp2.so",
#	linkopts = ["-shared"],
#	linkstatic = False,
#	deps = [":B_lib"],
#		)
#cc_library(
#    name = "A_lib",
#    srcs = ["A.cc"],
#    hdrs = ["A.h"],
#    deps = [
#        "//cyber",
#        "//cyber/AD_Middle_Test/cyber:test_cc_proto",
#    ],
#)

#cc_library(
#		name = "B_lib",
#		srcs = ["B.cc"],
#		hdrs = ["B.h"],
#		deps = ["//cyber",
#       "//cyber/AD_Middle_Test/cyber:test_cc_proto",
#	  ],
#		
#		)
#cc_import(
#		name = "tracker_opencv",
#		hdrs = ["//cyber/AD_Middle_Test/apps/tracker_opencv.h"],
#		shared_library = "//cyber/AD_Middle_Test/apps/libtracker_opencv.so",
#		)
#cc_library(
#		name = "apps",
#		srcs = ["libtracker_opencv.so"],
#		hdrs = ["tracker_opencv.h"],
#		)
cc_binary(
		name = "libdetect_s.so",
		linkopts = ["-shared"],
		linkstatic = False,
		deps = [":CameraTimer_lib",":TrackerApollo_lib",":Line_lib",":FusionFinal_lib","YoloDetect_lib"],
		)
cc_proto_library(
		name = "detect_msg_cc_proto",
		deps = [":detect_msg_proto",],
	                            )

proto_library(
		name = "detect_msg_proto",
		srcs = ["detect_msg.proto"],
		)
cc_library(
		name = "CameraTimer_lib",
		srcs = ["CameraTimer.cc","libopencv_util.so"],
		hdrs = ["opencv_util.h"],
		deps = ["//cyber",
	  ":detect_msg_cc_proto",
	  ],
		)
cc_library(
		name ="YoloDetect_lib",
	srcs = ["YoloDetect.cc","libdark.so","libopencv_util.so"],
	hdrs = ["yolo_v2_class.hpp","opencv_util.h"],	
	deps = ["//cyber",
	  ":detect_msg_cc_proto",
				],
		)

cc_library(
		name ="TrackerApollo_lib",
	srcs = ["TrackerApollo.cc","libtracker_opencv.so","libopencv_util.so"],
	hdrs = ["tracker_opencv.h","opencv_util.h"],	
	deps = ["//cyber",
	  ":detect_msg_cc_proto",
				],
		)
cc_library(
		name ="Line_lib",
	srcs = ["Line.cc","libline_detect.so","libopencv_util.so"],
	hdrs = ["line_detect.h","opencv_util.h"],	
	deps = ["//cyber",
	  ":detect_msg_cc_proto",
				],
		)
cc_library(
		name ="FusionFinal_lib",
	srcs = ["FusionFinal.cc","libline_detect.so","libopencv_util.so","libtracker_opencv.so"],
	hdrs = ["line_detect.h","opencv_util.h","tracker_opencv.h"],	
	deps = ["//cyber",
	  ":detect_msg_cc_proto",
				],
		)

cpplint()
