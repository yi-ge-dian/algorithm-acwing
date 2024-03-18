
cmake_minimum_required(VERSION 3.27)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

add_executable(leetcode
        editor/cn/[1]两数之和.cpp
        editor/cn/[15]三数之和.cpp
        editor/cn/[21]合并两个有序链表.cpp
        editor/cn/[104]二叉树的最大深度.cpp
        editor/cn/[86]分隔链表.cpp
        "editor/cn/[23]合并 K 个升序链表.cpp"
        "editor/cn/[19]删除链表的倒数第 N 个结点.cpp"
)
