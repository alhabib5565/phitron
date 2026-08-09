#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string str;
    cin >> n >> str;

    int ans = 1, x = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i - 1])
            ans++;

        if (i == n - 1)
            break;

        if (str[i - 1] != str[i] && str[i + 1] != str[i])
        {
            if (str[i - 1] == str[i + 1])
                x = max(x, 2);
            else
                x = max(x, 1);
        }
    }

    cout << ans - x << "\n";
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