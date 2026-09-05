#include<bits/stdc++.h>
using namespace std;

int editdist(int i,int j,int m,int n,string &s,string&r,vector<vector<int>>&dp){
    if(j==0)return i;
    if(i==0)return j;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i-1]==r[j-1])return dp[i][j]=editdist(i-1,j-1,m,n,s,r,dp);
    // string ns=s+r[j];
    return dp[i][j]=1+min({editdist(i-1,j-1,m,n,s,r,dp),editdist(i,j-1,m,n,s,r,dp),editdist(i-1,j,m,n,s,r,dp)});
}

int main(){
    string a="horse";
    string b="rose";
    int m=a.size();
    int n=b.size();
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    cout<<editdist(m,n,m,n,a,b,dp);
    return 0;
}