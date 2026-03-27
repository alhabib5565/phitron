#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
bool visited[1000][1000];
int n, m;

void dfs(int row, int col)
{
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

    int src_i, src_j;
    cin >> src_i >> src_j;

    int des_i, des_j;
    cin >> des_i >> des_j;

    memset(visited, false, sizeof(visited));

    dfs(src_i, src_j);

    if (visited[des_i][des_j])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}