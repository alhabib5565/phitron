#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (c == 'e' || c == 'E')
            e++;
        else if (c == 'g' || c == 'G')
            g++;
        else if (c == 'y' || c == 'Y')
            y++;
        else if (c == 'p' || c == 'P')
            p++;
        else if (c == 't' || c == 'T')
            t++;
    }

    cout << min({e, g, y, p, t});
    return 0;
}