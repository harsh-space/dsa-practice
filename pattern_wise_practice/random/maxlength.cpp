#include <bits/stdc++.h>
using namespace std;
int maximumLengthSubstring(string s)
{
    vector<int> hash(26, 0);
    int i = 0, j = 0;
    int ans = 0;
    while (i <= j && j < s.size())
    {
        hash[s[j] - 'a']++;
        char c = s[j];
        while (hash[c - 'a'] > 2)
        {
            hash[s[i] - 'a']--;
            i++;
        }
        j++;
        ans = max(ans, j - i);
    }
    return ans;
}
int main()
{
    string s="abcbbcd";
    cout<<maximumLengthSubstring(s);
    return 0;
}