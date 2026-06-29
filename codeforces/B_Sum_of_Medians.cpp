#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n;
    cin >> n >> k;

    int arr[k * n];

    for (int i = 0; i < k * n; i++)
        cin >> arr[i];

    long long sum = 0;
    int indx = n * k;
    while (k--)
    {
        indx -= n / 2 + 1;
        sum += arr[indx];
    }

    cout << sum << '\n';
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