workspace(name = "playback")

new_local_repository(
    name = "pcl",
    build_file = "pcl.BUILD",
    path = "/usr",
)

new_local_repository(
    name = "vtk",
    build_file = "vtk.BUILD",
    path = "/usr",
)

new_local_repository(
    name = "cairo",
    build_file = "cairo.BUILD",
    path = "/usr",
)

new_local_repository(
    name = "x11",
    build_file = "x11.BUILD",
    path = "/usr",
)

new_local_repository(
    name = "boost",
    build_file = "boost.BUILD",
    path = "/usr",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Eigen
http_archive(
    name = "eigen",
    build_file = "//:eigen.BUILD",
    sha256 = "3a66f9bfce85aff39bc255d5a341f87336ec6f5911e8d816dd4a3fdc500f8acf",
    strip_prefix = "eigen-eigen-c5e90d9e764e",
    url = "https://bitbucket.org/eigen/eigen/get/c5e90d9.tar.gz",
)
