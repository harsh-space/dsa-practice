#include <bits/stdc++.h>
using namespace std;

int comb(int id,int s,vector<int>&ar,vector<vector<int>>&dp){

    if(id==ar.size()){
        if(s==0)return 1;
        return 0;
    }
    if(dp[id][s]!=-1)return dp[id][s];
    int ntk=comb(id+1,s,ar,dp);
    int tk=0;
    if(ar[id]<=s)tk+=comb(id,s-ar[id],ar,dp);
    return dp[id][s]=tk+ntk;
};

int main()
{
    int s = 20;
    vector<int> ar = {1, 2, 3, 4, 5};
    int n = ar.size();
    vector<vector<int>>dp(n,vector<int>(s+1,-1));
    cout<<comb(0,s,ar,dp);
    return 0;
}
