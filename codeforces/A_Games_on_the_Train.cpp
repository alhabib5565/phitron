#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int min_h = INT_MAX;
    int max_h = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;

        min_h = min(min_h, el);
        max_h = max(max_h, el);
    }

    cout << max_h - min_h + 1 << '\n';
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