#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    string w;

    for (; ss >> w;)
    {
        cout << w << " fail" << ss.fail() << " position" << ss.tellg() << endl;
    }

    return 0;
}