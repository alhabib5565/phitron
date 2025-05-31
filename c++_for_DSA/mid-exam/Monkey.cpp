#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];

    while (cin.getline(str, 100001))
    {
        int len = strlen(str);
        sort(str, str + len);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                continue;
            }
            cout << str[i];
        }
        cout << "\n";
    }

    return 0;
}