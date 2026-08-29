#include<bits/stdc++.h>
using namespace std;

int cnt(int n,int t,vector<int>&ar,vector<vector<int>>&dp){
    if(n==0){
        if(t==0 && ar[0]==0) return 2; 
        if(t==0 || ar[0]==t) return 1;
        return 0;
    }
    if(dp[n][t]!=-1)return dp[n][t];
    int ntk=cnt(n-1,t,ar,dp); 
    int tk=0;                 
    if(ar[n]<=t)tk=cnt(n-1,t-ar[n],ar,dp);
    return dp[n][t]=ntk+tk;  
}

int main(){
    vector<int>ar={5,2,6,4};
    int d=3;
    int s=accumulate(ar.begin(),ar.end(),0);
    
    if((s + d) % 2 != 0 || s < d) {
        cout << 0 << endl; 
        return 0;
    }
    int target = (s + d) / 2;

    vector<vector<int>>dp(ar.size(),vector<int>(target+1,-1));

    cout << cnt(ar.size()-1,target,ar,dp) << endl;
    
    return 0;
}
