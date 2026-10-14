#include <bits/stdc++.h>
using namespace std;

bool helper(int i, int j, vector<int> &arr, int turn, int pla, int plb)
{
    if (i > j)
    {
        return pla >= plb;
    }
    bool left = false;
    bool right = false;
    if (turn == 0)
    {
        left = helper(i + 1, j, arr, 1, pla + arr[i], plb);
        right = helper(i, j - 1, arr, 1, pla + arr[j], plb);
        return left || right;
    }

    left = helper(i + 1, j, arr, 0, pla, plb + arr[i]);
    right = helper(i, j - 1, arr, 0, pla, plb + arr[j]);
    return left && right;
}
bool predictTheWinner(vector<int> &nums)
{
    return helper(0, nums.size() - 1, nums, 0, 0, 0);
}

int main()
{
    vector<int> nums = {1, 5, 2};
    cout << predictTheWinner(nums);
    return 0;
}