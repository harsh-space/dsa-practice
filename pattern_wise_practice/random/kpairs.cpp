#include <bits/stdc++.h>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
    if (k < 0)
        return 0;

    unordered_map<int, int> mp;
    set<int> used;
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.count(nums[i] - k))
        {
            if (used.find(nums[i] - k) == used.end())
            {
                cnt++;
                used.insert(nums[i] - k);
            }
        }
        if (mp.count(nums[i] + k))
        {
            if (used.find(nums[i]) == used.end())
            {
                cnt++;
                used.insert(nums[i]);
            }
        }
        mp[nums[i]] = i;
    }
    return cnt;
}

int main()
{
    vector<int>ans={3,1,4,1,5};
    cout<<findPairs(ans,2);
    return 0;
}