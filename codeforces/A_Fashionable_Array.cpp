#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    sort(arr, arr + n);

    if ((arr[0] + arr[n - 1]) % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    int removeFromLeft = 1;
    int removeFromRight = 1;

    for (int i = 1; arr[i] % 2 == arr[0] % 2; i++)
        removeFromLeft++;
    for (int i = n - 2; arr[i] % 2 == arr[n - 1] % 2; i--)
        removeFromRight++;

    cout << min(removeFromLeft, removeFromRight) << endl;
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