#include <bits/stdc++.h>
using namespace std;

string sffx[4] = {"00", "25", "50", "75"};
void solve()
{
    string str_n;
    cin >> str_n;
    int ans = str_n.size();

    for (int i = 0; i < 4; i++)
    {
        char x = sffx[i][1], y = sffx[i][0];
        int temp = 0;

        int j = str_n.size();
        while (0 < j)
        {
            j--;
            if (str_n[j] == y)
                break;
            temp++;
        }
        while (0 <= j)
        {
            j--;
            if (str_n[j] == x)
                break;
            temp++;
        }
        ans = (ans, temp);
    }

    cout << ans << endl;
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