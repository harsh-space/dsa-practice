#include <bits/stdc++.h>
using namespace std;

bool canAliceWin(vector<int> &nums)
{
    int s = 0, d = 0;
    int t = 0;
    for (int i : nums)
    {
        t += i;
        if (i <= 9)
            s += i;
        if (i >= 10 && i < 100)
            d += i;
    }
    if ((s > t - s) || (d > t - d))
        return true;
    return false;
}

int main()
{
    vector<int> nums = {1, 5, 2};
    cout << canAliceWin(nums);
    return 0;
}