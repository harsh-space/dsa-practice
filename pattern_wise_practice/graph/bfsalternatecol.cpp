#include <bits/stdc++.h>
using namespace std;
void bfs(int i, int n, vector<vector<vector<int>>> &adj, vector<int> &ans)
{

    vector<vector<bool>> vis(n, vector<bool>(256, false));
    queue<pair<int, char>> q;
    q.push({i, 'g'});
    int cnt = 0;

    while (!q.empty())
    {
        int size = q.size();

        for (int k = 0; k < size; k++)
        {
            auto [it, last] = q.front();
            q.pop();
            if (ans[it] == -1)
            {
                ans[it] = cnt;
            }

            for (auto &e : adj[it])
            {
                int neighbor = e[0];
                char color = e[1];
                if (vis[neighbor][color])
                    continue;

                if (last == 'g' || last != color)
                {
                    vis[neighbor][color] = true;
                    q.push({neighbor, color});
                }
            }
        }
        cnt++;
    }
}

vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &redEdges, vector<vector<int>> &blueEdges)
{
    vector<vector<vector<int>>> adj(n);
    for (int i = 0; i < redEdges.size(); i++)
    {
        adj[redEdges[i][0]].push_back({redEdges[i][1], 'r'});
    }
    for (int i = 0; i < blueEdges.size(); i++)
    {
        adj[blueEdges[i][0]].push_back({blueEdges[i][1], 'b'});
    }
    vector<int> ans(n, -1);

    bfs(0, n, adj, ans);
    return ans;
}
int main()
{
    int n = 3;
    vector<vector<int>> redEdges = {{0, 1}, {1, 2}};
    vector<vector<int>> blueEdges = {}; 
    vector<int> result = shortestAlternatingPaths(n, redEdges, blueEdges);      
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}