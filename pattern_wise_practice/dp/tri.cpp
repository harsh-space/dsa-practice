#include <bits/stdc++.h>
using namespace std;

int sum(int i, int j, int n, vector<vector<int>>& tri, vector<vector<int>>& dp) {
    if (i >= n) return 1e9;
    if (j >= tri[i].size()) return 1e9;
    if (i == n - 1) return tri[i][j];
    if (dp[i][j] != -1) return dp[i][j];
    
    int d = tri[i][j] + sum(i + 1, j, n, tri, dp);
    int dd = tri[i][j] + sum(i + 1, j + 1, n, tri, dp);
    
    return dp[i][j] = min(d, dd);
}

int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n);
    for (int i = 0; i < n; i++) {
        dp[i] = vector<int>(triangle[i].size(), -1);
    }
    return sum(0, 0, n, triangle, dp);
}

int main() {
    vector<vector<int>> triangle = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };
    
    int result = minimumTotal(triangle);
    cout << "Minimum Total: " << result << endl;
    
    return 0;
}
