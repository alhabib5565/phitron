#include <bits/stdc++.h>
using namespace std;

int visited[1000001];
int n, m;
vector<vector<int>> adj;

int lastNode = 0;

void dfs(int src)
{
    visited[src] = true;
    lastNode = src;

    for (int i = 0; i < adj[src].size(); i++)
    {
        if (!visited[adj[src][i]])
        {
            dfs(adj[src][i]);
        }
    }
}

int main()
{
    cin >> n >> m;
    adj.resize(n + 1);
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int counts = 0;

    vector<pair<int, int>> newRoads;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (lastNode > 0)
            {
                newRoads.push_back({lastNode, i});
            }
            counts++;
            dfs(i);
        }
    }

    cout << counts - 1 << "\n";

    for (auto road : newRoads)
    {
        cout << road.first << " " << road.second << "\n";
    }

    return 0;
}
