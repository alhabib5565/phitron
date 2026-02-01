#include <bits/stdc++.h>
using namespace std;
vector<vector<bool>> visted(4, vector<bool>(4, false));
char gird[4][4];
int n, m;

bool isValid(int src_row, int src_col)
{
    return src_row >= 0 && src_row < n && src_col >= 0 && src_col < m && !visted[src_row][src_col];
}

void dfs(int src_row, int src_col)
{
    cout << src_row << " " << src_col << endl;
    visted[src_row][src_col] = true;
    vector<pair<int, int>> dir = {
        {-1, 0}, // up
        {1, 0},  // down
        {0, -1}, // left
        {0, 1}   // right
    };
    for (int i = 0; i < 4; i++)
    {
        int new_src_row = src_row + dir[i].first;
        int new_src_col = src_col + dir[i].second;

        if (isValid(new_src_row, new_src_col))
            dfs(new_src_row, new_src_col);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> gird[i][j];
        }
    }

    int src_row, src_col;
    cin >> src_row >> src_col;

    dfs(src_row, src_col);

    return 0;
}