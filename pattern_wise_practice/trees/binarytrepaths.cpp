#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d)
    {
        val = d;
        left = right = NULL;
    }
};
void paths(vector<vector<int>> &ans, vector<int> t, TreeNode *r)
{
    if (!r)
    {
        return;
    }
    if (!r->left && !r->right)
    {
        t.push_back(r->val);
        ans.push_back(t);
        return;
    }
    t.push_back(r->val);
    if (r->left)
        paths(ans, t, r->left);
    if (r->right)
        paths(ans, t, r->right);
    t.pop_back();
}
TreeNode* bt(vector<int>&ar,int i){
    if(i>=ar.size())return NULL;
    TreeNode* r=new TreeNode(ar[i]);
    r->left=bt(ar,2*i+1);
    r->right=bt(ar,2*i+2);
    return r;
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<vector<int>> ans;
    vector<int> temp;
    paths(ans, temp, root);
    vector<string> re;
    for (auto &it : ans)
    {
        string t = "";
        for (int i = 0; i < it.size(); i++)
        {
            if (i < it.size() - 1)
            {
                // char c=it[i]+'0';
                t += to_string(it[i]);
                t += "->";
            }
            else
            {
                // char c=it[i]+'0';
                // t+=c;
                t += to_string(it[i]);
            }
        }
        re.push_back(t);
    }
    return re;
}
int main()
{
    vector<int>ar={1,2,3,5};
    TreeNode* r=bt(ar,0);
    vector<string>ans=binaryTreePaths(r);
    for(auto &it:ans)cout<<it<<endl;

    return 0;
}