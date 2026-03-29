#include <bits/stdc++.h>
using namespace std;
unordered_map<char, string>mp={
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};
void lettercomb(int ptr, string s, vector<char> &temp, vector<vector<char>> &ans)
{
    if (temp.size() == s.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < mp[s[ptr]].size(); i++)
    {
        temp.push_back(mp[s[ptr]][i]);
        lettercomb(ptr+1,s,temp,ans);
        temp.pop_back();
    }
}

int main()
{
    string s = "2";
    vector<char> temp;
    vector<vector<char>> ans;
    lettercomb(0, s, temp, ans);
    for (auto it : ans)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }
    return 0;
}