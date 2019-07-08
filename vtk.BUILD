package(default_visibility = ["//visibility:public"])

cc_library(
    name = "vtk",
    srcs = glob(["lib/x86_64-linux-gnu/libvtk*6.3.so*"]),
    hdrs = glob(["include/vtk-6.3/**"]),
    includes = ["include/vtk-6.3"],
    deps = [
        "@cairo",
        "@x11",
    ],
)
