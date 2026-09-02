#include<bits/stdc++.h>
using namespace std;

int eqs(int id, vector<int>& ar, int s, vector<vector<int>>& dp, int offset) {

    if (id == ar.size()) {
        return (s == 0) ? 1 : 0;
    }
    if (dp[id][s + offset] != -1) {
        return dp[id][s + offset];
    }
    return dp[id][s + offset] = eqs(id + 1, ar, s - ar[id], dp, offset) + 
                               eqs(id + 1, ar, s + ar[id], dp, offset);
}

int main() {
    int s = 3;
    vector<int> ar = {1, 1, 1, 1, 1};
    int n = ar.size();

    int total_sum = 0;
    for(int num : ar) total_sum += num;
    if (abs(s) > total_sum) {
        cout << 0;
        return 0;
    }
    int offset = total_sum;
    vector<vector<int>> dp(n, vector<int>(2 * total_sum + 1, -1));

    cout << eqs(0, ar, s, dp, offset); 
    return 0;
}