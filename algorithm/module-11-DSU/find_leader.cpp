#include <bits/stdc++.h>
using namespace std;

int leaders[10]; //-1, -1, 1, 2, 3, -1, 5
int find(int node)
{
    while (leaders[node] != -1)
    {
        node = leaders[node];
    }
    return node;
}
int main()
{
    int n, e;
    cin >> n >> e;
    memset(leaders, -1, sizeof(leaders));
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        leaders[b] = a;
    }

    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;
    cout << find(4) << endl;
    cout << find(5) << endl;
    cout << find(6) << endl;

    return 0;
}