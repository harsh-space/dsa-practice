#include <bits/stdc++.h>
using namespace std;
void helper(int i, int n, int k, vector<int> &temp, vector<vector<int>> &ans)
{
    if (temp.size() == k)
    {
        ans.push_back(temp);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        temp.push_back(j);
        helper(j + 1, n, k, temp, ans);
        temp.pop_back();
    }
}

int main()
{
    int n=4;
    int k=2;
    vector<int> temp;
    vector<vector<int>> ans;
    helper(1, n, k, temp, ans);
    for(auto v:ans){
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}