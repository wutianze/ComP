load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "libintra.so",
    linkopts = ["-shared"],
    linkstatic = False,
    deps = [":intra_component_lib",":intra_timer_lib"],
)

cc_library(
    name = "intra_component_lib",
    srcs = ["intra_component.cc"],
    hdrs = ["intra_component.h"],
    deps = [
        "//cyber",
        "//cyber/examples/proto:examples_cc_proto",
    ],
)

cc_library(
		name = "intra_timer_lib",
		srcs = ["intra_timer.cc"],
		hdrs = ["intra_timer.h"],
		deps = ["//cyber",
	  		"//cyber/examples/proto:examples_cc_proto",		
	  ],
		
		)

cpplint()
