#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100];
int dis[100];
int visted[100];

void dijkstra_optimized_with_visit_track(int src)
{
    priority_queue<pair<int, int>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int parent_node = parent.second;
        int parent_weight = parent.first;
        if (visted[parent_node])
        {
            continue;
        }
        visted[parent_node] = true;
        for (pair<int, int> child : adj_list[parent_node])
        {
            int child_node = child.second;
            int child_weight = child.first;

            int newWeight = parent_weight + child_weight;
            if (newWeight < dis[child_node])
            {
                dis[child_node] = newWeight;
                pq.push({newWeight, child_node});
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

        adj_list[u].push_back({w, v});
        adj_list[v].push_back({w, u});
    }
    for (int i = 0; i < 100; i++)
        dis[i] = INT_MAX;
    dijkstra_optimized_with_visit_track(0);

    for (int i = 0; i < n; i++)
        cout << i << "-> " << dis[i] << endl;
    return 0;
}