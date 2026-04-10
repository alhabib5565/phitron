#include <bits/stdc++.h>
using namespace std;
int leaders[1001];
int rnk[1001];
int find(int node)
{
    if (leaders[node] == -1)
        return node;

    return leaders[node] = find(leaders[node]);
}

void dsu_union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA == leaderB)
        return;
    if (rnk[leaderA] >= rnk[leaderB])
    {
        leaders[leaderB] = leaderA;
        rnk[a] += rnk[b];
    }
    else
    {
        leaders[leaderA] = leaderB;
        rnk[b] += rnk[a];
    }
}
int main()
{
    int n;
    cin >> n;
    memset(leaders, -1, sizeof(leaders));
    for (int i = 0; i < n; i++)
        rnk[i] = 1;

    vector<pair<int, int>> extraEdges;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        if (find(u) == find(v))
            extraEdges.push_back({u, v});
        else
            dsu_union(u, v);
    }

    vector<int> component;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
            component.push_back(i);
    }

    cout << extraEdges.size() << endl;
    for (int i = 0; i < extraEdges.size(); i++)
    {
        int u = extraEdges[i].first;
        int v = extraEdges[i].second;

        cout << u << " " << v << " " << component[i] << " " << component[i + 1] << endl;
    }

    return 0;
}