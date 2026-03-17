#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<vector<int>> adj;
bool visited[100];
int parents[100];
/*
0-> 1, 2
1-> 0, 2
2-> 0, 1
*/

void dfs(int src)
{
    visited[src] = true;
    for (int child : adj[src])
    {
        if (visited[child] && parents[src] != child)
        {
            cout << "cycle dectected at " << src << " " << child << endl;
        }
        if (!visited[child])
        {
            parents[child] = src;
            dfs(child);
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
            // dfs(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int child : adj[i])
        {
            cout << child << " ";
        }
        cout << endl;
    }
    return 0;
}
