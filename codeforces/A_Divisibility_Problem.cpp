#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        int remaining = a % b;
        if (remaining == 0)
        {
            cout << 0;
        }
        else
        {
            int neededMove = b - remaining;
            cout << neededMove;
        }
        cout << endl;
    }

    return 0;
}