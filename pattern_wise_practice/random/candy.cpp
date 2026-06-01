#include <bits/stdc++.h>
using namespace std;

int minimumCost(vector<int> &cost)
{
    sort(cost.begin(), cost.end(), greater<int>());

    int s = 0;

    for (int i = 0; i < cost.size(); i += 3)
    {
        s += cost[i];
        if (i + 1 < cost.size())
        {
            s += cost[i + 1];
        }
    }

    return s;
}

int main()
{
    vector<int>ar={6,5,7,9,2,2};
    cout<<minimumCost(ar);
    return 0;
}