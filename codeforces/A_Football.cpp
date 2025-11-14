#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int team1 = 0, team2 = 0;
    char player;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            team1++;
            team2 = 0;
        }
        else
        {
            team2++;
            team1 = 0;
        }
        if (team1 >= 7 || team2 >= 7)
        {
            break;
        }
    }
    if (team1 >= 7 || team2 >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}