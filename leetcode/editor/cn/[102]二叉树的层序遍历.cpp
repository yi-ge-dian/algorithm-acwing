#include<iostream>
#include<vector>
#include<queue>

using namespace std;
//feat: [102]二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty()) {
            // 取出 q 的节点
            int size = q.size();
            // 记录这一层的节点值
            vector<int> level;
            for (int i = 0; i < size; i++) {
                auto node = q.front();
                level.push_back(node->val);
                q.pop();
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
