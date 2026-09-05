#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int a = n / 2;
        int b = a - 1;
        cout << a << " " << b << " " << 1 << endl;
        return;
    }

    int temp = n / 2;

    if (temp % 2 == 0)
        cout << temp - 1 << " " << temp + 1 << " " << 1 << endl;
    else
        cout << temp - 2 << " " << temp + 2 << " " << 1 << endl;
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