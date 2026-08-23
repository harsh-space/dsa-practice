#include<bits/stdc++.h>
using namespace std;

int rb(int n,vector<int>&ar,vector<int>&dp){
    if(n==0)return ar[n];
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    int p=ar[n]+rb(n-2,ar,dp);
    int np=rb(n-1,ar,dp);
    return dp[n]=max(np,p);
}

int main(){
    vector<int>ar={10,30,4,40,60,80};
    int n=ar.size();
    vector<int>dp(n,-1);
    cout<<rb(n-1,ar,dp);
    return 0;
}