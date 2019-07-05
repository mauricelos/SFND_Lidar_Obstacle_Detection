cc_library(
    name = "obstacle_detection",
    srcs = [
        "src/environment.cpp",
        "src/processPointClouds.cpp",
    ],
    hdrs = ["src/processPointClouds.h"],
    data = glob(["src/sensors/data/pcd/**/*.pcd"]),
    includes = [
        "include",
        "src",
    ],
    strip_include_prefix = "include",
    visibility = ["//visibility:public"],
    deps = ["@pcl//:apps"],
)
