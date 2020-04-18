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
		name = "libtest_timer.so",
		linkopts = ["-shared"],
		linkstatic = False,
		deps = [":test_timer_lib",":C_lib"],
		)

cc_library(
		name = "test_timer_lib",
		srcs = ["test_timer.cc","libtracker_opencv.so"],
		hdrs = ["tracker_opencv.h"],
		deps = ["//cyber",
	  ":detect_msg_cc_proto"
	  ],
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
		name ="C_lib",
	srcs = ["C.cc","libtracker_opencv.so"],
	hdrs = ["tracker_opencv.h"],	
	deps = ["//cyber",
	  ":detect_msg_cc_proto",
				],
		)
cpplint()
