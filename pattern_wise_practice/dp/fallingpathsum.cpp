#include <bits/stdc++.h>
using namespace std;

int mfps(int i, int j, int n, vector<vector<int>>& matrix, vector<vector<int>>& dp) {
    if (i >= n || j >= n || j < 0) return 1e9;
    
    if (i == n - 1) return matrix[i][j];
    if (dp[i][j] != -101) return dp[i][j];
    
    return dp[i][j] = matrix[i][j] + min({
        mfps(i + 1, j - 1, n, matrix, dp),
        mfps(i + 1, j + 1, n, matrix, dp),
        mfps(i + 1, j, n, matrix, dp)
    });
}

int minFallingPathSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int mi = INT_MAX;

    vector<vector<int>> dp(n, vector<int>(n, -101));

    for (int j = 0; j < n; j++) {
        mi = min(mi, mfps(0, j, n, matrix, dp));
    }
    
    return mi;
}

int main() {
    
    vector<vector<int>> matrix = {
        {2, 1, 3},
        {6, 5, 4},
        {7, 8, 9}
    };

    int result = minFallingPathSum(matrix);

    cout << "The minimum falling path sum is: " << result << endl;

    return 0;
}
