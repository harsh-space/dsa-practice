#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s, int k)
{
    int n = s.size();
    if (n < k)
        return 0;
    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'a']++;
    for (int i = 0; i < n; i++)
    {
        if (freq[s[i] - 'a'] < k)
        {
            int leftpart = longestSubstring(s.substr(0, i), k);
            int j = i + 1;
            while (j < n && freq[s[j] - 'a'] < k)
                j++;
            int rightpart = longestSubstring(s.substr(j), k);
            return max(leftpart, rightpart);
        }
    }
    return n;
}
int main()
{
    string s="aaabb";
    int k=3;
    cout<<longestSubstring(s,k);
    return 0;
}