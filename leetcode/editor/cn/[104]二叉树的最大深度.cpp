#include<iostream>
#include<vector>
using namespace std;
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
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);

        // 后序位置
        int res = max(left_depth, right_depth) +1;
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
