#include<bits/stdc++.h>
using namespace std;

string smallestPalindrome(string s)
{
    map<char, string> mp;
    for (char &c : s)
    {
        mp[c] += c;
    }
    string ans = "";
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (mp.count(c) != 0 && mp[c].size() % 2 != 0)
        {
            ans = c;
            break;
        }
    }
    for (char c = 'z'; c >= 'a'; c--)
    {
        if (mp.count(c) != 0)
        {
            int l = mp[c].size();
            int ptr = l / 2;
            string t = mp[c].substr(0, ptr);

            ans = t + ans + t;
        }
    }
    return ans;
}

int main(){
    string s="babab";
    cout<<smallestPalindrome(s);
    return 0;
}