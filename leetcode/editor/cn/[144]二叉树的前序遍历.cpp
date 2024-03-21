#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//feat: [144]二叉树的前序遍历
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
public:
    vector<int> preorderTraversal(TreeNode *root) {
        // 根
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }
        ans.push_back(root->val);

        // 左
        auto l_res = preorderTraversal(root->left);
        ans.insert(ans.end(), l_res.begin(), l_res.end());

        // 右
        auto r_res = preorderTraversal(root->right);
        ans.insert(ans.end(), r_res.begin(), r_res.end());

        // 离开
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
