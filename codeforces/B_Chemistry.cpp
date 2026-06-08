#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    int frq[26];
    memset(frq, 0, sizeof(frq));

    for (int i = 0; i < n; i++)
    {
        frq[str[i] - 'a']++;
    }

    int odd_count = 0;

    for (int i = 0; i < 26; i++)
    {
        odd_count += frq[i] % 2;
    }

    if (odd_count > k + 1)
        cout << "NO";
    else
        cout << "YES";

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