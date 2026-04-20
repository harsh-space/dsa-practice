#include<bits/stdc++.h>
using namespace std;

vector<int> temp;
vector<vector<int>> ans;
vector<bool> used = vector<bool>(10, false);

void helper(int sum, int start, int k) {
    if (temp.size() == k && sum == 0) {
        ans.push_back(temp);
        return;
    }
    for (int i = start; i <= 9; i++) {
        if (used[i])
            continue;

        if (i <= sum) {
            used[i] = true;
            temp.push_back(i);
            helper(sum - i, i + 1, k);
            temp.pop_back();
            used[i] = false;
        }
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    helper(n, 1, k);
    return ans;
}

int main() {
    int k = 3, n = 9; 

    vector<vector<int>> result = combinationSum3(k, n);

    for (auto &vec : result) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}