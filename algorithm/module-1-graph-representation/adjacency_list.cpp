#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e; // n node count and e hocche edge count.
    cin >> n >> e;

    vector<int> adjacency_list[n];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u); // when undirected grahp. becuase here each node connected each other.
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "-> ";
        for (int conection : adjacency_list[i])
        {
            cout << conection << " ";
        }

        cout << endl;
    }

    return 0;
}