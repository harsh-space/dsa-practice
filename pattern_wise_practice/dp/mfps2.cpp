#include <bits/stdc++.h>
using namespace std;
int mfps(int i, int j, int n, vector<vector<int>>& matrix, vector<vector<int>>& dp) {
  
    if (i >= n || j >= n || j < 0) return 1e9;
    if (i == n - 1) return matrix[i][j];
    if (dp[i][j] != -1e9) return dp[i][j];
    
    int next_min = 1e9;
   
    for (int k = 0; k < n; k++) {
        if (k != j) {
            next_min = min(next_min, mfps(i + 1, k, n, matrix, dp));
        }
    }
    
    return dp[i][j] = matrix[i][j] + next_min;
}

int minFallingPathSum(vector<vector<int>>& grid) {
    int n = grid.size();
    int mi = INT_MAX;
    
    vector<vector<int>> dp(n, vector<int>(n, -1e9));

    for (int j = 0; j < n; j++) {
        mi = min(mi, mfps(0, j, n, grid, dp));
    }
    
    return mi;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = minFallingPathSum(grid);

    cout << "The minimum falling path sum is: " << result << endl;

    return 0;
}
