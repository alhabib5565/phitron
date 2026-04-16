#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<pair<int, int>>> adj_list;
ll dis[100001];
int parents[100001];
void dijkstra(int src)
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, 1});
    dis[1] = 0;
    while (!pq.empty())
    {
        pair<ll, int> crr = pq.top();
        pq.pop();
        int crr_node = crr.second;
        ll crr_weight = crr.first;

        for (pair<int, int> child : adj_list[crr_node])
        {
            int child_node = child.second;
            int child_weight = child.first;
            ll newWeight = crr_weight + child_weight;

            if (newWeight < dis[child_node])
            {
                pq.push({newWeight, child_node});
                dis[child_node] = newWeight;
                parents[child_node] = crr_node;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    adj_list.resize(n + 1);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj_list[u].push_back({w, v});
        adj_list[v].push_back({w, u});
    }
    for (int i = 0; i <= n; i++)
        dis[i] = LLONG_MAX;
    memset(parents, -1, sizeof(parents));

    dijkstra(1);

    stack<int> paths;
    int par = n;
    while (par != -1)
    {
        paths.push(par);
        par = parents[par];
    }
    // check parent exist or not
    if (dis[n] == LLONG_MAX)
    {
        cout << -1;
        return 0;
    }
    while (!paths.empty())
    {
        cout << paths.top() << " ";
        paths.pop();
    }

    return 0;
}