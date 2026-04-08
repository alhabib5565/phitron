#include <bits/stdc++.h>
using namespace std;

int parents[1000001];
int rank_[1000001];
int n, m;

int find(int node)
{
    if (parents[node] == -1)
        return node;
    return parents[node] = find(parents[node]);
}

void dsu_union(int a, int b)
{
    int parent_a = find(a);
    int parent_b = find(b);
    if (parent_a == parent_b)
        return;
    if (rank_[parent_a] >= rank_[parent_b])
    {
        parents[parent_b] = parent_a;
        rank_[parent_a] += rank_[parent_b];
    }
    else
    {
        parents[parent_a] = parent_b;
        rank_[parent_b] += rank_[parent_a];
    }
}

int main()
{
    cin >> n >> m;
    memset(parents, -1, sizeof(parents));
    for (int i = 0; i <= n; i++)
        rank_[i] = 1;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
    }

    vector<pair<int, int>> newRoads;

    for (int i = 1; i < n; i++)
    {
        int p1 = find(i);
        int p2 = find(i + 1);
        if (p1 != p2)
        {
            dsu_union(i, i + 1);
            newRoads.push_back({i, i + 1});
        }
    }

    cout << newRoads.size() << "\n";

    for (auto road : newRoads)
    {
        cout << road.first << " " << road.second << "\n";
    }

    return 0;
}

//++++++++++++ using DFS +++++++++++++++++
// #include <bits/stdc++.h>
// using namespace std;

// int visited[1000001];
// int n, m;
// vector<vector<int>> adj;

// int lastNode = 0;

// void dfs(int src)
// {
//     visited[src] = true;
//     lastNode = src;

//     for (int i = 0; i < adj[src].size(); i++)
//     {
//         if (!visited[adj[src][i]])
//         {
//             dfs(adj[src][i]);
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     adj.resize(n + 1);
//     memset(visited, false, sizeof(visited));

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int counts = 0;

//     vector<pair<int, int>> newRoads;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             if (lastNode > 0)
//             {
//                 newRoads.push_back({lastNode, i});
//             }
//             counts++;
//             dfs(i);
//         }
//     }

//     cout << counts - 1 << "\n";

//     for (auto road : newRoads)
//     {
//         cout << road.first << " " << road.second << "\n";
//     }

//     return 0;
// }
