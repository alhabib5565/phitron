#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n + 1];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    queue<int> q;
    vector<int> visited(n + 1, false);
    vector<int> parent(n + 1, -1);

    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (int x : adj_list[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parent[x] = front;
            }
        }
    }
    int path_node = n;
    vector<int> paths;
    while (path_node != -1)
    {
        paths.push_back(path_node);
        path_node = parent[path_node];
    }
    if (paths[paths.size() - 1] != 1)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    cout << paths.size() << endl;
    for (int i = paths.size() - 1; i >= 0; i--)
        cout << paths[i] << " ";
    cout << endl;

    return 0;
}