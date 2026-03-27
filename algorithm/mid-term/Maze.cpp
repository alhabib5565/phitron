#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
bool visited[1000][1000];
vector<vector<pair<int, int>>> parent;
int n, m;
pair<int, int> disCell = {-1, -1};

void bfs(int row, int col)
{
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    queue<pair<int, int>> q;
    q.push({row, col});
    visited[row][col] = true;

    while (!q.empty())
    {
        pair<int, int> crr = q.front();
        q.pop();
        int crrRow = crr.first;
        int crrCol = crr.second;

        if (grid[crrRow][crrCol] == 'D')
        {
            disCell = {crrRow, crrCol};
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int newRow = crrRow + dx[i];
            int newCol = crrCol + dy[i];

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visited[newRow][newCol] && (grid[newRow][newCol] == '.' || grid[newRow][newCol] == 'D'))
            {
                q.push({newRow, newCol});
                visited[newRow][newCol] = true;
                parent[newRow][newCol] = {crrRow, crrCol};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    grid.resize(n);
    parent = vector<vector<pair<int, int>>>(n, vector<pair<int, int>>(m, {-1, -1}));
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == 'R')
            {
                bfs(i, j);
            }
        }
    }

    pair<int, int> cur = disCell;
    while (cur.first != -1 && cur.second != -1)
    {
        pair<int, int> par = parent[cur.first][cur.second];
        if (par.first == -1)
            break;

        if (grid[par.first][par.second] != 'R')
        {
            grid[par.first][par.second] = 'X';
        }
        cur = par;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << "\n";
    }

    return 0;
}