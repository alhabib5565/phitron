#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<long long> prefix_sum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        prefix_sum[i] = prefix_sum[i - 1] + val;
    }
    int old_sum = prefix_sum[n];

    for (int i = 0; i < q; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        long long new_sum = (old_sum - (prefix_sum[r] - prefix_sum[l - 1])) + (r - l + 1) * k;

        if (new_sum % 2 != 0)
            cout
                << "YES";
        else
            cout << "NO";

        cout << endl;
    }
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