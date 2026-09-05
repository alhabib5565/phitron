#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int cnt = n / 2020;

    if (cnt >= n % 2020)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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