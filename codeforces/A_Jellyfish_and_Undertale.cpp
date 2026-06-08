#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, n;
    cin >> a >> b >> n;

    long long tools[n];
    for (int i = 0; i < n; i++)
        cin >> tools[i];

    long long max_time = b;

    for (int i = 0; i < n; i++)
    {
        max_time += min(tools[i], a - 1);
    }
    cout << max_time << endl;
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