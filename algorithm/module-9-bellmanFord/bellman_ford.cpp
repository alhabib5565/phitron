#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

vector<Edge> adj_list;
int dis[100];
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list.push_back(Edge(u, v, w));
    }

    for (int i = 0; i < 100; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        for (Edge ed : adj_list)
        {
            int u, v, w;
            u = ed.u;
            v = ed.v;
            w = ed.w;
            if (dis[u] != INT_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}