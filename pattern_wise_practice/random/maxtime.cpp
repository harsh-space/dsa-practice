#include <bits/stdc++.h>
using namespace std;
string largestTimeFromDigits(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (auto it : arr)
        mp[it]++;
    string h1 = "";
    string h2 = "";
    string m1 = "";
    string m2 = "";
    // set<int>used;
    vector<int> hr1 = {2, 1, 0};
    vector<int> hr2 = {3, 2, 1, 0};
    vector<int> hr = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> mm1 = {5, 4, 3, 2, 1, 0};
    vector<int> mm2 = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for (int i = 0; i < hr1.size(); i++)
    {
        if (find(arr.begin(), arr.end(), hr1[i]) != arr.end() && mp[hr1[i]] > 0)
        {
            h1 = to_string(hr1[i]);
            // used.insert(hr1[i]);
            mp[hr1[i]] -= 1;
            break;
        }
    }
    if (h1 == "")
        return "";
    if (h1 == "0" || h1 == "1")
    {
        for (int i = 0; i < hr.size(); i++)
        {
            if (find(arr.begin(), arr.end(), hr[i]) != arr.end() && mp[hr[i]] > 0)
            {
                h2 = to_string(hr[i]);
                // used.insert(hr2[i]);
                mp[hr[i]] -= 1;
                break;
            }
        }
        if (h2 == "")
            return "";
    }
    else
    {
        for (int i = 0; i < hr2.size(); i++)
        {
            if (find(arr.begin(), arr.end(), hr2[i]) != arr.end() && mp[hr2[i]] > 0)
            {
                h2 = to_string(hr2[i]);
                // used.insert(hr2[i]);
                mp[hr2[i]] -= 1;
                break;
            }
        }
        if (h2 == "")
            return "";
    }

    for (int i = 0; i < mm1.size(); i++)
    {
        if (find(arr.begin(), arr.end(), mm1[i]) != arr.end() && mp[mm1[i]] > 0)
        {
            m1 = to_string(mm1[i]);
            // used.insert(mm1[i]);
            mp[mm1[i]] -= 1;
            break;
        }
    }
    if (m1 == "")
        return "";

    for (int i = 0; i < mm2.size(); i++)
    {
        if (find(arr.begin(), arr.end(), mm2[i]) != arr.end() && mp[mm2[i]] > 0)
        {
            m2 = to_string(mm2[i]);
            // used.insert(mm2[i]);
            mp[mm2[i]] -= 1;
            break;
        }
    }
    if (m2 == "")
        return "";
    return h1 + h2 + ":" + m1 + m2;
}
int main()
{   vector<int>arr={0,4,0,0};
    cout<<largestTimeFromDigits(arr);

    return 0;
}