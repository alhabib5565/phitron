#include <bits/stdc++.h>
using namespace std;
int n, m;
string grid[1000];
// vector<vector<bool>> visited(1000, vector<bool>(1000, false));
bool isValid(int row, int col)
{
    return row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == '.';
}
void dfs(int row, int col)
{
    grid[row][col] = '#';
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        int newRow = row + dx[i];
        int newCol = col + dy[i];

        if (isValid(newRow, newCol))
        {
            dfs(newRow, newCol);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    int apprtments = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.')
            {
                dfs(i, j);
                apprtments++;
            }
        }
    }

    cout << apprtments;

    return 0;
}