#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long sum = 0;
    long long max_beauty = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_beauty += (arr[i] + x - 1) / x;
    }

    long long min_beauty = (sum + x - 1) / x;

    cout << min_beauty << " " << max_beauty << '\n';
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