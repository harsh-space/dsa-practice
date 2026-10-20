#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans = {-1, -1};
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]==target){
    //         ans[0]=i;
    //         break;
    //     }
    // }
    // for(int i=nums.size()-1;i>=0;i--){
    //     if(nums[i]==target){
    //         ans[1]=i;
    //         break;
    //     }
    // }
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] == target)
        {
            ans[0] = m;
        }
        if (nums[m] >= target)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] == target)
        {
            ans[1] = m;
        }
        if (nums[m] <= target)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = searchRange(nums, target);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}