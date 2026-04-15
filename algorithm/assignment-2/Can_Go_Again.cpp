#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> edgeList;
int dis[101];
int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        edgeList.push_back({u, v, w});
    }

    int src, t;
    cin >> src >> t;
    dis[src] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            int u = edgeList[j][0];
            int v = edgeList[j][1];
            int w = edgeList[j][2];
            if (dis[u] != INT_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    bool cycle = false;
    for (int i = 0; i < e; i++)
    {
        int u = edgeList[i][0];
        int v = edgeList[i][1];
        int w = edgeList[i][2];
        if (dis[u] != INT_MAX && dis[u] + w < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected";
        return 0;
    }

    for (int i = 0; i < t; i++)
    {
        int des;
        cin >> des;
        if (dis[des] == INT_MAX)
            cout << "Not Possible" << endl;
        else
            cout << dis[des] << endl;
    }
    return 0;
}
