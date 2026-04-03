#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int total_crd = a + b + c;
    if (total_crd % 3 == 0 && total_crd / 3 >= b)
        cout << "YES";
    else
        cout << "NO";

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