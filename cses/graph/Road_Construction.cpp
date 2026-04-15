#include <bits/stdc++.h>
using namespace std;
int leaders[100001];
int rnk[100001];
int n, e;

int find(int node)
{
    if (leaders[node] == -1)
        return node;
    return leaders[node] = find(leaders[node]);
}

int maxRnk = 0;
int components = 0;

void dsu_union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA == leaderB)
        return;
    components = components - 1;
    if (rnk[leaderA] <= rnk[leaderB])
    {
        leaders[leaderA] = leaderB;
        rnk[leaderB] += rnk[leaderA];
        maxRnk = max(rnk[leaderB], maxRnk);
    }
    else
    {
        leaders[leaderB] = leaderA;
        rnk[leaderA] += rnk[leaderB];
        maxRnk = max(rnk[leaderA], maxRnk);
    }
}
int main()
{
    cin >> n >> e;
    components = n;
    memset(leaders, -1, sizeof(leaders));
    for (int i = 1; i <= n; i++)
        rnk[i] = 1;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        dsu_union(u, v);

        cout << components << " " << maxRnk << '\n';
    }

    return 0;
}

// jodi graph e cycle thake tokhon ei solution kaj korbe na. karon tokhon ekta edge diye kintu duita component connect hocche na tai component count same thakbe kintu ami hardcore vabe protita edge e jonno ekta component komiye dicchi.