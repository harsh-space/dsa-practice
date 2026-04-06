#include<bits/stdc++.h>
using namespace std;
int dp[1001];

int hrob(vector<int>&arr,int n){
    if(n>=arr.size())return 0;
    if(dp[n]!=-1)return dp[n];
    int t=arr[n]+hrob(arr,n+2);
    int l=hrob(arr,n+1);
    return dp[n]=max(t,l);
}
int main(){
    memset(dp,-1,sizeof(dp));
    vector<int>arr={10,12,14,16,18};
    hrob(arr,0);
    cout<<dp[0];
    return 0;
}