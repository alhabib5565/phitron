#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> graph(n, vector<int>(n, 0));

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;
        bool isConnectd = graph[u][v];
        if (isConnectd || u == v)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}