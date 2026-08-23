#include<bits/stdc++.h>
using namespace std;

int paths(int i,int j,int m,int n,vector<vector<int>>&dp){
    if(i==m-1 && j==n)return 1;
    if(i>=m || j>=n)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]= paths(i,j+1,m,n,dp)+paths(i+1,j,m,n,dp);
}

int main(){
    vector<vector<int>>dp(4,vector<int>(3,-1));
    cout<<paths(0,0,4,3,dp);
    return 0;
}