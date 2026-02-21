#include <bits/stdc++.h>

using namespace std;
int subarraySum(vector<int> &arr, int k)
{
    if (arr.empty())
        return 0;

    vector<int> pre(arr.size(), 0);
    pre = arr;
    for (int i = 1; i < arr.size(); i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pre[i] == k)
            count++;

        int diff = pre[i] - k;
        if (mp.find(diff) != mp.end())
            count += mp[diff];

        mp[pre[i]]++;
    }
    return count;
}

int main()
{
    vector<int> arr1 = {1, 1, 1};
    int k1 = 2;
    cout << subarraySum(arr1, k1) << endl;

    vector<int> arr2 = {1, 2, 3};
    int k2 = 3;
    cout << subarraySum(arr2, k2) << endl;

    return 0;
}