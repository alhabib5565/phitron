#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string temp = str;

    reverse(str.begin(), str.end());
    if (str == temp)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}