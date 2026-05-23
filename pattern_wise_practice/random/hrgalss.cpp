#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<vector<int>> &grid)
{
    int r = grid.size();
    int c = grid[0].size();
    int rp = r - 2;
    int cp = c - 2;

    int mx = 0;

    for (int n = 0; n < rp; n++)
    {
        pair<int, int> tl = {n, 0};
        pair<int, int> tr = {n, 2};
        pair<int, int> bl = {n + 2, 0};
        pair<int, int> br = {n + 2, 2};

        for (int m = 0; m < cp; m++)
        {
            int temp = 0;
            for (int i = tl.second; i <= tr.second; i++)
            {
                temp += grid[tl.first][i];
            }
            for (int i = bl.second; i <= br.second; i++)
            {
                temp += grid[bl.first][i];
            }
            int mid = (tl.second + tr.second) / 2;
            for (int i = tl.first + 1; i < bl.first; i++)
            {
                temp += grid[i][mid];
            }

            mx = max(mx, temp);
            tl.second++;
            tr.second++;
            bl.second++;
            br.second++;
        }
    }
    return mx;
}

int main()
{
    vector<vector<int>>grid={{6,2,1,3},{4,2,1,5},{9,2,8,7},{4,1,2,9}};
    cout<<maxSum(grid);
    return 0;
}