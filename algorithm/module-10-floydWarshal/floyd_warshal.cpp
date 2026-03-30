#include <bits/stdc++.h>
using namespace std;

int matrix[100][100];

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 0;
                continue;
            }
            matrix[i][j] = INT_MAX;
        }
    }

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        matrix[u][v] = w;
    }

    for (int via = 0; via < n; via++)
    {
        for (int src = 0; src < n; src++)
        {
            for (int des = 0; des < n; des++)
            {
                if (matrix[src][via] != INT_MAX && matrix[via][des] != INT_MAX && matrix[src][via] + matrix[via][des] < matrix[src][des])
                {
                    matrix[src][des] = matrix[src][via] + matrix[via][des];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == INT_MAX)
                cout << i << " " << j << "->" << "INF";
            else
                cout << i << " " << j << "->" << matrix[i][j];

            cout << ", ";
        }
        cout << endl;
    }

    return 0;
}