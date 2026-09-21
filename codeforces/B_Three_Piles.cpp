#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    cout << max(abs(a - b), abs((a + c) - b)) << endl;
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