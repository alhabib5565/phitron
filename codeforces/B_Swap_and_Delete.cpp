#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int cnt1 = 0;
    int cnt0 = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            cnt1++;
        else
            cnt0++;
    }

    string new_str = str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' && cnt1 > 0)
        {
            cnt1--;
            new_str[i] = '1';
        }
        else if (str[i] == '1' && cnt0 > 0)
        {
            cnt0--;
            new_str[i] = '0';
        }
    }

    int temp = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == new_str[i])
            break;
        temp++;
    }

    cout << str.size() - temp << '\n';
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
