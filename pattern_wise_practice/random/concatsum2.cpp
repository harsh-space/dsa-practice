#include <bits/stdc++.h>
using namespace std;
vector<int> sumAndMultiply(string s, vector<vector<int>> &queries)
{
    vector<int> ans;
    long long mod = 1e9 + 7;
    for (auto it : queries)
    {
        int st = it[0];
        int e = it[1];
        long long nzn = 0, sum = 0;
        for (int i = st; i <= e; i++)
        {
            if (s[i] != '0')
            {
                int num = s[i] - '0';
                sum += num;
                nzn = (nzn * 10 + num) % mod;
            }
        }
        ans.push_back((nzn * sum) % mod);
    }
    return ans;
}

int main()
{
    string s = "10203004";
    vector<vector<int>>q={{0,7},{1,3},{4,6}};

    vector<int>a= sumAndMultiply(s,q);
    for(int i:a)cout<<i<<" ";
    return 0;
}