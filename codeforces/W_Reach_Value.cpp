#include <bits/stdc++.h>
using namespace std;
long long int n;
bool rec(long long int val)
{
    if (n == val)
        return true;

    if (val > n)
        return false;

    return rec(val * 10) || rec(val * 20);
}
void solve()
{
    cin >> n;
    if (rec(1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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