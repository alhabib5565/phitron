#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int elm;
        cin >> elm;

        arr[i] = arr[i - 1] + elm;
    }

    long long min_level = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        min_level = min(arr[i] / i, min_level);
        cout << min_level << " ";
    }

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