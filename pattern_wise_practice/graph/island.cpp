#include <bits/stdc++.h>
using namespace std;

long long dfs(int i, int j, vector<vector<int>> &grid)
{

    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)
    {
        return 0;
    }

    long long v = grid[i][j];
    grid[i][j] = 0;

    long long total = v + dfs(i + 1, j, grid) + dfs(i, j + 1, grid) + dfs(i - 1, j, grid) + dfs(i, j - 1, grid);

    return total;
}

int countIslands(vector<vector<int>> &grid, int k)
{
    int cnt = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] > 0)
            {
                long long sum = dfs(i, j, grid);
                if (sum % k == 0)
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main(){
    vector<vector<int>> grid = {
        {1, 2, 0, 0},
        {0, 4, 0, 5},
        {6, 0, 7, 8}
    };
    int k = 5;

    cout << countIslands(grid, k) << '\n';
    return 0;
}