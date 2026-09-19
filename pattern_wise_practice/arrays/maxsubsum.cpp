#include <bits/stdc++.h>
using namespace std;

int maximumCostSubstring(string s, string chars, vector<int> &vals)
{
    int i = 0, j = 0;
    int maxi = INT_MIN, winmax = 0;
    unordered_map<char, int> mp;
    // set<char>st;
    // for(char &ch :chars)st.insert(ch);
    for (int i = 0; i < chars.size(); i++)
    {
        // if(st.find(s[i])!=st.end()){
        //     mp[s[i]]=vals[i-1];
        // }
        mp[chars[i]] = vals[i];
    }
    while (j < s.size())
    {
        winmax += (mp.count(s[j]) > 0 ? mp[s[j]] : s[j] - 'a' + 1);
        if (winmax < 0)
        {
            j++;
            i = j;
            winmax = 0;
        }

        else
        {
            j++;
        }
        maxi = max(maxi, winmax);
    }
    return maxi;
}

int main()
{
    string s = "adaa";
    string chars = "d";
    vector<int> vals = {-1000};
    cout << maximumCostSubstring(s, chars, vals);
    return 0;
}