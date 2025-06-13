#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s, x;
    while (t--)
    {
        cin >> s >> x;
        for (unsigned long int i = 0; i < s.size(); i++)
        {
            string sub = s.substr(i, x.size());
            if (sub == x)
            {
                s.replace(s.begin() + i, s.begin() + i + x.size(), 1, '#');
            }
        }
        cout << s << endl;
    }

    return 0;
}