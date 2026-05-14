#include <bits/stdc++.h>
using namespace std;
bool isGood(vector<int> &nums)
{
    int m = nums.size(); // n+1
    int n = m - 1;
    int ul = n - 1;
    unordered_map<int, int> mp;
    for (int it : nums)
        mp[it]++;
    for (int i = 1; i <= ul; i++)
    {
        if (mp[i] == 0)
            return false;
    }
    if (mp[n] != 2)
        return false;
    return true;
}
int main()
{
    vector<int>arr={3, 4, 4, 1, 2, 1};
    cout<<isGood(arr);
    return 0;
}