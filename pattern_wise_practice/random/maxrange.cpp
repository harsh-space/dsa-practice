#include<bits/stdc++.h>
using namespace std;
int dig(int n)
{

    int mn = 10;
    int mx = -1;
    while (n > 0)
    {
        int d = n % 10;
        mn = min(mn, d);
        mx = max(mx, d);
        n /= 10;
    }
    return mx - mn;
}
int maxDigitRange(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i : nums)
    {
        mp[i] = dig(i);
    }
    int mx = INT_MIN;
    for (auto &it : mp)
    {
        mx = max(mx, it.second);
    }
    int s = 0;
    for (auto &it : nums)
    {
        if (mp[it] == mx)
            s += it;
    }
    return s;
}
int main(){
    vector<int>ar={5724,111,350};
    cout<<maxDigitRange(ar);
    return 0;
}