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
    long long ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {

        while (arr[i] >= arr[i + 1])
        {
            arr[i] = arr[i] / 2;
            ans++;
            if (arr[i] == 0)
                break;
        }
        if (arr[i] == 0 && arr[i + 1] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << ans << endl;
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