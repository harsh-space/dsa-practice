#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int d){
        val=d;
        left=right=NULL;
    }
};
void preorder(TreeNode*r){
    if(!r)return ;
    cout<<r->val<<" ";
    preorder(r->left);
    preorder(r->right);
}

TreeNode *insert(vector<int> &nums, int s, int e)
{
    if (s > e)
        return NULL;
    int m = (s + e) / 2;
    TreeNode *n = new TreeNode(nums[m]);
    n->left = insert(nums, s, m - 1);
    n->right = insert(nums, m + 1, e);
    return n;
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
    TreeNode *ans = insert(nums, 0, nums.size() - 1);
    return ans;
}
int main()
{
    vector<int>ar={-10,-3,0,5,9};
    TreeNode* r=sortedArrayToBST(ar);
    preorder(r);
    return 0;
}