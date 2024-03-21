#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//feat: [543]二叉树的直径
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
//};

class Solution {
    int max_depth = -1;
public:
    int diameterOfBinaryTree(TreeNode *root) {
        maxDepth(root);
        return max_depth;
    }

    int maxDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }

        // 左子树的最大深度
        auto left_depth = maxDepth(root->left);

        // 右子树的最大深度
        auto right_depth = maxDepth(root->right);

        // 更新
        auto total_depth = left_depth + right_depth;
        max_depth = max(max_depth, total_depth);

        return 1 + max(left_depth, right_depth);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
