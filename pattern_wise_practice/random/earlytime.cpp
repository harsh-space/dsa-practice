#include <bits/stdc++.h>

using namespace std;
int earliestFinishTime(vector<int> &landStartTime,
                       vector<int> &landDuration,
                       vector<int> &waterStartTime,
                       vector<int> &waterDuration)
{
    int landmin = INT_MAX;
    int watermin = INT_MAX;
    for (int i = 0; i < landStartTime.size(); i++)
    {
        int temp = INT_MAX;
        int st = landStartTime[i];
        for (int j = 0; j < waterStartTime.size(); j++)
        {
            int water_start = max(st + landDuration[i], waterStartTime[j]);
            temp = min(temp, water_start + waterDuration[j]);
        }
        landmin = min(temp, landmin);
    }
    for (int i = 0; i < waterStartTime.size(); i++)
    {
        int temp = INT_MAX;
        int st = waterStartTime[i];
        for (int j = 0; j < landStartTime.size(); j++)
        {
            int land_start = max(st + waterDuration[i], landStartTime[j]);
            temp = min(temp, land_start + landDuration[j]);
        }
        watermin = min(temp, watermin);
    }
    return min(landmin, watermin);
}

int main()
{
    vector<int> landStartTime={99};
    vector<int> landDuration={59};
    vector<int> waterStartTime={99,54};
    vector<int> waterDuration={85,20};
    cout<<earliestFinishTime(landStartTime,landDuration,waterStartTime,waterDuration);

    return 0;
}