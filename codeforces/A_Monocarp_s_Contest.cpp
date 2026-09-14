#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    int zero_count = 0, ans = 2;

    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;

        if (el == 0)
            zero_count++;

        if ((i == 0 || i == n - 1) && el == 0)
            ans--;
    }

    if (zero_count < 2)
        cout << -1;
    else
        cout << ans;

    cout << '\n';
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