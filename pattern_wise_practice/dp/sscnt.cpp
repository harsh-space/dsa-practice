#include <bits/stdc++.h>
using namespace std;

int cnt(int n, int t, vector<int> &ar, vector<vector<int>> &dp)
{
    if (t == 0)
        return 1;
    if (n == 0)
        return (ar[n] == t);
    if (dp[n][t] != -1)
        return dp[n][t];
    int tk = 0;
    if (ar[n] <= t)
        tk += cnt(n - 1, t - ar[n], ar, dp);
    int ntk = cnt(n - 1, t, ar, dp);
    return dp[n][t] = tk + ntk;
}

int main()
{
    vector<int> ar = {1, 5, 90, 4,9,3,6};
    int t = 9;
    int n = ar.size();

    vector<vector<int>> dp(n, vector<int>(t +1, -1));

    cout << cnt(n-1, t, ar, dp);
    return 0;
}