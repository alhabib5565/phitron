#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<bool>> vis(n, vector<bool>(m, false));
vector<string> grid;
void mark_visited(int row, int col)
{
    if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == '#' || vis[row][col])
    {
        return;
    }

    vis[row][col] = true;
    mark_visited(row - 1, col);
    mark_visited(row + 1, col);
    mark_visited(row, col + 1);
    mark_visited(row, col - 1);
}

int main()
{
    cin >> n >> m;
    vis.resize(n, vector<bool>(m, false));
    grid.resize(n);
    int rooms = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                mark_visited(i, j);
                rooms++;
            }
        }
    }

    cout << rooms;
    return 0;
}