#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size() - 4; i++)
    {
        string sub = str.substr(i, 5);
        if (sub == "EGYPT")
        {
            str.replace(i, 5, 1, ' ');
        }
    }
    cout << str;
    return 0;
}