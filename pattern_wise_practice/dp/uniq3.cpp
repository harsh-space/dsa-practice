#include <bits/stdc++.h>
using namespace std;

int paths(int si, int sj, int ei, int ej, int m, int n, int empty, vector<vector<int>>& grid) {
    if (si < 0 || sj < 0 || si >= m || sj >= n) return 0;
    if (grid[si][sj] == -1) return 0;
    if (si == ei && sj == ej) {
        return (empty == 0) ? 1 : 0;
    }
    int original = grid[si][sj];
    grid[si][sj] = -1;

    int totalPaths = paths(si + 1, sj, ei, ej, m, n, empty - 1, grid) +
                     paths(si, sj + 1, ei, ej, m, n, empty - 1, grid) +
                     paths(si - 1, sj, ei, ej, m, n, empty - 1, grid) +
                     paths(si, sj - 1, ei, ej, m, n, empty - 1, grid);
    grid[si][sj] = original;

    return totalPaths;
}


int uniquePathsIII(vector<vector<int>>& grid) {
    int si = 0, sj = 0;
    int ei = 0, ej = 0;
    int m = grid.size();
    int n = grid[0].size();
    int empty = 1; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                si = i; 
                sj = j;
            } else if (grid[i][j] == 2) {
                ei = i; 
                ej = j;
            } else if (grid[i][j] == 0) {
                empty++; 
            }
        }
    }

    return paths(si, sj, ei, ej, m, n, empty, grid);
}

int main() {
    vector<vector<int>> grid = {
        {1, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 2, -1}
    };
    int result = uniquePathsIII(grid);
    cout << "Total unique paths: " << result << endl;

    return 0;
}
