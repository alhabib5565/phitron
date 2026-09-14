#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
    {
        left = i;
        if (arr[i] != 0)
            break;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        right = i;
        if (arr[i] != 0)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if ((i == left || i == right) && arr[i] != 0)
            cout << 1 << " ";
        else if (arr[i] == -1)
            cout << 0 << " ";
        else
            cout << arr[i] << " ";
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