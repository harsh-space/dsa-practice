#include<bits/stdc++.h>
using namespace std; 

int maxpay(int i, int n, vector<int>& ar, vector<vector<int>>& dp, int m){
    if(n == 0){ 
        return 0;
    }
    if(i > n || i > m){
        return 0;
    }
    if(dp[i][n] != -1) return dp[i][n];
    
    int ntk = maxpay(i + 1, n, ar, dp, m); 
    
    int t = INT_MIN;
    if(i <= n){
        int res = maxpay(i, n - i, ar, dp, m);
        if(res != INT_MIN) { 
            t = ar[i - 1] + res; 
        }
    }
    return dp[i][n] = max(t, ntk);
} 

int main(){
    int n = 4;
    vector<int> ar = {10, 20, 30, 40};
    int m = ar.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    cout << maxpay(1, n, ar, dp, m);
    return 0;
}