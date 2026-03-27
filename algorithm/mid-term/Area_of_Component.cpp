#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
bool visited[1000][1000];
int n, m;
int tempArea = 0;
void dfs(int row, int col)
{
    tempArea++;
    visited[row][col] = true;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        int newRow = row + dx[i];
        int newCol = col + dy[i];

        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visited[newRow][newCol] && grid[newRow][newCol] == '.')
        {
            dfs(newRow, newCol);
        }
    }
}
int main()
{
    cin >> n >> m;
    grid.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    memset(visited, false, sizeof(visited));
    int minArea = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                dfs(i, j);
                minArea = min(minArea, tempArea);
                tempArea = 0;
            }
        }
    }

    if (minArea == INT_MAX)
        cout << -1;
    else
        cout << minArea;
    return 0;
}