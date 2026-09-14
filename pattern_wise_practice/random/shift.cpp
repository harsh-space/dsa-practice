#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
    for(int i = 0; i < n; i++) {
        auto it = grid[i];
        int k = rowShift[i];
        reverse(it.begin(), it.begin() + k);
        reverse(it.begin() + k, it.end());
        reverse(it.begin(), it.end());
        grid[i] = it;
    }
    for(int i = 0; i < grid[0].size(); i++) {
        vector<int> it;
        for(int j = 0; j < n; j++) {
            it.push_back(grid[j][i]);
        }
        int k = colShift[i];
        reverse(it.begin(), it.begin() + k);
        reverse(it.begin() + k, it.end());
        reverse(it.begin(), it.end());
        for(int j = 0; j < n; j++) {
            grid[j][i] = it[j];
        }
    }
    return grid;
}

int main() {

    int n = 3; 
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> rowShift = {1, 2, 0}; 
    vector<int> colShift = {2, 0, 1}; 

    cout << "Original Grid:" << endl;
    for(const auto& row : grid) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }
    cout << endl;

    vector<vector<int>> result = cyclicShift(n, grid, rowShift, colShift);

    cout << "Shifted Grid:" << endl;
    for(const auto& row : result) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
