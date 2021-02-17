package(default_visibility = ["//visibility:public"])

cc_library(
    name = "boost",
    srcs = glob(["lib/x86_64-linux-gnu/libboost_system.so"]),
    hdrs = glob([
        "include/boost/*.hpp",
        "include/boost/*.h",
    ]),
    includes = ["include"],
    linkstatic = True,
)
