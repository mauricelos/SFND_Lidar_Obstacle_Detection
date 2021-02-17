workspace(name = "playback")

new_local_repository(
    name = "pcl",
    build_file = "pcl.BUILD",
    path = "/usr",
)

new_local_repository(
    name = "boost",
    build_file = "boost.BUILD",
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

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "eigen",
    build_file = "//:eigen.BUILD",
    sha256 = "7e84ef87a07702b54ab3306e77cea474f56a40afa1c0ab245bb11725d006d0da",
    strip_prefix = "eigen-eigen-323c052e1731",
    url = "https://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz",
)
