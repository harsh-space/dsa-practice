#include <bits/stdc++.h>
using namespace std;

long long smallestNumber(long long num)
{
    bool s = (num > 0) ? true : false;
    vector<int> nums;
    long long n = num;
    n = (!s) ? abs(n) : n;
    while (n > 0)
    {
        int d = n % 10;
        n /= 10;
        nums.push_back(d);
    }

    sort(nums.begin(), nums.end());

    int z = 0;
    for (int i : nums)
    {
        if (i == 0)
            z++;
    }
    int nz = 1;
    for (int i : nums)
    {
        if (i != 0)
        {
            nz = i;
            break;
        }
    }
    int nzc = 0;
    for (int i : nums)
    {
        if (i == nz)
            nzc++;
    }
    long long nn2 = nz;
    while (z--)
        nn2 *= 10;
    // nn2=nn2*pow(10,z);
    for (int i = 1; i < nzc; i++)
    {
        nn2 = nn2 * 10 + nz;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0 && nums[i] != nz)
            nn2 = nn2 * 10 + nums[i];
    }
    sort(nums.begin(), nums.end(), greater<int>());
    long long nn = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        nn = nn * 10 + nums[i];
    }
    if (!s)
        return nn * (-1);
    return nn2;
}

int main()
{   int n=-559007;
    cout << smallestNumber(n);
    return 0;
}