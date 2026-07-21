#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << '\n';
        return;
    }
    long long g = abs(a - b);
    long long moves = min(a % g, g - (a % g));

    cout << g << " " << moves << '\n';
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