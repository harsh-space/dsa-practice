#include <bits/stdc++.h>
using namespace std;
long long maxSum(vector<int> &nums, int k, int mul)
{
    sort(nums.begin(), nums.end(), greater<int>());
    vector<int> ar;
    for (int i = 0; i < k; i++)
        ar.push_back(nums[i]);
    long long ans = 0;
    for (int i : ar)
    {
        if (mul > 0)
        {
            ans += 1LL * i * mul;
        }
        else
        {
            ans += i;
        }
        mul--;
    }
    return ans;
}
int main()
{
    vector<int>Ar={6,1,2,9};
    int k=3,mul=2;
    cout<<maxSum(Ar,k,mul);
    return 0;
}