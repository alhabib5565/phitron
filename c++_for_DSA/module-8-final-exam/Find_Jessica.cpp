#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    string name;
    bool isExist = false;
    while (ss >> name)
    {
        if (name == "Jessica")
        {
            isExist = true;
            break;
        }
    }

    if (isExist)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}