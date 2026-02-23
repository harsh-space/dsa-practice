#include <bits/stdc++.h>

using namespace std;
string maximumXor(string s, string t)
{
    unordered_map<int, int> mp;
    for (auto it : t)
        mp[it - '0']++;

    string ns = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            if (mp[1] > 0)
            {
                ns += '1';
                mp[1]--;
            }
            else
            {
                ns += '0';
                mp[0]--;
            }
        }
        else
        {
            if (mp[0] > 0)
            {
                ns += '0';
                mp[0]--;
            }
            else
            {
                ns += '1';
                mp[1]--;
            }
        }
    }

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] != ns[i]) ? '1' : '0';
    }
    return ans;
}

int main(){
    string s="0110",t="0110";
    cout<<maximumXor(s,t);
    return 0;
}