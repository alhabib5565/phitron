#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int move = 0;
    bool is_remove_possible = true;
    while (!s.empty() && is_remove_possible)
    {
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] != s[j + 1])
            {
                move++;
                s.erase(j, 2);
                break;
            }
            if (j == s.size() - 2)
                is_remove_possible = false;
        }
    }

    if (move % 2 == 0)
        cout << "NET" << '\n';
    else
        cout << "DA" << '\n';
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