#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = INT_MAX, even_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even_cnt++;

        ans = min(ans, (k - (x % k)) % k);
    }

    if (k == 4 && ans != 0)
        ans = min(ans, max(0, 2 - even_cnt));

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
