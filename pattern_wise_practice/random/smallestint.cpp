#include <bits/stdc++.h>
using namespace std;
int missingInteger(vector<int> &nums)
{
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            sum += nums[i];
        }
        else
        {
            break;
        }
    }
    unordered_set<int> num_set(nums.begin(), nums.end());
    while (num_set.count(sum))
    {
        sum++;
    }

    return sum;
}
int main()
{
    vector<int>ar={1,6,5,3,5};
    cout<<missingInteger(ar);
    return 0;
}