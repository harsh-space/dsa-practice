#include <bits/stdc++.h>
using namespace std;

// int cntsub(int i, int j, int m, int n, string &s, string &r)
// {
//     if (i < 0)
//         return 0;
//     if (j < 0)
//         return 1;
//     if (s[i] == r[j])
//     {
//         return cntsub(i - 1, j, m, n, s, r) + cntsub(i, j - 1, m, n, s, r);
//     }

//     return cntsub(i - 1, j, m, n, s, r);
// }

int main()
{
    string s1 = "bagabcahgjbkal";
    string s2 = "bag";
    int m = s1.size();
    int n = s2.size();
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    for(int i=0;i<=m;i++)dp[i][0]=1;
    for(int i=1;i<=n;i++)dp[0][i]=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout << dp[m][n];
    return 0;
}