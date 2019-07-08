package(default_visibility = ["//visibility:public"])

cc_library(
    name = "boost",
    srcs = glob(
        ["lib/x86_64-linux-gnu/libboost_*.so*"],
        exclude = [
            "lib/x86_64-linux-gnu/libboost_numpy*",
            "lib/x86_64-linux-gnu/libboost_python*",
        ],
    ),
    hdrs = glob([
        "include/boost/*.hpp",
        "include/boost/*.h",
    ]),
    includes = ["include"],
    linkstatic = True,
)
