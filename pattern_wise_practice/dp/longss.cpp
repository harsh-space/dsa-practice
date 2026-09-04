#include<bits/stdc++.h>
using namespace std;

int longcc(int i, int j, string &p, string &q, vector<vector<int>> &dp) {
    if (i < 0 || j < 0) return 0;
    
    if (dp[i + 1][j + 1] != -1) return dp[i + 1][j + 1];
    
    if (p[i] == q[j]) {
        return dp[i + 1][j + 1] = 1 + longcc(i - 1, j - 1, p, q, dp);
    }
    
    return dp[i + 1][j + 1] = max(longcc(i - 1, j, p, q, dp), longcc(i, j - 1, p, q, dp));
}

int main() {
    string p = "acde";
    string q = "adfgce";
    int a = p.size();
    int b = q.size();
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, -1));
    
    cout << longcc(a - 1, b - 1, p, q, dp);
    return 0;
}