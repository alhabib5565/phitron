#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, zero_count = 0, one_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num == 0)
            zero_count++;
        else if (num == 1)
            one_count++;
    }

    cout << pow(2, zero_count) * one_count << endl;
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