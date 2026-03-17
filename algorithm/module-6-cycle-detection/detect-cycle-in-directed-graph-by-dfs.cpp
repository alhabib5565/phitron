#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<vector<int>> adj;
bool visited[100];
int recStack[100];
/*
0-> 1
1-> 2
2-> 0
*/

bool dfs(int src)
{
    visited[src] = true;
    recStack[src] = true; // recursive stack

    for (int child : adj[src])
    {
        // eikhane duita if condition ek sathe true howar possibility ache?
        if (!visited[child])
        {
            dfs(child);
        }
        else if (recStack[child])
        {
            cout << "cycle detected at " << src << " " << child << endl;
            return true;
        }
    }
    recStack[src] = false;
    return false;
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
    }
    memset(visited, false, sizeof(visited));
    memset(recStack, -1, sizeof(recStack));
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }

    return 0;
}
