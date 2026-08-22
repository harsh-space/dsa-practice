#include<bits/stdc++.h> 
using namespace std; 


int fg(int n, vector<int>& dp, const vector<int>& h) { 
    if(n == 0) return 0; 
    if(dp[n] != -1) return dp[n]; 
    
    int left = fg(n - 1, dp, h) + abs(h[n] - h[n - 1]); 
    int right = INT_MAX;
    if (n > 1) {
        right = fg(n - 2, dp, h) + abs(h[n] - h[n - 2]); 
    }
    
    return dp[n] = min(left, right); 
} 

int main() { 
    vector<int> h = {10, 20, 10, 5,50}; 
    int n = h.size();
    vector<int> dp(n, -1); 
    
    cout << fg(n - 1, dp, h); // Outputs: 20
    return 0; 
}
