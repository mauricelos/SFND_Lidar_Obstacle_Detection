package(default_visibility = ["//visibility:public"])

cc_library(
    name = "pcl",
    srcs = glob(["lib/x86_64-linux-gnu/libpcl_*.so*"]),
    hdrs = glob([
        "include/pcl-1.8/**/*.h",
        "include/pcl-1.8/**/*.hpp",
    ]),
    includes = ["include/pcl-1.8"],
    deps = [
        "@boost",
        "@eigen",
        "@vtk",
    ],
)
