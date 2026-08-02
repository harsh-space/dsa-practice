#include <bits/stdc++.h>
using namespace std;

long long maxPairStrength(vector<int> &nums)
{
    long long ans = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            long long l = __gcd(nums[i], nums[j]);
            long long k = (1LL * nums[i] * nums[j]) / (1LL * l * l);

            ans = max(ans, k);
        }
    }
    return ans;
}
int main()
{
    vector<int>ar={2,3,5};
    cout<<maxPairStrength(ar);
    return 0;
}