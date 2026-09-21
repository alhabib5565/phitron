#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;

        ans = max(ans, n - x);
    }
    cout << ans << endl;
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