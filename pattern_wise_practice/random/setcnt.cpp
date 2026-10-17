#include <bits/stdc++.h>
using namespace std;

vector<int> sortByBits(vector<int> &arr)
{

    sort(arr.begin(), arr.end(), [](int a, int b)
         {
            int ca = __builtin_popcount(a);
            int cb = __builtin_popcount(b);
            return ca != cb ? ca < cb : a < b; });

    return arr;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ans = sortByBits(arr);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}