#include <bits/stdc++.h>
using namespace std;

void helper(int i,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int target){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    for(int j=i;j<nums.size();j++){
        if(nums[j]>target)break;
        if(j>i && nums[j]==nums[j-1])continue;
        temp.push_back(nums[j]);
        helper(j+1,nums,temp,ans,target-nums[j]);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &nums, int target)
{
    sort(nums.begin(),nums.end());
    vector<int>temp;
    vector<vector<int>>ans;
    helper(0,nums,temp,ans,target);
    return ans;
}

int main()
{
    vector<int>n={10,1,2,7,6,1,5};
    int t=8;

    vector<vector<int>>ans=combinationSum2(n,t);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}