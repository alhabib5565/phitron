#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long wheels_count_4 = 0;
    long long wheels_count_6 = 0;

    if (n % 2 == 1 || n < 4)
    {
        cout << -1 << endl;
        return;
    }

    long long max_bus = n / 4;
    long long min_bus = (n + 5) / 6;

    cout << min_bus << " " << max_bus << endl;
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