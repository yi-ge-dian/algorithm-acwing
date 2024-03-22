#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//feat: [111]二叉树的最小深度
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
class Solution {
public:
    int minDepth(TreeNode *root) {
        int ans = 0;
        if (root == nullptr) {
            return 0;
        }
        //1.左孩子和有孩子都为空的情况，说明到达了叶子节点，直接返回1即可
        if (root->left == nullptr && root->right == nullptr) return 1;

        //2.如果左孩子和由孩子其中一个为空，那么需要返回比较大的那个孩子的深度
        // 左子树
        auto l_depth = minDepth(root->left);
        // 右子树
        auto r_depth = minDepth(root->right);

        // 这里其中一个节点为空，说明m1和m2有一个必然为0，所以可以返回m1 + m2 + 1;
        if (root->left == nullptr || root->right == nullptr) return l_depth + r_depth + 1;

        //3.最后一种情况，也就是左右孩子都不为空，返回最小深度+1即可
        return min(l_depth, r_depth) + 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
