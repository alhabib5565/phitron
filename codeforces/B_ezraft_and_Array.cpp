#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << -1;
    else
    {
        long long temp = 3;
        cout << "1 2 3 ";
        while (n > 3)
        {
            temp *= 2;
            cout << temp << ' ';
            n--;
        }
    }
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