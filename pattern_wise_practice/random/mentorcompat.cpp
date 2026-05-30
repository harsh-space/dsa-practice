#include <bits/stdc++.h>
using namespace std;
//Greedy won't work on every case--> Backtacking is teh preferred approach
int maxCompatibilitySum(vector<vector<int>> &students, vector<vector<int>> &mentors)
{
    int ans = 0;
    int m = mentors.size();
    vector<bool> occ(m, false);
    for (int i = 0; i < students.size(); i++)
    {
        int mx = -1;
        vector<int> a = students[i];
        int last = 0;
        for (int j = 0; j < mentors.size(); j++)
        {
            if (!occ[j])
            {
                int s = 0;
                vector<int> b = mentors[j];
                for (int k = 0; k < a.size(); k++)
                {
                    if (a[k] == b[k])
                        s++;
                }
                if (s > mx)
                {
                    occ[last] = false;
                    last = j;
                    occ[j] = true;
                    mx = s;
                }
            }
        }
        ans += mx;
    }
    return ans;
}

int main()
{
    vector<vector<int>>st={{1,1,0},{1,0,1},{0,0,1}};
    vector<vector<int>>men={{1,0,0},{0,0,1},{1,1,0}};
    cout<<maxCompatibilitySum(st,men);
    return 0;
}