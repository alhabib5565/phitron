#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int ans = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'x')
            count++;
        else
            count = 0;

        if (count > 2)
            ans++;
    }

    cout << ans;

    return 0;
}