#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> nums;

void ino(TreeNode* root) {
    if (!root) return;
    if (root->left) ino(root->left);
    nums.push_back(root->val);
    if (root->right) ino(root->right);
}

TreeNode* increasingBST(TreeNode* root) {
    if (!root) return NULL;
    nums.clear();
    ino(root);
    TreeNode* nr = new TreeNode(nums[0]);
    TreeNode* temp = nr;
    for (int i = 1; i < nums.size(); i++) {
        TreeNode *t = new TreeNode(nums[i]);
        temp->right = t;
        temp->left = nullptr;
        temp = t;
    }
    return nr;
}

void printSkewedTree(TreeNode* root) {
    TreeNode* curr = root;
    while (curr) {
        cout << curr->val;
        if (curr->right) cout << " -> ";
        curr = curr->right;
    }
    cout << endl;
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);

    TreeNode* result = increasingBST(root);
    printSkewedTree(result);

    return 0;
}
