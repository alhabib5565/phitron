#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<vector<int>> adj;
bool visited[100];
int parents[100];

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {

        int p = q.front();
        q.pop();
        for (int child : adj[p])
        {
            if (visited[child] && parents[p] != child)
            {
                cout << "Cycle Dectected";
            }
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parents[child] = p;
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    adj.resize(n);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited, false, sizeof(n));
    memset(parents, -1, sizeof(n));
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(i);
        }
    }

    return 0;
}