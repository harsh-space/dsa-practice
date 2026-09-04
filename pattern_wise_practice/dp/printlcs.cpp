#include<bits/stdc++.h>
using namespace std;

int plcs(int i,int j,string p,string q,vector<vector<int>>&dp){
    if(i<0||j<0)return 0;
    if(dp[i+1][j+1]!=-1)return dp[i+1][j+1];
    if(p[i]==q[j])return dp[i+1][j+1]=1+plcs(i-1,j-1,p,q,dp);
    return dp[i+1][j+1]=max(plcs(i-1,j,p,q,dp),plcs(i,j-1,p,q,dp));
}

int main(){
    string p = "acde";
    string q = "adfgce";
    int a = p.size();
    int b = q.size();
    string ans="";
    vector<vector<int>>dp(a+1,vector<int>(b+1,-1));

    plcs(a - 1, b - 1, p, q, dp);
    
    int i = a, j = b;
    while(i >= 1 && j >= 1){
        
        if(p[i-1] == q[j-1]){
            ans = p[i-1] + ans;
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    
    cout << ans; 
    return 0;
}