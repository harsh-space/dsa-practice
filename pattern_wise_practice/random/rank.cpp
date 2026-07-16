#include <bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int> &arr)
{
    vector<int> cpy = arr;
    sort(arr.begin(), arr.end());
    int cnt = 1;
    unordered_map<int, int> mp;
    for (int i : arr)
    {
        if (mp.count(i) == 0)
        {
            mp[i] = cnt;
            cnt++;
        }
    }
    vector<int> ans;
    for (int i : cpy)
    {
        ans.push_back(mp[i]);
    }
    return ans;
}
int main()
{
    vector<int>ar={40,10,30,20};
    vector<int>ans=arrayRankTransform(ar);
    for(int i:ans)cout<<i<<" ";
    return 0;
}