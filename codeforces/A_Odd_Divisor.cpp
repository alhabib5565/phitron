#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    while (n % 2 == 0)
        n /= 2;

    if (n > 1 && n % 2 == 1)
        cout << "YES";
    else
        cout << "NO";

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