load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "libtest.so",
    linkopts = ["-shared"],
    linkstatic = False,
    deps = [":A_lib",":B_lib"],
)
cc_binary(
	name = "libp1.so",
	linkopts = ["-shared"],
	linkstatic = False,
	deps = [":A_lib"],
		)
cc_binary(
	name = "libp2.so",
	linkopts = ["-shared"],
	linkstatic = False,
	deps = [":B_lib"],
		)
cc_library(
    name = "A_lib",
    srcs = ["A.cc"],
    hdrs = ["A.h"],
    deps = [
        "//cyber",
        "//cyber/AD_Middle_Test/cyber:test_cc_proto",
    ],
)

cc_library(
		name = "B_lib",
		srcs = ["B.cc"],
		hdrs = ["B.h"],
		deps = ["//cyber",
        "//cyber/AD_Middle_Test/cyber:test_cc_proto",
	  ],
		
		)

cc_binary(
		name = "libtest_timer.so",
		linkopts = ["-shared"],
		linkstatic = False,
		deps = [":test_timer_lib",":C_lib"],
		)

cc_library(
		name = "test_timer_lib",
		srcs = ["test_timer.cc"],
		hdrs = ["test_timer.h"],
		deps = ["//cyber",
	  "//cyber/AD_Middle_Test/cyber:test_cc_proto",],
		)
cc_library(
		name ="C_lib",
		srcs = ["C.cc"],
		deps = ["//cyber",
	  "//cyber/AD_Middle_Test/cyber:test_cc_proto",
				],
		)
cpplint()
