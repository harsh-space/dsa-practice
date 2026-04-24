#include <bits/stdc++.h>
using namespace std;
int solve(int i, vector<int> &ar, vector<int> &dp)
{
    if (i >= ar.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int t = ar[i] + solve(i + 2, ar, dp);
    int l = solve(i + 1, ar, dp);
    return dp[i] = max(t, l);
}
int deleteAndEarn(vector<int> &nums)
{
    auto it = max_element(nums.begin(), nums.end());
    int mxn = *it;
    vector<int> val(mxn + 1, 0);
    vector<int> dp(mxn + 1, -1);
    for (int i : nums)
        val[i] += i;
    return solve(0, val, dp);
}
int main()
{   vector<int>arr={2,2,3,3,3,4};
    cout<< deleteAndEarn(arr);
    return 0;
}