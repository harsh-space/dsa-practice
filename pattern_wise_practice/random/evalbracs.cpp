#include <bits/stdc++.h>
using namespace std;
string evaluate(string s, vector<vector<string>> &knowledge)
{
    string temp1 = "";
    string temp2 = "";
    vector<string> word;
    set<int> keyw_indices;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '(')
        {
            int j = i;
            while (j < s.size() && s[j] != ')')
            {
                if (s[j] != '(')
                    temp1 += s[j];
                j++;
            }
            if (temp1.empty() == false)
            {
                word.push_back(temp1);
                keyw_indices.insert(word.size() - 1);
            }
            i = j;
            temp1 = "";
        }
        else
        {
            int j = i;
            while (j < s.size() && s[j] != '(')
            {
                if (s[j] != ')')
                    temp2 += s[j];
                j++;
            }
            if (temp2.empty() == false)
                word.push_back(temp2);
            i = j;
            temp2 = "";
        }
    }
    unordered_map<string, string> mp;
    for (auto it : knowledge)
    {
        mp[it[0]] = it[1];
    }

    for (int i = 0; i < word.size(); i++)
    {
        if (keyw_indices.find(i) != keyw_indices.end())
        {
            if (mp.count(word[i]))
                word[i] = mp[word[i]];
            else
                word[i] = "?";
        }
    }
    string ans = "";
    for (auto it : word)
        ans += it;
    return ans;
}
int main()
{
    string s="(name)is(age)yearsold";
    vector<vector<string>>arr={{"name","bob"},{"age","two"}};
    cout<<evaluate(s,arr);
    return 0;
}