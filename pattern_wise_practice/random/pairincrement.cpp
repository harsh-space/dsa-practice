#include <bits/stdc++.h>
using namespace std;

vector<int> numberOfPairs(vector<int> &nums1, vector<int> &nums2, vector<vector<int>> &queries)
{
    unordered_map<int, int> mp;
    for (int i : nums2)
        mp[i]++;
    vector<int> ans;
    for (auto &it : queries)
    {
        if (it[0] == 1)
        {
            for (int i = it[1]; i <= it[2]; i++)
            {
                mp[nums2[i]]--;
                if (mp[nums2[i]] == 0)
                    mp.erase(nums2[i]);
                nums2[i] += it[3];
                mp[nums2[i]]++;
            }
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < nums1.size(); i++)
            {
                if (mp.count(it[1] - nums1[i]))
                    cnt += mp[it[1] - nums1[i]];
            }
            ans.push_back(cnt);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    vector<vector<int>> nums = {{2, 5}, {1, 0, 0, 2}, {2, 5}};
    vector<int> ans = numberOfPairs(nums1,nums2,nums);
    for(int i:ans)cout<<i<<" ";
    return 0;
}