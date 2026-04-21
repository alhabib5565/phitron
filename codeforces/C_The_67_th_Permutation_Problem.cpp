#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int medium = n + 1;
    int large = n + 2;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << medium << " " << large << " ";

        medium += 2;
        large += 2;
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