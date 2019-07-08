cc_library(
    name = "obstacle_detection",
    srcs = [
        "src/processPointClouds.cpp",
        "src/processPointClouds.h",
        "src/render/box.h",
        "src/render/render.cpp",
        "src/render/render.h",
        "src/sensors/lidar.h",
    ],
    data = glob(["src/sensors/data/pcd/**/*.pcd"]),
    includes = [
        "src",
    ],
    strip_include_prefix = "src",
    visibility = ["//visibility:public"],
    deps = ["@pcl"],
)

cc_binary(
    name = "environment",
    srcs = [
        "src/environment.cpp",
    ],
    deps = [
        "//:obstacle_detection",
    ],
)
