#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &nums, int idx, vector<int> &temp,
            vector<vector<int>> &ans)
{
    if (idx == nums.size())
    {

        if (temp.size() >= 2)
        {
            ans.push_back(temp);
        }
        return;
    }
    if (temp.empty()||temp.back() <= nums[idx]){
        temp.push_back(nums[idx]);
        helper(nums, idx + 1, temp, ans);
        temp.pop_back();
        
    }
    helper(nums, idx + 1, temp, ans);
}
int main()
{
    vector<int> nums = {4,6,7,7};
    vector<int> temp;
    vector<vector<int>> ans;
    helper(nums, 0, temp, ans);
    set<vector<int>> st;
    for (auto &it : ans)
        st.insert(it);
    ans.clear();
    for (auto it : st)
        ans.push_back(it);
    for (auto it : ans)
    {
        for (int i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}