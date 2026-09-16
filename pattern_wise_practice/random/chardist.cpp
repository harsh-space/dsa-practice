#include <bits/stdc++.h>
using namespace std;
bool checkDistances(string s, vector<int> &distance)
{
    unordered_map<char, pair<int, int>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp.count(s[i]) > 0)
            mp[s[i]].second = i;
        else
            mp[s[i]].first = i;
    }
    // vector<int>hash(26,0);
    for (char c : s)
    {
        int ch = c - 'a';
        if (distance[ch] != mp[c].second - mp[c].first - 1)
            return false;
    }
    return true;
}
int main()
{
    string s="abaccb";
    vector<int>distance={1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cout<<checkDistances(s,distance);
    return 0;
}