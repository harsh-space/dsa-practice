#include <bits/stdc++.h>
using namespace std;
int findChampion(std::vector<std::vector<int>> &grid)
{
    int n = grid.size();

    for (int i = 0; i < n; ++i)
    {
        bool is_champion = true;
        for (int j = 0; j < n; ++j)
        {
            if (i != j && grid[j][i] == 1)
            {
                is_champion = false;
                break;
            }
        }
        if (is_champion)
        {
            return i;
        }
    }

    return -1;
}
int main()
{

    vector<vector<int>>g={{0,1},{0,0}};
    cout<<findChampion(g);
    return 0;
}