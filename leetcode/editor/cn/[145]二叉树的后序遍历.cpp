#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//feat: [145]二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }
        // 左
        auto l_res = postorderTraversal(root->left);
        ans.insert(ans.end(), l_res.begin(), l_res.end());

        // 右
        auto r_res = postorderTraversal(root->right);
        ans.insert(ans.end(), r_res.begin(), r_res.end());

        // 根
        ans.push_back(root->val);

        // 离开
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
