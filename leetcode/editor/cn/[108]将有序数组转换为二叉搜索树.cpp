#include<iostream>
#include<vector>
#include<queue>
#include <unordered_map>
#include<list>

using namespace std;

//feat: [108]将有序数组转换为二叉搜索树
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//
//    TreeNode() : val(-1), left(nullptr), right(nullptr) {}
//
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        auto node = build(nums, 0, nums.size() - 1);
        return node;
    }

    TreeNode *build(vector<int> nums, int l, int r) {
        if (l > r) return nullptr;
        int mid = l + (r - l) / 2;
        auto root = new TreeNode(nums[mid]);
        root->left = build(nums, l, mid - 1);
        root->right = build(nums, mid + 1, r);
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
