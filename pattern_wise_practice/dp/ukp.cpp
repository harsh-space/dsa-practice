#include <bits/stdc++.h>
using namespace std;

int maxval(int id, int W, int n, vector<int>& w, vector<int>& v,vector<vector<int>>&dp){
    if (id == n) return 0;  
    if(dp[id][W]!=-1)return dp[id][W];
    int ntk = maxval(id + 1, W, n, w, v,dp);
    int t = -1e9; 
    if (w[id] <= W) {
        t = v[id] + maxval(id, W - w[id], n, w, v,dp); 
    }
    return dp[id][W]=max(ntk, t);
}

int main()
{
    vector<int> w = {2, 5, 7, 8, 9};
    vector<int> v = {10, 20, 50, 60, 70};
    int W = 16;
    int n = w.size();
    vector<vector<int>>dp(n,vector<int>(W+1,-1));
    cout << maxval(0, W, n, w, v,dp);
    return 0;
}