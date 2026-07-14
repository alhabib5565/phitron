#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    long long extra = 0;

    for (int i = 1; i <= n; i++)
    {
        extra += arr[i];

        if (extra < i)
        {
            cout << "NO\n";
            return;
        }

        extra -= i;
    }

    cout << "YES\n";
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