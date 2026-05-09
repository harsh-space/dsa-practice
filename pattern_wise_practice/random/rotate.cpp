#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotateGrid(vector<vector<int>> &grid, int k)
{
    int n = grid.size();
    int m = grid[0].size();
    int l = min(n, m) / 2;
    pair<int, int> tl = {0, 0};
    pair<int, int> tr = {0, m - 1};
    pair<int, int> bl = {n - 1, 0};
    pair<int, int> br = {n - 1, m - 1};

    for (int i = 1; i <= l; i++)
    {
        vector<int> temp;
        int p1, p2, q1, q2;
        p1 = tl.first;
        q1 = tl.second;
        q2 = tr.second;
        for (int j = q1; j < q2; j++)
        {
            temp.push_back(grid[p1][j]);
        }
        p1 = tr.first;
        q1 = tr.second;
        p2 = br.first;
        for (int j = p1; j < p2; j++)
        {
            temp.push_back(grid[j][q1]);
        }
        p1 = br.first;
        q1 = br.second;
        q2 = bl.second;
        for (int j = q1; j > q2; j--)
        {
            temp.push_back(grid[p1][j]);
        }
        p1 = bl.first;
        q1 = bl.second;
        p2 = tl.first;
        for (int j = p1; j > p2; j--)
        {
            temp.push_back(grid[j][q1]);
        }
        int ak = k % temp.size();
        reverse(temp.begin(), temp.begin() + ak);
        reverse(temp.begin() + ak, temp.end());
        reverse(temp.begin(), temp.end());

        int ptr = 0;
        p1 = tl.first;
        q1 = tl.second;
        q2 = tr.second;
        for (int j = q1; j < q2; j++)
        {
            grid[p1][j] = temp[ptr];
            ptr++;
        }
        p1 = tr.first;
        q1 = tr.second;
        p2 = br.first;
        for (int j = p1; j < p2; j++)
        {
            grid[j][q1] = temp[ptr];
            ptr++;
        }
        p1 = br.first;
        q1 = br.second;
        q2 = bl.second;
        for (int j = q1; j > q2; j--)
        {
            grid[p1][j] = temp[ptr];
            ptr++;
        }
        p1 = bl.first;
        q1 = bl.second;
        p2 = tl.first;

        for (int j = p1; j > p2; j--)
        {
            grid[j][q1] = temp[ptr];
            ptr++;
        }
        tl.first++, tl.second++;
        tr.first++, tr.second--;
        br.first--, br.second--;
        bl.first--, bl.second++;
    }
    return grid;
}
int main()
{
    vector<vector<int>>grid={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>>ans=rotateGrid(grid,2);
    for(auto it:grid){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}