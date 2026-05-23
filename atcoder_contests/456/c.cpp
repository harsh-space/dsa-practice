
/*
    C - Not Adjacent
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given a string S consisting only of:
    'a', 'b', and 'c'.

    Find the number of non-empty substrings such that
    no two adjacent characters in the substring are equal.

    Since the answer can be large, output it modulo 998244353.

    Two substrings are considered different if they come
    from different positions, even if their contents are identical.

    --------------------------------------------------

    Constraints:
    - 1 <= |S| <= 3 × 10^5
    - S contains only 'a', 'b', 'c'

    --------------------------------------------------

    Input:
    S

    Output:
    Number of valid substrings modulo 998244353.

    --------------------------------------------------

    Sample Input 1:
    abbc

    Sample Output 1:
    6

    Explanation:
    Valid substrings:
    a
    b
    b
    c
    ab
    bc

    --------------------------------------------------

    Sample Input 2:
    cabcabcbcaccacbcbcaabacbacaabccacbccbcacbacbacabcacabcaccaaaaabababcbabacaccabbcacbcbcbcababcbcbabca

    Sample Output 2:
    760
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int MOD = 998244353;

    long long ans = 1;
    long long len = 1;

    for(int i = 1; i < s.size(); i++) {

        if(s[i] != s[i-1]) {
            len++;
        }
        else {
            len = 1;
        }

        ans = (ans + len) % MOD;
    }

    cout << ans;

    return 0;
}