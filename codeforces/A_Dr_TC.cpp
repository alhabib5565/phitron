#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int totalOne = 0;
    int totalZero = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            totalOne++;
        else
            totalZero++;
    }

    int totalChar = n * n;

    cout << totalZero + (totalOne * n) - totalOne << endl;
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