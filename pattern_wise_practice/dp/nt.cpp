#include <bits/stdc++.h>
using namespace std;
int nt(int d, int t, vector<vector<int>> &mat, vector<vector<int>> &dp)
{
    if (d == 0)
    {
        int mx = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != t)
                mx = max(mx, mat[0][i]);
        }
        return mx;
    }

    if (dp[d][t] != -1)
        return dp[d][t];

    int mx = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != t)
        {
            int p = mat[d][i] + nt(d - 1, i, mat, dp);
            mx = max(p, mx);
        }
    }
    return dp[d][t] = mx;
}

int maximumPoints(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<vector<int>> dp(n, vector<int>(4, -1));

    return nt(n - 1, 3, mat, dp);
}
int main()
{
    vector<vector<int>>mat={{10,20,30},{20,60,40},{30,60,90}};
    cout<<maximumPoints(mat);
    return 0;
}