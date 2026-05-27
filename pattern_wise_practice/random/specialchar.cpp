#include <bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word)
{
    vector<int> l(26, 0);
    vector<int> u(26, 0);
    unordered_map<char, vector<int>> mp;
    for (int i = 0; i < word.size(); i++)
    {
        if (islower(word[i]))
        {
            l[word[i] - 'a']++;
        }
        else if (!islower(word[i]))
        {
            u[word[i] - 'A']++;
        }
    }
    for (int i = 0; i < word.size(); i++)
    {
        mp[word[i]].push_back(i);
    }
    int spc = 0;
    for (int i = 0; i < 26; i++)
    {
        if (l[i] > 0 && u[i] > 0)
        {
            auto tl = mp[i + 'a'];
            auto tu = mp[i + 'A'];
            int t = tu[0];
            bool flag = true;
            for (int i : tl)
            {
                if (i > t)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                spc++;
        }
    }
    return spc;
}

int main()
{
    string s="aaAbcBC";
    cout<<numberOfSpecialChars(s);
    return 0;
}