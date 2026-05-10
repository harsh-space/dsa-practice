#include <bits/stdc++.h>
using namespace std;
long long minArraySum(vector<int> &nums)
{
    set<int> t(nums.begin(), nums.end());
    vector<int> arr(t.begin(), t.end());
    long long s = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int k = nums[i];
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] >= nums[i])
                break;
            if (nums[i] % arr[j] == 0)
            {
                k = arr[j];
                break;
            }
        }
        s += k;
    }
    return s;
}

int main()
{
    vector<int>num={4,2,8,3};
    cout<<minArraySum(num);
    return 0;
}