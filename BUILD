cc_library(
    name = "obstacle_detection_lib",
    srcs = [
        "src/processPointClouds.cpp",
        "src/render/render.cpp",
    ],
    hdrs = [
        "src/processPointClouds.cpp",
        "src/processPointClouds.h",
        "src/quiz/cluster/kdtree.h",
        "src/render/box.h",
        "src/render/render.h",
        "src/sensors/lidar.h",
    ],
    data = glob([
        "src/sensors/data/pcd/**/*.pcd",
        "media/ObstacleDetectionFPS.gif",
    ]),
    strip_include_prefix = "src",
    visibility = ["//visibility:public"],
    deps = ["@pcl"],
)

cc_binary(
    name = "environment",
    srcs = ["src/environment.cpp"],
    deps = ["//:obstacle_detection_lib"],
)

cc_binary(
    name = "quizransac",
    srcs = ["src/quiz/ransac/ransac2d.cpp"],
    deps = ["//:obstacle_detection_lib"],
)

cc_binary(
    name = "quizcluster",
    srcs = ["src/quiz/cluster/cluster.cpp"],
    deps = ["//:obstacle_detection_lib"],
)
