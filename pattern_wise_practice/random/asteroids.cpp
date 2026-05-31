#include <bits/stdc++.h>
using namespace std;
//TLE approach 55/75
bool asteroidsDestroyed(int mass, vector<int> &asteroids)
{
    long long currentMass = mass;

    sort(asteroids.begin(), asteroids.end());
    unordered_map<int, int> mp;
    for (int i : asteroids)
        mp[i]++;
    for (int i = 0; i < asteroids.size(); i++)
    {
        if (mp[asteroids[i]] == 0)
            continue;
        else
        {
            for (int j = i; j < asteroids.size(); j++)
            {
                if (mp[asteroids[j]] == 0 || asteroids[j] > currentMass)
                    continue;
                else
                {
                    mp[asteroids[j]]--;
                    currentMass += asteroids[j];
                    break;
                }
            }
        }
    }
    for (auto it : mp)
    {
        if (it.second > 0)
            return false;
    }
    return true;
}

int main()
{
    int m=10;
    vector<int>as={3,9,19,5,21};
    cout<<asteroidsDestroyed(m,as);
    return 0;
}