#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        max_val = max(max_val, val);
    }
    cout << n * max_val << endl;
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