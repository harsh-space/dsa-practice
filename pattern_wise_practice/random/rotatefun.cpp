#include <bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int> &nums)
{
    int t = 0, s = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        t += nums[i];
        s += (i * nums[i]);
    }
    int mxi = s;
    for (int i = 1; i < nums.size(); i++)
    {
        s += t - (nums[nums.size() - i]) * nums.size();
        mxi = max(mxi, s);
    }
    return mxi;
}
int main()
{
    vector<int>nums={4,3,2,6};
    cout<<maxRotateFunction(nums);
    return 0;
}