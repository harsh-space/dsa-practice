#include <bits/stdc++.h>
using namespace std;
int paths(int i, int j, int m, int n, vector<vector<int>>& dp, vector<vector<int>>& grid) {
    if (i >= m || j >= n) return 0;
    if (grid[i][j] == 1) return 0; // Obstacle found
    if (i == m - 1 && j == n - 1) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    
    return dp[i][j] = paths(i + 1, j, m, n, dp, grid) + paths(i, j + 1, m, n, dp, grid);
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return paths(0, 0, m, n, dp, obstacleGrid);
}

int main() {

    vector<vector<int>> obstacleGrid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    
    int result = uniquePathsWithObstacles(obstacleGrid);
    
    cout << "Number of unique paths with obstacles: " << result << endl;
    
    return 0;
}
