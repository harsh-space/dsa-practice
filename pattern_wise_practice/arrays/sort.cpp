#include <bits/stdc++.h>
using namespace std;
int helper(int i)
{
    if (i == 1)
        return 0;
    if (i % 2 == 0)
        return 1 + helper(i / 2);
    return 1 + helper(i * 3 + 1);
}
int getKth(int lo, int hi, int k)
{
    vector<int> nums;
    vector<int> ans;
    for (int i = lo; i <= hi; i++)
    {
        nums.push_back(i);
        ans.push_back(helper(i));
    }
    vector<pair<int, int>> conn;
    for (int i = 0; i < ans.size(); i++)
    {
        pair<int, int> p = {ans[i], nums[i]};
        conn.push_back(p);
    }
    sort(conn.begin(), conn.end());
    vector<int> res;
    for (auto &it : conn)
    {
        res.push_back(it.second);
    }
    return res[k - 1];
}
int main()
{
    int lo = 13, hi = 15, k = 2;
    cout<< getKth(lo, hi, k);
    return 0;
}