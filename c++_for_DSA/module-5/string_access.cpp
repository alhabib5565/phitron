#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hello";

    str[1] = 'w';
    cout << str << ' ' << str[str.length() - 1] << str.at(1);

    return 0;
}