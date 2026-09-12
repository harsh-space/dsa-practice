#include <bits/stdc++.h>
using namespace std;

bool check(int i, int j, int k, string& p, string& q, string& r, vector<vector<vector<int>>>& dp) {
    if (i < 0 && j < 0 && k < 0) return 1;
    if (i < 0) {
        int a = j;
        while (a >= 0) {
            if (q[a] != r[k]) return 0;
            else {
                a--, k--;
            }
        }
        return 1;
    }
    if (j < 0) {
        int a = i;
        while (a >= 0) {
            if (p[a] != r[k]) return 0;
            else {
                a--, k--;
            }
        }
        return 1;
    }
    if (dp[i][j][k] != -1) return dp[i][j][k];
    if (p[i] == q[j] && p[i] == r[k]) {
        return dp[i][j][k] = check(i - 1, j, k - 1, p, q, r, dp) || check(i, j - 1, k - 1, p, q, r, dp);
    }
    int pc = 0;
    int qc = 0;
    if (p[i] == r[k]) {
        pc = check(i - 1, j, k - 1, p, q, r, dp);
    }
    if (q[j] == r[k]) {
        qc = check(i, j - 1, k - 1, p, q, r, dp);
    }
    return dp[i][j][k] = pc || qc;
}

bool fun(string s1, string s2, string s3) {
    int m = s1.size();
    int n = s2.size();
    int o = s3.size();
    if (m + n != o) return false;
    vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(o, -1)));
    return check(m - 1, n - 1, o - 1, s1, s2, s3, dp) == 1;
}

int main() {
    string s1 = "aabcc";
    string s2 = "dbbca";
    string s3 = "aadbbcbcac";
    
    cout << "Test 1: " << (fun(s1, s2, s3) ? "True" : "False") << endl;
    string s4 = "aabcc";
    string s5 = "dbbca";
    string s6 = "aadbbbaccc";
    return 0;
}
