#include <bits/stdc++.h>
using namespace std;
int maxSubarrayLength(vector<int> &nums, int k)
{
    int i = 0, j = 0;
    unordered_map<int, int> mp;
    int ans = 0;

    while (j < nums.size())
    {
        mp[nums[j]]++;
        while (mp[nums[j]] > k)
        {
            mp[nums[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }

    return ans;
}
int main()
{
    vector<int>ar={1,2,3,1,2,3,1,2};
    int k=2;
    cout<<maxSubarrayLength(ar,k);

    return 0;
}