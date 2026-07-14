#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int ans = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        // cout << count << " ";
        if (str[i] == '#')
            count++;
        else
            count = 0;
        ans = max(ans, count);
    }
    cout << (ans + 1) / 2 << '\n';
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