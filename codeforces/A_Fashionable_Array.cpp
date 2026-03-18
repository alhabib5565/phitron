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

    sort(arr, arr + n);

    int removeFromLeft = 1;
    int removeFromRight = 1;

    if ((arr[0] + arr[n - 1]) % 2 == 0)
    {
        cout << 0 << "\n";
        return;
    }

    for (int i = n - 2; (arr[0] + arr[i]) % 2 != 0; i--)
        removeFromRight++;
    for (int i = 1; (arr[n - 1] + arr[i]) % 2 != 0; i++)
        removeFromLeft++;

    cout << min(removeFromLeft, removeFromRight) << "\n";
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