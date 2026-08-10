#include <bits/stdc++.h>
using namespace std;
long long maximumProduct(vector<int> &nums, int m)
{
    int n = nums.size();
    if (n == 1)
        return 1LL * nums[0] * nums[0];
    vector<int> pmin(n, nums[n - 1]), pmax(n, nums[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        pmin[i] = min(pmin[i + 1], nums[i]);
        pmax[i] = max(pmax[i + 1], nums[i]);
    }
    long long ans = LLONG_MIN;
    for (int i = 0; i < n - m + 1; i++)
    {
        if (nums[i] > 0)
        {
            ans = max(ans, 1LL * pmax[i + m - 1] * nums[i]);
        }
        else
        {
            ans = max(ans, 1LL * pmin[i + m - 1] * nums[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int>arr={-1,-9,2,3,-2,-3,1};
    int m=1;
    cout<<maximumProduct(arr,m);
    return 0;
}