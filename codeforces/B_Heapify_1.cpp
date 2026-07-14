#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i + 1];

    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] > arr[2 * i])
            swap(arr[i], arr[2 * i]);
    }

    bool is_sorted = true;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            is_sorted = false;
    }

    if (is_sorted)
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