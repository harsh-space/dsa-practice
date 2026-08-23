#include <bits/stdc++.h>
using namespace std;
int paths(int i, int j, int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp) {
    if (i >= m || j >= n) return 1e9; 
    if (i == m - 1 && j == n - 1) return grid[i][j];
    if (dp[i][j] != -1) return dp[i][j];
    
    return dp[i][j] = grid[i][j] + min(paths(i + 1, j, m, n, grid, dp), 
                                       paths(i, j + 1, m, n, grid, dp)); 
}

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return paths(0, 0, m, n, grid, dp);
}

int main() {

    vector<vector<int>> grid = {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };
    
    int result = minPathSum(grid);
    
    cout << "Minimum path sum: " << result << endl;
    
    return 0;
}
