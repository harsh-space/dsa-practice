#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {}
};
int sum = 0;
void dfstree(TreeNode *r, vector<int> &s)
{
    if (!r)
        return;
    sum = sum * 10 + r->val;
    if (!r->left && !r->right)
    {
        s.push_back(sum);
    }
    else
    {
        if (r->left)
            dfstree(r->left, s);
        if (r->right)
            dfstree(r->right, s);
    }
    sum = (sum - r->val) / 10;
}
int sumNumbers(TreeNode *root)
{
    vector<int> s;
    dfstree(root, s);
    return accumulate(s.begin(), s.end(), 0);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(7);
    cout<<sumNumbers(root);
    return 0;
}