#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>
filterOccupiedIntervals(vector<vector<int>> &occupiedIntervals,
                        int freeStart, int freeEnd)
{
    sort(occupiedIntervals.begin(), occupiedIntervals.end());
    vector<vector<int>> merg;
    for (auto it : occupiedIntervals)
    {
        if (merg.empty() || merg.back()[1] + 1 < it[0])
            merg.push_back(it);
        else
        {
            merg.back()[1] = max(merg.back()[1], it[1]);
        }
    }
    vector<vector<int>> result;
    for (const auto &interval : merg)
    {
        int start = interval[0];
        int end = interval[1];
        if (end < freeStart || start>freeEnd)
        {
            result.push_back({start, end});
        }
        else
        {
            if (start < freeStart)
            {
                result.push_back({start, freeStart - 1});
            }
            if (end > freeEnd)
            {
                result.push_back({freeEnd + 1, end});
            }
        }
    }

    return result;
}
int main() {
    vector<vector<int>> occupiedIntervals1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    int freeStart1 = 5;
    int freeEnd1 = 9;

    cout << "Original Occupied: [1,3], [2,6], [8,10], [15,18]" << endl;

    vector<vector<int>> result1 = filterOccupiedIntervals(occupiedIntervals1, freeStart1, freeEnd1);

    cout << "Filtered Occupied: ";
    for (auto &it : result1) {
        cout << "[" << it[0] << "," << it[1] << "] ";
    }

    return 0;
}
