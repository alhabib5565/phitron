#include <bits/stdc++.h>
using namespace std;

int leaders[10]; //-1, 1, 2, 3, -1, 5
int sizes[10];
int find(int node)
{
    if (leaders[node] == -1)
        return node;
    int leader = find(leaders[node]);
    leaders[node] = leader;
    return leader;
}

void dsu_union(int a, int b)
{
    if (sizes[a] <= sizes[b])
    {
        leaders[b] = a;
        sizes[a] = sizes[a] + sizes[b];
    }
    else
    {
        leaders[a] = b;
        sizes[b] = sizes[b] + sizes[a];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    memset(leaders, -1, sizeof(leaders));
    for (int i = 0; i <= n; i++)
        sizes[i] = 1;

    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
    }

    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(4) << endl;
    cout << find(3) << endl;
    cout << find(5) << endl;
    cout << find(6) << endl;

    return 0;
}