#include<bits/stdc++.h>
using namespace std;
bool ss(int i, int t, int n, vector<int>& ar, vector<vector<int>>& dp) {
    if (t == 0) return true;            
    if (i >= n || t < 0) return false;  
    
    if (dp[i][t] != -1) return dp[i][t];

    bool t1 = ss(i + 1, t - ar[i], n, ar, dp);
   
    bool nt = ss(i + 1, t, n, ar, dp);

    return dp[i][t] = t1 || nt;
}
int main(){
    vector<int>ar={1,5,7,9};
    auto s=accumulate(ar.begin(),ar.end(),0);
    int t = s/2;
    int n = ar.size();

    vector<vector<int>> dp(n, vector<int>(t + 1, -1));
    
    cout << (ss(0, t, n, ar, dp) ? "True" : "False") << endl;
    return 0;

}