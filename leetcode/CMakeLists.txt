
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
        editor/cn/[876]链表的中间结点.cpp
        "editor/cn/[142]环形链表 II.cpp"
        editor/cn/[160]相交链表.cpp
        editor/cn/[26]删除有序数组中的重复项.cpp
        editor/cn/[83]删除排序链表中的重复元素.cpp
        editor/cn/[27]移除元素.cpp
        editor/cn/[283]移动零.cpp
        "editor/cn/[167]两数之和 II - 输入有序数组.cpp"
        editor/cn/[344]反转字符串.cpp
        editor/cn/[5]最长回文子串.cpp
        "editor/cn/[303]区域和检索 - 数组不可变.cpp"
        "editor/cn/[304]二维区域和检索 - 矩阵不可变.cpp"
        "editor/cn/[146]LRU 缓存.cpp"
        "editor/cn/[50]Pow(x, n).cpp"
        editor/cn/[42]接雨水.cpp
        editor/cn/[144]二叉树的前序遍历.cpp
        editor/cn/[94]二叉树的中序遍历.cpp
        editor/cn/[145]二叉树的后序遍历.cpp
        editor/cn/[543]二叉树的直径.cpp
)
