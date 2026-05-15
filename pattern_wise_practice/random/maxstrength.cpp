#include <bits/stdc++.h>
using namespace std;

long long maxStrength(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];
    vector<int> negative;
    vector<int> positive;
    int zero_count = 0;

    for (int i : nums)
    {
        if (i < 0)
            negative.push_back(i);
        else if (i > 0)
            positive.push_back(i);
        else
            zero_count++;
    }
    sort(negative.begin(), negative.end());
    if (negative.size() % 2 != 0)
    {
        negative.pop_back();
    }
    if (positive.empty() && negative.empty())
    {
        return 0;
    }

    long long ans = 1;
    for (int i : positive)
        ans *= i;
    for (int i : negative)
        ans *= i;

    return ans;
}

int main()
{
    vector<int>arr={3,-1,-5,2,5,-9};
    cout<<maxStrength(arr);
    return 0;
}