#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int count = 1;
    int mx_frq = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
        else
        {
            mx_frq = max(count, mx_frq);
            count = 1;
        }
    }

    int need = n - mx_frq;
    int cur_mx = mx_frq;
    int op = 0;

    while (need > 0)
    {
        int new_mx_frq = min(cur_mx, need);
        op += new_mx_frq + 1;
        need -= new_mx_frq;
        cur_mx += new_mx_frq;
    }

    cout << op << "\n";
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