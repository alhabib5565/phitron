#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grid;
vector<vector<int>> level;
bool visited[1000][1000];
int n, m;

void bfs(int row, int col)
{
    int dx[8] = {-2, -2, 2, 2, -1, 1, 1, -1};
    int dy[8] = {-1, 1, 1, -1, 2, 2, -2, -2};

    queue<pair<int, int>> q;
    q.push({row, col});
    visited[row][col] = true;
    level[row][col] = 0;

    while (!q.empty())
    {
        pair<int, int> crr = q.front();
        q.pop();
        int crrRow = crr.first;
        int crrCol = crr.second;

        for (int i = 0; i < 8; i++)
        {
            int newRow = crrRow + dx[i];
            int newCol = crrCol + dy[i];

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visited[newRow][newCol])
            {
                q.push({newRow, newCol});
                visited[newRow][newCol] = true;
                level[newRow][newCol] = level[crrRow][crrCol] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        grid = vector<vector<int>>(n, vector<int>(m, 1));
        level = vector<vector<int>>(n, vector<int>(m, -1));

        int srcRow, srcCol, desRow, desCol;
        cin >> srcRow >> srcCol >> desRow >> desCol;
        memset(visited, false, sizeof(visited));

        bfs(srcRow, srcCol);
        cout << level[desRow][desCol] << endl;
    }

    return 0;
}