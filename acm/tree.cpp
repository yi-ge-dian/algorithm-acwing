//
// Created by wenlong dong on 2024/3/22.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(-1), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *build(TreeNode *root, int val) {
    if (root == nullptr) {
        root = new TreeNode();
        root->val = val;
        return root;
    }
    if (val < root->val) root->left = build(root->left, val);
    else if (val > root->val) root->right = build(root->right, val);
    return root;
}

TreeNode *create(vector<int> in) {
    TreeNode *root = nullptr;
    for (int i = 0; i < in.size(); i++) {
        root = build(root, in[i]);
    }
    return root;
}

void levelOrder(TreeNode *root) {
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}


int main() {
    int n;
    cin >> n;

    vector<int> in;
    for (int i = 0; i < n; ++i) {
        in.push_back(i);
    }

    auto root = create(in);
    levelOrder(root);
}