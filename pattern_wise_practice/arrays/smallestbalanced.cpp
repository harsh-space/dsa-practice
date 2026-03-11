#include <bits/stdc++.h>
using namespace std;
int smallestBalancedIndex(vector<int> &nums)
{
    int n = nums.size();

    vector<long long> psum(n, 0), spro(n, 1);

    for (int i = 1; i < n; i++)
    {
        psum[i] = nums[i - 1] + psum[i - 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i + 1] != 0 && spro[i + 1] > LLONG_MAX / nums[i + 1])
        {
            spro[i] = LLONG_MAX; // cap value
        }
        else
        {
            spro[i] = nums[i + 1] * spro[i + 1];
        }
    }

    int idx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (psum[i] == spro[i])
        {
            idx = min(idx, i);
        }
    }

    return (idx == INT_MAX) ? -1 : idx;
}

int main()
{
    vector<int> arr = {2, 8, 2, 2, 5};
    // 1 1 1 5*1 1
    // 2
    cout << smallestBalancedIndex(arr);
    return 0;
}