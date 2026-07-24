#include <bits/stdc++.h>
using namespace std;
vector<string> findRepeatedDnaSequences(string s)
{
    if (s.size() < 10)
        return {};

    unordered_map<string, int> mp;
    vector<string> st;

    string t = s.substr(0, 10);
    mp[t]++;
    int j = 10;

    while (j < s.size())
    {
        t.erase(0, 1);
        t += s[j];
        j++;

        mp[t]++;
        if (mp[t] == 2)
        {
            st.push_back(t);
        }
    }
    return st;
}
int main()
{
    string s="AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string>st=findRepeatedDnaSequences(s);
    for(string str:st)cout<<str<<" ";
}