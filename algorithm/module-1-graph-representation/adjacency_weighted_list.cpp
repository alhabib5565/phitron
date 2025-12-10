#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> adjacency_list[n];

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjacency_list[u].push_back({v, w});
        adjacency_list[v].push_back({u, w});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "-> ";
        for (auto conection : adjacency_list[i])
        {
            cout << conection.first << " " << conection.second << ", ";
        }

        cout << endl;
    }

    return 0;
}