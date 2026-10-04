#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int frq[101];
    memset(frq, 0, sizeof(frq));

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        frq[x]++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 100; j >= 0; j--)
        {
            if (frq[j] > 0)
            {
                cout << j << " ";
                frq[j]--;
            }
        }
    }

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