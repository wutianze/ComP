load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_binary(
		name = "libtest.so",
		linkopts = ["-shared"],
		linkstatic = False,
		deps = [":S_lib",":C_lib"],
		)

cc_library(
		name = "S_lib",
		srcs = ["S.cc"],
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
