#include <bits/stdc++.h>
using namespace std;
int numberOfSubstrings(string s)
{
    int n = s.size();
    vector<int> freq(3, 0);
    int left = 0, cnt = 0;

    for (int right = 0; right < n; right++)
    {
        freq[s[right] - 'a']++;

        while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0)
        {
            cnt += (n - right);
            freq[s[left] - 'a']--;
            left++;
        }
    }
    return cnt;
}
int main()
{
    string s="aaabc";
    cout<<numberOfSubstrings(s);
    return 0;
}