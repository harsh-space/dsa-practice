#include <bits/stdc++.h>
using namespace std;

int arr[501][501];
int helper(string &s, string &r, int p, int q)
{
    if (p == 0 || q == 0)
        return 0;
    if (arr[p][q] != -1)
        return arr[p][q];

    if (s[p - 1] == r[q - 1])
        return arr[p][q] = 1 + helper(s, r, p - 1, q - 1);
    else
        return arr[p][q] = max(helper(s, r, p - 1, q), helper(s, r, p, q - 1));
}
int minInsertions(string s)
{
    memset(arr, -1, sizeof(arr));
    string r = s;
    reverse(r.begin(), r.end());
    return s.size() - helper(s, r, s.size(), r.size());
}

int main(){
    cout<<minInsertions("leetcode");
    
    return 0;
}