#include<bits/stdc++.h>
using namespace std;

// int longcc(int i, int j, string &p, string &q, vector<vector<int>> &dp) {
//     if (i < 0 || j < 0) return 0;
    
//     if (dp[i + 1][j + 1] != -1) return dp[i + 1][j + 1];
    
//     if (p[i] == q[j]) {
//         return dp[i + 1][j + 1] = 1 + longcc(i - 1, j - 1, p, q, dp);
//     }
    
//     return dp[i + 1][j + 1] = 0;
// }

int main() {
    string p = "accfdge";
    string q = "adcfdegce";
    int a = p.size();
    int b = q.size();
    int ans=INT_MIN;
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(p[i-1]==q[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                ans=max(ans,dp[i][j]);
            }
            else dp[i][j]=0;
        }
    }
    cout<<ans;
    return 0;
}