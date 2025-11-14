#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> m;
        pair<string, int> max;
        while (ss >> word)
        {
            m[word]++;
            if (m[word] > max.second)
            {
                max.first = word;
                max.second = m[word];
            }
        }
        cout << max.first << " " << max.second << endl;
    }

    return 0;
}