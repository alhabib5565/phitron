#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int i = n; i > 0; i--)
    {
        if (n % i != 0)
            continue;

        int start = 0, end = (n / i) - 1;

        while (start <= end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    cout << str;

    return 0;
}
