#include <bits/stdc++.h>
using namespace std;

bool ss(int n, int t, vector<int>& ar, vector<vector<int>>& dp) {
    if (t == 0) return true;
    if (n == 0) return (ar[n] == t);
    
    if (dp[n][t] != -1) return dp[n][t];
    
    bool tk = false;
    if (ar[n] <= t) {
        tk = ss(n - 1, t - ar[n], ar, dp);
    }
    bool ntk = ss(n - 1, t, ar, dp);
    
    return dp[n][t] = (tk || ntk);
}

int main() {
    vector<int> ar = {1, 5, 8, 4, 7};
    int t = accumulate(ar.begin(), ar.end(), 0);

    vector<vector<int>> dp(ar.size(), vector<int>(t + 1, -1));

    for (int i = 0; i <= t; i++) {
        ss(ar.size() - 1, i, ar, dp);
    }
    
    int mindiff = INT_MAX;
    
    for (int j = 0; j <= t; j++) {
        if (dp[ar.size() - 1][j] == 1 || (j == 0)) {
            int s1 = j;
            int s2 = t - s1;
            mindiff = min(mindiff, abs(s1 - s2));
        }
    }
    
    cout << "Minimum Difference: " << mindiff << endl; // Output: 3
    return 0;
}