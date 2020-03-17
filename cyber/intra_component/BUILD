load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "libintra.so",
    linkopts = ["-shared"],
    linkstatic = False,
    deps = [":intra_A_lib",":intra_B_lib"],
)
cc_binary(
	name = "libintra_p1.so",
	linkopts = ["-shared"],
	linkstatic = False,
	deps = [":intra_A_lib"],
		)
cc_binary(
	name = "libintra_p2.so",
	linkopts = ["-shared"],
	linkstatic = False,
	deps = [":intra_B_lib"],
		)
cc_library(
    name = "intra_A_lib",
    srcs = ["intra_A.cc"],
    hdrs = ["intra_A.h"],
    deps = [
        "//cyber",
        "//cyber/AD_Middle_Test/cyber:test_cc_proto",
    ],
)

cc_library(
		name = "intra_B_lib",
		srcs = ["intra_B.cc"],
		hdrs = ["intra_B.h"],
		deps = ["//cyber",
        "//cyber/AD_Middle_Test/cyber:test_cc_proto",
	  ],
		
		)

cpplint()
