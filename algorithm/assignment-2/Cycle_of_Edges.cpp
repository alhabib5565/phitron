#include <bits/stdc++.h>
using namespace std;

int leaders[100001];
int rnk[100001];
int find(int node)
{
    if (leaders[node] == -1)
        return node;

    return leaders[node] = find(leaders[node]);
}

void dsu_union(int a, int b)
{
    int leaderA = find(a); // 1
    int leaderB = find(b); // 32
    if (leaderA == leaderB)
        return;
    if (rnk[leaderA] > rnk[leaderB])
    {
        leaders[leaderB] = leaderA;
        rnk[leaderA] += rnk[leaderB];
    }
    else
    {
        leaders[leaderA] = leaderB;
        rnk[leaderB] += rnk[leaderA];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    int cycle = 0;
    memset(leaders, -1, sizeof(leaders));
    for (int i = 0; i < n; i++)
    {
        rnk[i] = 0;
    }

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        if (find(u) == find(v))
            cycle++;
        else
            dsu_union(u, v);
    }
    cout << cycle;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> adj_list(100001);
// bool visited[100001];
// int parents[100001];

// int cycleCout = 0;

// void bfs(int src)
// {
//     visited[src] = true;
//     queue<int> q;
//     q.push(src);

//     while (!q.empty())
//     {
//         int p = q.front();
//         q.pop();
//         for (int child : adj_list[p])
//         {
//             if (visited[child] && parents[p] != child)
//             {
//                 cout << p << "->" << child << endl;
//                 cycleCout++;
//             }

//             if (!visited[child])
//             {
//                 parents[child] = p;
//                 visited[child] = true;
//                 q.push(child);
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     for (int i = 0; i < e; i++)
//     {
//         int u, v;
//         cin >> u >> v;

//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
//     }
//     memset(visited, false, sizeof(visited));
//     memset(parents, -1, sizeof(parents));
//     bfs(1);

//     cout << cycleCout;
//     return 0;
// }