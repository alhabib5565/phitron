#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word;
        if (ss.tellg() != -1)
            cout << " ";
    }

    return 0;
}