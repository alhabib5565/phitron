#include <bits/stdc++.h>
using namespace std;

void nTimes(int n, char c)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        cout << c << " ";
        nTimes(--n, c);
    }
}

int main()
{
    int t, n;
    char c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> c;
        nTimes(n, c);
        cout << endl;
    }

    return 0;
}