#include <bits/stdc++.h>
using namespace std;
int minimumEffort(vector<vector<int>> &tasks)
{
    int r = 0;
    sort(tasks.begin(), tasks.end(), [](auto &a, auto &b)
         { return abs(a[1] - a[0]) > abs(b[1] - b[0]); });
    for (auto it : tasks)
        r += it[0];
    int u = r;
    for (auto it : tasks)
    {
        if (it[1] > u)
        {
            r += (it[1] - u);
            u += (it[1] - u);
        }
        u -= it[0];
    }

    return r;
}
int main()
{
    vector<vector<int>>t={{1,2},{1,7},{2,3},{5,9},{2,2}};
    cout<<minimumEffort(t);
    return 0;
}