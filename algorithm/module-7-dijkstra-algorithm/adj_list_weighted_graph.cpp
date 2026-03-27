#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100];
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

    for (int i = 0; i < n; i++)
    {
        cout << i << "-> ";
        for (auto pair : adj_list[i])
            cout << pair.first << " " << pair.second << ", ";
        cout << endl;
    }

    return 0;
}