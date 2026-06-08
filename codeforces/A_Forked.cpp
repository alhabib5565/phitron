#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;

    set<pair<int, int>> k_reach, q_reach;

    int dx[4] = {-1, 1, -1, 1};
    int dy[4] = {-1, -1, 1, 1};

    for (int i = 0; i < 4; i++)
    {
        k_reach.insert({kx + dx[i] * a, ky + dy[i] * b});
        k_reach.insert({kx + dx[i] * b, ky + dy[i] * a});

        q_reach.insert({qx + dx[i] * a, qy + dy[i] * b});
        q_reach.insert({qx + dx[i] * b, qy + dy[i] * a});
    }

    int result = 0;

    for (auto p : k_reach)
    {
        if (q_reach.count(p))
            result++;
    }

    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}