#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> add_list[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        add_list[u].push_back(v);
        add_list[v].push_back(u);
    }

    int src, trg;
    cin >> src >> trg;

    bool visited[n] = {false};
    int level[n] = {-1};

    vector<int> parents(n, -1);

    queue<int> q;

    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (int x : add_list[front])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                level[x] = level[front] + 1;
                parents[x] = front;
            }
        }
    }

    int path_node = trg;
    while (path_node != -1)
    {

        cout << path_node << " ";
        path_node = parents[path_node];
    }
    cout << endl;
    cout << level[trg];
    return 0;
}