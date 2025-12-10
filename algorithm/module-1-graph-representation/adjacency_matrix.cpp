#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; // n is node count other hand m is edge count. number of edge possibly grether or smaller then node count.
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        vec[u][v] = 1;
    }

    return 0;
}