#include <bits/stdc++.h>
using namespace std;

bool f(int i, vector<int> &nums, vector<int> &dp)
{
    int n = nums.size();

    if (i >= n - 1)
        return true;

    if (dp[i] != -1)
        return dp[i];

    for (int step = 1; step <= nums[i]; step++)
    {
        if (f(i + step, nums, dp))
        {
            dp[i] = 1;
            return true;
        }
    }

    dp[i] = 0;
    return false;
}

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);
    return f(0, nums, dp);
}
int main(){
    vector<int>num={2,3,1,1,4};
    cout<<canJump(num);
    return 0;
}