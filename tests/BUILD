load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "tests",
    srcs = glob(["**/*.cc"]),
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)


cc_test(
    name = "Factorial_Recursive",
    srcs = ["Factorial_Recursive.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)
