#include <bits/stdc++.h>
using namespace std;
int maxValidPairSum(vector<int> &nums, int k)
{
    int mx = INT_MIN;
    vector<int> suff(nums.size());
    suff[nums.size() - 1] = nums[nums.size() - 1];
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        suff[i] = max(suff[i + 1], nums[i]);
    }
    for (int i = 0; i < nums.size() - k; i++)
    {
        mx = max(mx, nums[i] + suff[i + k]);
    }
    return mx;
}
int main()
{   
    vector<int>ar={1,3,5,2,8};
    int k=2;
    cout<<maxValidPairSum(ar,k);
    
    return 0;
}