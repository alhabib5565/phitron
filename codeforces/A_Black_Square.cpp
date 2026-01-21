#include <bits/stdc++.h>
using namespace std;

int main()
{
    // {0, 1, 2 , 3, 4}
    int calories[5];
    for (int i = 1; i <= 4; i++)
    {
        cin >> calories[i];
    }

    string str;
    cin >> str;

    int total_used_calory = 0;

    for (int i = 0; i < str.size(); i++)
    {
        int script = str[i] - 48;
        total_used_calory += calories[script];
    }
    cout << total_used_calory;
    return 0;
}