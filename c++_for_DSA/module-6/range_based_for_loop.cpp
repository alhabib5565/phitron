#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello habib";
    for (char c : str)
    {
        cout << c;
    }
    cout << endl;
    for (string::iterator it = str.begin(); it < str.end(); it++)
    {
        cout << *it;
    }

    return 0;
}