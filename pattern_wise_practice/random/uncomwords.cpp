#include <bits/stdc++.h>
using namespace std;
void uncom(vector<string> &st, string s)
{
    string temp = "";
    int i = 0, j = 0;
    while (i <= j && j < s.size())
    {
        if (s[j] == ' ' && !temp.empty())
        {
            st.push_back(temp);
            temp = "";
            j++;
            i = j;
        }
        else
        {
            temp += s[j];
            j++;
        }
    }
    if (!temp.empty())
        st.push_back(temp);
}
vector<string> uncommonFromSentences(string s1, string s2)
{
    vector<string> a;
    vector<string> b;
    uncom(a, s1);
    uncom(b, s2);
    unordered_map<string, int> mp;
    unordered_map<string, int> mp2;
    for (auto it : a)
        mp[it]++;
    for (auto it : b)
        mp2[it]++;
    vector<string> ans;
    for (auto it : mp)
    {
        if (it.second == 1 && mp2[it.first] == 0)
            ans.push_back(it.first);
    }
    for (auto it : mp2)
    {
        if (it.second == 1 && mp[it.first] == 0)
            ans.push_back(it.first);
    }

    return ans;
}
int main()
{
    string s1="this apple is sweet";
    string s2="this apple is sour";
    vector<string>ans=uncommonFromSentences(s1,s2);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}