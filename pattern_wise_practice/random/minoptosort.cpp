#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int> &nums)
{
    vector<int> tr = nums;
    vector<int> rtr = nums;
    sort(tr.begin(), tr.end());
    sort(rtr.begin(), rtr.end(), greater<int>());
    tr.insert(tr.end(), tr.begin(), tr.end());
    rtr.insert(rtr.end(), rtr.begin(), rtr.end());
    int zidx = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zidx = i;
            break;
        }
    }
    int ans = INT_MAX;
    auto it = search(tr.begin(), tr.end(), nums.begin(), nums.end());
    if (it != tr.end())
    {
        int op1 = zidx;
        int op2 = 2 + (nums.size() - zidx) % nums.size();
        ans = min({ans, op1, op2});
    }
    it = search(rtr.begin(), rtr.end(), nums.begin(), nums.end());
    if (it != rtr.end())
    {
        int op1 = zidx + 2;
        int op2 = nums.size() - zidx;
        ans = min({ans, op1, op2});
    }
    if (ans == INT_MAX)
        return -1;
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 0};
    cout << minOperations(nums) << endl;
    return 0;
}