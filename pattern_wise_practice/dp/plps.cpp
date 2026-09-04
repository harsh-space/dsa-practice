#include <bits/stdc++.h>
using namespace std;

int lps(int i, int j, const string& s, vector<vector<int>>& dp) {
    if (i > j) return 0;

    if (i == j) return 1;

    if (dp[i][j] != -1) return dp[i][j];
    if (s[i] == s[j]) {
        dp[i][j] = 2 + lps(i + 1, j - 1, s, dp);
    } 

    else {
        dp[i][j] = max(lps(i + 1, j, s, dp), lps(i, j - 1, s, dp));
    }
    
    return dp[i][j];
}

string plps(int i,int j,string&s,vector<vector<int>>&dp){
    if(i>j)return "";
    if(i==j)return string(1,s[i]);
    if(s[i]==s[j])return s[i]+plps(i+1,j-1,s,dp)+s[j];
    if(dp[i+1][j]>=dp[i][j-1]){
        return plps(i+1,j,s,dp);
    }else{
        return plps(i,j-1,s,dp);
    }
}

int main() {
    string s = "ssabbxcdss";
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    
    cout << lps(0, n - 1, s, dp) << endl; 
    cout<<plps(0,n-1,s,dp);
    return 0;
}