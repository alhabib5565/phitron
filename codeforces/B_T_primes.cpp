#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long root = sqrt(n);
    if (root * root != n || n == 1)
    {
        cout << "NO" << '\n';
        return;
    }

    long long count = 0;

    for (long long i = 2; i * i <= root; i++)
    {
        if (root % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << "\n";
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