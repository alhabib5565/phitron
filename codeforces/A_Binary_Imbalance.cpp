#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            ans++;
        if (i != n - 1 && s[i] != s[i + 1])
        {
            cout << "YES" << '\n';
            return;
        }
    }
    if (n - ans < ans)
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