#include<bits/stdc++.h>
using namespace std;

int mincn(int id, int n, vector<int>& d,vector<vector<int>>&dp){
    if(id >= d.size()){
        if(n == 0) return 0;
        return 1e9; 
    }
    if(dp[id][n]!=-1)return dp[id][n];
    int ntk = 0 + mincn(id + 1, n, d,dp);
    int tk = 1e9;   
    
    if(d[id] <= n) {
        int res = mincn(id, n - d[id], d,dp);
        if(res != 1e9) { 
            tk = 1 + res; 
        }
    }
    return dp[id][n]=min(tk, ntk);
}

int main(){
    int n = 20;
    vector<int> ar = {1, 2, 3, 4, 5};
    int m=ar.size();
    vector<vector<int>>dp(m,vector<int>(n+1,-1));
    cout << mincn(0, n, ar,dp); 
    return 0;
}