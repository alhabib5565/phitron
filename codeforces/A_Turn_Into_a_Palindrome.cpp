#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    int ans = 0;

    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            if (s[l] != c)
                ans++;
            if (s[r] != c)
                ans++;
        }

        l++;
        r--;
    }

    cout << ans << endl;
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