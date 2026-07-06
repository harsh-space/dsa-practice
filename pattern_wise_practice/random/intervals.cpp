#include <bits/stdc++.h>
using namespace std;
int removeCoveredIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
         {
            if (a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0]; });

    vector<vector<int>> temp;
    temp.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        vector<int> t = temp.back();
        if (t[0] <= intervals[i][0] && t[1] >= intervals[i][1])
            continue;
        else
            temp.push_back(intervals[i]);
    }
    return temp.size();
}
int main()
{
    vector<vector<int>>grid={{1,2},{1,4},{3,4}};
    cout<<removeCoveredIntervals(grid);
    return 0;
}