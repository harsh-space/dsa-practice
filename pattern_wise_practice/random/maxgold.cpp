#include <bits/stdc++.h>
using namespace std;
int findg(int i, int j, int n, int m, vector<vector<int>> &grid)
{
    if (i >= n || i < 0 || j >= m || j < 0 || grid[i][j] == 0 || grid[i][j] == -1)
    {
        return 0;
    }
    int g = grid[i][j];
    grid[i][j] = -1;
    int r = findg(i, j + 1, n, m, grid);
    int d = findg(i + 1, j, n, m, grid);
    int l = findg(i, j - 1, n, m, grid);
    int u = findg(i - 1, j, n, m, grid);
    grid[i][j] = g;
    return g + max({r, d, l, u});
}

int getMaximumGold(vector<vector<int>> &grid)
{
    int mx = 0;
    int n = grid.size();
    int m = grid[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] > 0)
            {
                mx = max(mx, findg(i, j, n, m, grid));
            }
        }
    }
    return mx;
}
int main()
{
    vector<vector<int>>arr={{0,6,0},{5,8,7},{0,9,0}};
    cout<<getMaximumGold(arr);
    return 0;
}