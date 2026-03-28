#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &nums, vector<int> &temp, vector<bool> &used, vector<vector<int>> &ans)
{
    if (temp.size() == nums.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (used[i])
            continue;
        temp.push_back(nums[i]);
        used[i] = true;
        helper(nums, temp, used, ans);
        temp.pop_back();
        used[i] = false;
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<bool> used(nums.size(), false);
    vector<vector<int>> ans;
    vector<int> temp;
    helper(nums, temp, used, ans);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = permute(nums);
    for (auto it : ans)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }
    return 0;
}