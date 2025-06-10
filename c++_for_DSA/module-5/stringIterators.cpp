#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello Habib";
    // 1
    for (int i = 0; i < s.size(); i++)
    {
        cout << *(s.begin() + i) << endl;
    }
    // 2
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it;
    }

    return 0;
}