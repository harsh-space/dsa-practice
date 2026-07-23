#include <bits/stdc++.h>
using namespace std;
int minGroups(vector<vector<int>> &intervals)
{
    vector<int> st, ed;
    for (auto &it : intervals)
    {
        st.push_back(it[0]);
        ed.push_back(it[1]);
    }
    sort(st.begin(), st.end());
    sort(ed.begin(), ed.end());
    int edptr = 0, grp = 0;
    for (int i : st)
    {
        if (i > ed[edptr])
        {
            edptr++;
        }
        else
        {
            grp++;
        }
    }
    return grp;
}
int main()
{
    vector<vector<int>>ar={{5,10},{6,8},{1,5},{2,3},{1,10}};
    cout<<minGroups(ar);
    return 0;
}