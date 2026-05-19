#include <bits/stdc++.h>
using namespace std;
int arithmeticTriplets(vector<int> &nums, int diff)
{
    int cnt = 0;
    unordered_map<int, bool> mp;
    for (int i = 0; i < nums.size(); i++)
        mp[nums[i]] = true;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i] - diff] && mp[nums[i] + diff])
            cnt++;
    }
    return cnt;
}
int main()
{
    vector<int>arr={0,1,4,6,7,10};
    int diff=3;
    cout<<arithmeticTriplets(arr,diff);
    return 0;
}