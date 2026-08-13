#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k) {
    vector<vector<int>> res(mat.size(), vector<int>(mat[0].size(), 0));
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int s = 0;
            int start_f = max(0, i - k);
            int end_f = min(n - 1, i + k);
            int start_g = max(0, j - k);
            int end_g = min(m - 1, j + k);
            for (int f = start_f; f <= end_f; f++) {
                for (int g = start_g; g <= end_g; g++) {
                    s += mat[f][g];
                }
            }
            res[i][j] = s;
        }
    }
    return res;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int k = 1;

    vector<vector<int>> result = matrixBlockSum(mat, k);
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
