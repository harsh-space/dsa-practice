#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;
int path(int i, int j, int m, int n, vector<vector<int>> &grid, vector<vector<int>> &dp) {
    if (i == m - 1 && j == n - 1) return grid[i][j];
    if (i >= m || j >= n) return -1;
    if (dp[i][j] != -2) return dp[i][j];
    
    if (grid[i][j] == 1) {
        int right = path(i, j + 1, m, n, grid, dp);
        return dp[i][j] = (right == -1) ? -1 : grid[i][j] + right;
    } else if (grid[i][j] == 2) {
        int down = path(i + 1, j, m, n, grid, dp);
        return dp[i][j] = (down == -1) ? -1 : grid[i][j] + down;
    }
    
    int right = path(i, j + 1, m, n, grid, dp);
    int down = path(i + 1, j, m, n, grid, dp);
    
    if (right == -1 && down == -1) return dp[i][j] = -1;
    if (right == -1) return dp[i][j] = grid[i][j] + down;
    if (down == -1) return dp[i][j] = grid[i][j] + right;
    
    return dp[i][j] = grid[i][j] + max(right, down);
}

int paths(int i, int j, int m, int n, vector<vector<int>> &grid, vector<vector<int>> &dp) {
    if (i == m - 1 && j == n - 1) return 1;
    if (i >= m || j >= n) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    
    if (grid[i][j] == 1) {
        return dp[i][j] = paths(i, j + 1, m, n, grid, dp);
    } else if (grid[i][j] == 2) {
        return dp[i][j] = paths(i + 1, j, m, n, grid, dp);
    }
    
    return dp[i][j] = (paths(i, j + 1, m, n, grid, dp) + paths(i + 1, j, m, n, grid, dp)) % MOD;
}

vector<int> findWays(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size(); 
    
    vector<vector<int>> dp_path(m, vector<int>(n, -2));
    vector<vector<int>> dp_paths(m, vector<int>(n, -1));
    
    int adv = path(0, 0, m, n, grid, dp_path);
    int pat = paths(0, 0, m, n, grid, dp_paths);
    
    if (adv == -1) adv = 0;
    
    vector<int> ans(2, 0);
    ans[0] = pat;
    ans[1] = adv;
    
    return ans;
}

int main() {
    vector<vector<int>> grid = {
        {0, 1, 0},
        {0, 0, 2},
        {0, 0, 0}
    };

    vector<int> result = findWays(grid);

    cout << "Total Paths: " << result[0] << endl;
    cout << "Max Path Sum: " << result[1] << endl;

    return 0;
}
