#include<bits/stdc++.h>
using namespace std;
bool isPal(string s, int i, int j) {
    if (i >= j) return true;
    if (s[i] != s[j]) return false;
    return isPal(s, i + 1, j - 1);
}

int solve(string s, int i, int j) {
    if (i > j) return 0;
    if (i == j) return 1;

    if (isPal(s, i, j)) {
        return j - i + 1;
    }

    return max(solve(s, i + 1, j), solve(s, i, j - 1));
}

int main() {
    string s = "babad";
    cout << solve(s, 0, s.length() - 1);
    return 0;
}
