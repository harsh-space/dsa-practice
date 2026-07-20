#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
{
    int m = grid.size();
    int n = grid[0].size();
    int total = m * n;

    k = k % total;
    if (k == 0)
        return grid;
    vector<int> ar;
    for (auto &row : grid)
    {
        for (int val : row)
        {
            ar.push_back(val);
        }
    }
    reverse(ar.begin(), ar.end());
    reverse(ar.begin(), ar.begin() + k);
    reverse(ar.begin() + k, ar.end());
    int ptr = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = ar[ptr++];
        }
    }

    return grid;
}
int main(){
    int k=4;
    vector<vector<int>>grid={{1,2,3}, {4,5,6}, {7,8,9}};
    shiftGrid(grid,k);
    for(auto it:grid){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}