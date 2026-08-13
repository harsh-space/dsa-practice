#include <bits/stdc++.h>
using namespace std;
int maximumLength(string s)
{
    unordered_map<string, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        string t = "";
        for (int j = i; j < s.size(); j++)
        {
            if (s[i] != s[j])
                break;
            t += s[j];
            mp[t]++;
        }
    }
    int mx = 0;
    for (auto &it : mp)
    {
        if (it.second >= 3)
            mx = max(mx, (int)it.first.size());
    }
    if (mx == 0)
        return -1;
    return mx;
}

int main()
{   
    string s="aaaa";
    cout<<maximumLength(s);
    return 0;
}