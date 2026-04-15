#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> matrix(101, vector<long long>(101));
int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                matrix[i][j] = 0;
            else
                matrix[i][j] = INT_MAX;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        if (matrix[u][v] > w)
            matrix[u][v] = w;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (matrix[i][k] == LONG_LONG_MAX)
                continue;

            for (int j = 1; j <= n; j++)
            {

                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int src, des;
        cin >> src >> des;
        if (matrix[src][des] == INT_MAX)
            cout << -1 << endl;
        else
            cout << matrix[src][des] << endl;
    }

    return 0;
}