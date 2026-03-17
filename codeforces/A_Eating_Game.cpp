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
    int winners = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == arr[n - 1])
            winners++;
        else
            break;
    }
    cout << winners << endl;
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