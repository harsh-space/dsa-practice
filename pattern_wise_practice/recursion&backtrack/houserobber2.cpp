#include<bits/stdc++.h>
using namespace std;
int dp[1001];
int dp2[1001];

int hrob(vector<int>&arr,int n){
    if(n>=arr.size()-1)return 0;
    if(dp[n]!=-1)return dp[n];
    int t=arr[n]+hrob(arr,n+2);
    int l=hrob(arr,n+1);
    return dp[n]=max(t,l);
}
int hrob2(vector<int>&arr,int n){
    if(n>=arr.size())return 0;
    if(dp2[n]!=-1)return dp2[n];
    int t=arr[n]+hrob2(arr,n+2);
    int l=hrob2(arr,n+1);
    return dp2[n]=max(t,l);
}
int main(){
    memset(dp,-1,sizeof(dp));
    memset(dp2,-1,sizeof(dp2));
    vector<int>arr={10,12,14,16,18};
    hrob(arr,0);
    hrob2(arr,1);
    cout<<max(dp[0],dp2[1]); 
    return 0;
}