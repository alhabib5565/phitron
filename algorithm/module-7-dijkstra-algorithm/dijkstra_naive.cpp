#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100];
int dis[100];
void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parent_node = parent.first;
        int parent_weight = parent.second;

        for (auto child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_weight = child.second;

            int newWeight = parent_weight + child_weight;

            if (newWeight < dis[child_node])
            {
                dis[child_node] = newWeight;
                q.push({child_node, newWeight});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    for (int i = 0; i < 100; i++)
        dis[i] = INT_MAX;
    dijkstra(0);

    for (int i = 0; i < n; i++)
        cout << i << "-> " << dis[i] << endl;
    return 0;
}