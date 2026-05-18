#include <bits/stdc++.h>
using namespace std;

string bestHand(vector<int> &ranks, vector<char> &suits)
{
    unordered_map<int, int> mp;
    for (int i : ranks)
        mp[i]++;

    unordered_map<char, int> nmp;
    for (char c : suits)
        nmp[c]++;
    for (auto it : nmp)
    {
        if (it.second == 5)
            return "Flush";
    }

    for (auto it : mp)
    {
        if (it.second >= 3)
            return "Three of a Kind";
    }
    for (auto it : mp)
    {
        if (it.second == 2)
            return "Pair";
    }
    return "High Card";
}

int main()
{
    vector<int> r = {13, 2, 3, 1, 9};
    vector<char> s = {'a','a','a','a','a'};
    cout << bestHand(r,s);
    return 0;
}