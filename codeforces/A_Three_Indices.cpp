#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i + 2] < arr[i + 1])
        {
            cout << "YES" << '\n'
                 << i + 1 << " " << i + 2 << " " << i + 3 << '\n';
            return;
        }
    }

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