#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x % 2 == 1 && y % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    cout << endl;
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