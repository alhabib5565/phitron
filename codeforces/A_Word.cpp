#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int small_count = 0, capital_count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && 'z' >= s[i])
        {
            small_count++;
        }
        else
        {
            capital_count++;
        }
    }

    if (small_count >= capital_count)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s;
    return 0;
}