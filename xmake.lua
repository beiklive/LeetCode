add_rules("mode.debug", "mode.release")

target("LeetCode")
    set_kind("binary")
    add_files("src/*.cpp")

-- lists

target("two_sum")
    set_kind("binary")
    add_files("leetcode/001_two_sum/main.cpp")
    add_deps("LeetCode")