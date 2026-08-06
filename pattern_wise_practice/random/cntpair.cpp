#include <bits/stdc++.h>
using namespace std;
int countPairs(vector<vector<int>> &coordinates, int k)
{
    int cnt = 0;
    map<pair<int, int>, int> mp;

    for (const auto &point : coordinates)
    {
        int x1 = point[0];
        int y1 = point[1];

        for (int a = 0; a <= k; ++a)
        {
            int b = k - a;

            int target_x = x1 ^ a;
            int target_y = y1 ^ b;

            if (mp.count({target_x, target_y}))
            {
                cnt += mp[{target_x, target_y}];
            }
        }
        mp[{x1, y1}]++;
    }

    return cnt;
}
int main()
{
    vector<vector<int>> pr = {{1, 2}, {4, 2}, {1, 3}, {5, 2}};
    int k = 5;
    cout << countPairs(pr, k);
    return 0;
}