#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int counter = 1;
    int result = 1;
    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] == str[i])
            counter++;
        else
            counter = 1;

        result = max(counter, result);
    }

    cout << result + 1 << '\n';
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