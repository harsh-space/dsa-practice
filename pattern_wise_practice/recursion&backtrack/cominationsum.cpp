#include <bits/stdc++.h>
using namespace std;
void helper(int i, vector<int> &nums, vector<int> &temp,
            vector<vector<int>> &ans, int target)
{
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }
    if ((i == nums.size() && target != 0) || target < nums[i])
        return;
    temp.push_back(nums[i]);
    helper(i, nums, temp, ans, target - nums[i]);
    temp.pop_back();
    helper(i + 1, nums, temp, ans, target);
}
vector<vector<int>> combinationSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<int> temp;
    vector<vector<int>> ans;
    helper(0, nums, temp, ans, target);
    return ans;
}
int main()
{
    vector<int>n={2,3,5};
    int t=8;
    vector<vector<int>>ans=combinationSum(n,t);
    for(int i=0;i<ans.size();i++){
        for(int j:ans[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}