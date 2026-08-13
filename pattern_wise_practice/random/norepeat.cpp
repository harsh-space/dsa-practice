#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int i = 0, j = 0;
    int ans = 0;
    unordered_map<char, int> mp;
    while (j < s.size())
    {
        mp[s[j]]++;
        while (mp[s[j]] > 1)
        {
            mp[s[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main()
{
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}