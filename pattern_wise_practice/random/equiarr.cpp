#include <bits/stdc++.h>
using namespace std;

int minMoves2(vector<int> &nums)
{
    int n = nums.size();
    auto median_it = nums.begin() + n / 2;
    nth_element(nums.begin(), median_it, nums.end());
    int median = *median_it;
    int total_moves = 0;
    for (int num : nums)
    {
        total_moves += abs(num - median);
    }
    return total_moves;
}

int main()
{
    vector<int>ar={1,2,3};
    cout<<minMoves2(ar);
    return 0;
}