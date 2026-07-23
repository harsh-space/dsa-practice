#include <bits/stdc++.h>
using namespace std;
vector<int> getAverages(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans(n, -1);
    if (2 * k + 1 > n)
        return ans;
    vector<long long> pref(n, 0);
    pref[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + nums[i];
    }
    for (int i = k; i < n - k; i++)
    {
        if (i - k != 0)
            ans[i] = (pref[i + k] - pref[i - k - 1]) / (2 * k + 1);
        else
            ans[i] = pref[i + k] / (2 * k + 1);
    }
    return ans;
}

int main()
{
    vector<int>nums={7,4,3,9,1,8,5,2,6};
    int k=3;
    vector<int>ans=getAverages(nums,k);
    for(int i:ans)cout<<i<<" ";
    return 0;
}