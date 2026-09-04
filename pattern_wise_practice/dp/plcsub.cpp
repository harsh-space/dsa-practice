#include<bits/stdc++.h>
using namespace std;

int main() {
    string p = "tvkbjpxyxxp";
    string q = "jpxytvk";
    int a = p.size();
    int b = q.size();
    
    int ans = 0;
    int max_i = 0;
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));
    
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(p[i-1] == q[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                if(dp[i][j] > ans) {
                    ans = dp[i][j];
                    max_i = i;
                }
            }
            else dp[i][j] = 0;
        }
    }
    
    cout << "Length: " << ans << endl;
    if (ans > 0) {
        string s = p.substr(max_i - ans, ans);
        cout << "Substring: " << s << endl;
    }
    
    return 0;
}
