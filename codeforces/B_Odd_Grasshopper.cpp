#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, n;
    cin >> x >> n;

    long long ans = x;
    for (int i = 1; i <= n % 4; i++)
    {
        if (ans % 2 == 0)
            ans -= 4 * (n / 4) + i;
        else
            ans += 4 * (n / 4) + i;
    }
    cout << ans << '\n';
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