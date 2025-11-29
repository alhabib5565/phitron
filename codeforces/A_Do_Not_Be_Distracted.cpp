#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int freq[26] = {0};
        string isNotSuspicious = "YES";

        map<char, bool> m;

        for (int j = 0; j < n; j++)
        {
            if (m.find(str[j]) != m.end())
            {
                isNotSuspicious = "NO";
                break;
            }
            if (str[j] != str[j + 1])
            {
                m.insert({str[j], true});
            }
        }

        cout << isNotSuspicious << endl;
    }

    return 0;
}