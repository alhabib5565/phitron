#include <bits/stdc++.h>
using namespace std;

int distance(char a, char b)
{
    int x = abs(a - b);
    return min(x, 26 - x);
}

int main()
{
    string s;
    cin >> s;

    int flag = INT_MAX;

    for (int i = 0; i + 3 < s.size(); i++)
    {
        int operation_count = 0;

        operation_count += distance(s[i], 'A');
        operation_count += distance(s[i + 1], 'C');
        operation_count += distance(s[i + 2], 'T');
        operation_count += distance(s[i + 3], 'G');

        // cout << i << " " << operation_count << endl;

        flag = min(flag, operation_count);
    }

    cout << flag;

    return 0;
}
