#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string str;
    cin >> str;

    int counts[7];
    memset(counts, 0, sizeof(counts));
    for (int i = 0; i < n; i++)
    {
        counts[str[i] - 65]++;
    }

    int problem_needs = 0;

    for (int i = 0; i < 7; i++)
    {
        if (counts[i] < m)
        {
            problem_needs += m - counts[i];
        }
    }
    cout << problem_needs << endl;
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