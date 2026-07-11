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

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    int result = 0;
    for (int i = 0; i < n - 1; i++)
    {
        result = max(result, arr[i] - arr[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        result = max(result, arr[i] - arr[0]);
        result = max(result, arr[n - 1] - arr[i]);
    }

    cout << max(result, result) << '\n';
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