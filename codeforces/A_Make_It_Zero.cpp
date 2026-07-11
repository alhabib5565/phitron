#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n % 2 == 0)
        cout << 2 << '\n'
             << 1 << " " << n << "\n"
             << 1 << " " << n;
    else
        cout << 4 << '\n'
             << 1 << " " << n << "\n"
             << 1 << " " << n - 1 << '\n'
             << n - 1 << " " << n << "\n"
             << n - 1 << " " << n;

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