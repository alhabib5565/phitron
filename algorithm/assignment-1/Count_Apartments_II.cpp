#include <bits/stdc++.h>
using namespace std;
int n, m;
string grid[1000];
// vector<vector<bool>> visited(1000, vector<bool>(1000, false));
bool isValid(int row, int col)
{
    return row >= 0 && row < n && col >= 0 && col < m && grid[row][col] == '.';
}
int dfs(int row, int col)
{

    grid[row][col] = '#';
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int rooms = 1;
    for (int i = 0; i < 4; i++)
    {
        int newRow = row + dx[i];
        int newCol = col + dy[i];

        if (isValid(newRow, newCol))
        {
            rooms += dfs(newRow, newCol);
        }
    }
    return rooms;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }
    vector<int> apartments;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.')
            {
                apartments.push_back(dfs(i, j));
            }
        }
    }

    if (apartments.empty())
    {
        cout << 0;
    }
    else
    {
        sort(apartments.begin(), apartments.end());
        for (int x : apartments)
        {
            cout << x << " ";
        }
    }

    return 0;
}