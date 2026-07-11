#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int diff = abs(arr[i] - (i + 1));
        k = gcd(k, diff);
    }

    cout << k << '\n';
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