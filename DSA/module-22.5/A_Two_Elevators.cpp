#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int diffrence_of_b_and_c_floor = abs(b - c);
        if (a > diffrence_of_b_and_c_floor + c)
            cout << 2;
        else if (diffrence_of_b_and_c_floor + c > a)
            cout << 1;
        else
            cout << 3;
        cout << endl;
    }

    return 0;
}