#include <bits/stdc++.h>
using namespace std;
int countMajoritySubarrays(vector<int> &nums, int target)
{
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int t = 0;
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[j] == target)
                t++;
            if (t > (j - i + 1) / 2)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int>ar={1,2,2,4};
    int t=2;
    cout<<countMajoritySubarrays(ar,t);
    return 0;
}