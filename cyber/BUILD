load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "intra_no_component",
    srcs = ["intra_no_component.cc"],
    deps = [
        "//cyber",
        ":test_cc_proto",
    ],
)
cc_proto_library(
		    name = "test_cc_proto",
		        deps = [
					        ":test_proto",
						    ],
			)

proto_library(
		    name = "test_proto",
		        srcs = ["test.proto"],
			)
cpplint()
