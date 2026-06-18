#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool is_ap = false;

    int new_a = (2 * b) - c;
    if (new_a / a > 0 && new_a % a == 0)
        is_ap = true;

    int new_b = (a + c) / 2;
    if (new_b / b > 0 && new_b % b == 0 && (a + c) % 2 == 0)
        is_ap = true;

    int new_c = (2 * b) - a;
    if (new_c / c > 0 && new_c % c == 0)
        is_ap = true;

    if (is_ap)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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