#include <bits/stdc++.h>
using namespace std;

int passwordStrength(string password)
{
    unordered_map<char, bool> mpa;
    unordered_map<char, bool> mpA;
    unordered_map<char, bool> mp1;
    unordered_map<char, bool> mps;
    for (char c : password)
    {
        if (c >= 'a' && c <= 'z' && mpa.count(c) == 0)
            mpa[c] = true;
        if (c >= 'A' && c <= 'Z' && mpA.count(c) == 0)
            mpA[c] = true;
        if (c >= '0' && c <= '9' && mp1.count(c) == 0)
            mp1[c] = true;
        if ((c == '!' || c == '@' || c == '#' || c == '$') && mps.count(c) == 0)
            mps[c] = true;
    }
    int ans = 0;
    int a = mpa.size();
    int A = mpA.size();
    int d = mp1.size();
    int s = mps.size();
    ans = (a * 1) + (A * 2) + (d * 3) + (s * 5);
    return ans;
}
int main()
{
    string s="aA1!";
    cout<<passwordStrength(s);
    return 0;
}