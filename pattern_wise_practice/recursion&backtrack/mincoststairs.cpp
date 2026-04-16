#include <bits/stdc++.h>
using namespace std;
int helper(int i, vector<int> &cost, vector<int> &dp)
{
    if (i >= cost.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = cost[i] +
                   min(helper(i + 1, cost, dp), helper(i + 2, cost, dp));
}
int main()
{
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    int n = cost.size();
    vector<int> dp(n + 1, -1);
    cout<< min(helper(0, cost, dp), helper(1, cost, dp));
    return 0;
}