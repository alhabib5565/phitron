#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> list[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        list[u].push_back(v);
        list[v].push_back(u);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int node;
        cin >> node;

        vector<int> connectedNodes = list[node];
        sort(connectedNodes.begin(), connectedNodes.end());
        if (connectedNodes.empty())
            cout << "-1";
        else
        {
            for (int j = connectedNodes.size() - 1; j >= 0; j--)
            {
                cout << connectedNodes[j] << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}