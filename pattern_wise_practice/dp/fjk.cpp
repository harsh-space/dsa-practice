#include<bits/stdc++.h>
using namespace std;
int fjk(int n,vector<int>&h,int k,vector<int>&dp){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int minenergy=INT_MAX;
    for(int i=1;i<=k;i++){
        if(n-i>=0){
            int tempene=fjk(n-i,h,k,dp)+abs(h[n]-h[n-i]);
            minenergy=min(minenergy,tempene);
        }
        
    }
    return dp[n]=minenergy;
}
int main(){
    vector<int>h={10,20,3,90,70,80,50,40,60,100,70,10,5,20};
    int k=4;
    int n=h.size();
    vector<int>dp(n,-1);
    cout<<fjk(n-1,h,k,dp);
    return 0;
}