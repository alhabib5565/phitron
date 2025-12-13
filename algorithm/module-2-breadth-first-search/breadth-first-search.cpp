#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    queue<int> q;
    bool visited[n] = {false}; // visited array er maddome infinity loop prevent korbo.
    q.push(0);                 // source node ke 1st e q te push korlam
    visited[0] = true;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";
        // all adjacent node q te push korlam
        for (int i = 0; i < adj_list[front].size(); i++)
        {
            if (!visited[adj_list[front][i]])
            {
                q.push(adj_list[front][i]);
                visited[adj_list[front][i]] = true; // visited hisabe mark kore dilam jeno same node multiple time visit na hoi.
            }
        }
    }

    return 0;
}