#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string str;
    cin >> n >> k >> str;

    int ans = n / k;
    for (int i = 0; i < n; i += k)
    {
        for (int j = i; j < i + k; j++)
        {
            if (str[j] == '0')
            {
                ans--;
                break;
            }
        }
    }

    cout << ans << '\n';
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