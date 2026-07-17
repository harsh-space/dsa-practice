#include<bits/stdc++.h>
using namespace std;
int jg(vector<int> &ar, int i, vector<int> &dp)
{
    if (i >= ar.size() - 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int min_jumps = 1e9;
    for (int j = 1; j <= ar[i]; j++)
    {
        int temp = jg(ar, i + j, dp);
        if (temp != 1e9)
        {
            min_jumps = min(min_jumps, 1 + temp);
        }
    }

    return dp[i] = min_jumps;
}

int jump(vector<int> &nums)
{
    vector<int> dp(nums.size(), -1);
    return jg(nums, 0, dp);
}

int main(){
    vector<int>ar={2,3,1,1,4};
    cout<<jump(ar);
    return 0;
}