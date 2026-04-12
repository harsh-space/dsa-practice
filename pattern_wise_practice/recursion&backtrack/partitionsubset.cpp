#include <bits/stdc++.h>
using namespace std;

bool solve(int index, int target, vector<int> &nums)
{

    if (target == 0)
        return true;

    if (index >= nums.size() || target < 0)
        return false;

    bool include = solve(index + 1, target - nums[index], nums);

    bool exclude = solve(index + 1, target, nums);

    return include || exclude;
}

bool canPartition(vector<int> &nums)
{
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    if (totalSum % 2 != 0)
        return false;

    return solve(0, totalSum / 2, nums);
}
int main(){
    vector<int>arr={1,5,11,5};
    cout<<canPartition(arr);
    return 0;
}