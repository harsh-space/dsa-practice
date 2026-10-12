#include <bits/stdc++.h>
using namespace std;
void dfs(int s, unordered_map<int, vector<int>> &adj, unordered_set<int> &used, vector<int> &ans)
{
    used.insert(s);
    ans.push_back(s);
    for (int i : adj[s])
    {
        if (used.find(i) == used.end())
        {
            dfs(i, adj, used, ans);
        }
    }
}
vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
{
    unordered_map<int, vector<int>> adj;
    for (auto &it : adjacentPairs)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    int st = 0;
    for (auto &pair : adj)
    {
        if (pair.second.size() == 1)
        {
            st = pair.first;
            break;
        }
    }

    vector<int> ans;
    unordered_set<int> used;
    dfs(st, adj, used, ans);

    return ans;
}

int main()
{
    vector<vector<int>> adjacentPairs = {{2, 1}, {3, 4}, {3, 2}};
    vector<int> ans = restoreArray(adjacentPairs);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}