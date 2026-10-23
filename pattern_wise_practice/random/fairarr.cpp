#include<bits/stdc++.h>
using namespace std;

int waysToMakeFair(std::vector<int> &nums)
{
    int even_total = 0;
    int odd_total = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (i % 2 == 0)
        {
            even_total += nums[i];
        }
        else
        {
            odd_total += nums[i];
        }
    }

    int even_left = 0;
    int odd_left = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (i % 2 == 0)
        {
            even_total -= nums[i];
        }
        else
        {
            odd_total -= nums[i];
        }
        if (even_left + odd_total == odd_left + even_total)
        {
            count++;
        }
        if (i % 2 == 0)
        {
            even_left += nums[i];
        }
        else
        {
            odd_left += nums[i];
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {2, 1, 6, 4};
    cout << waysToMakeFair(nums) <<endl;
    return 0;
}