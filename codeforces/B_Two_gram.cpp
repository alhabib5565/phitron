#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int max_occurrence = 0, count = 0;
    string sub_str;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            if (str[i] == str[j] && str[i + 1] == str[j + 1])
                count++;
        }

        if (max_occurrence < count)
        {
            sub_str = str.substr(i, 2);
            max_occurrence = count;
        }

        count = 0;
    }
    cout << sub_str;
    return 0;
}