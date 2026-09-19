#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (int i = 1; i <= s.size() / 2; i++)
    {
        if (s[i] != '0')
        {
            string a = s.substr(0, i);
            string b = s.substr(i, s.size() - i);

            if (stoi(a) < stoi(b))
            {
                cout << a << " " << b << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
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