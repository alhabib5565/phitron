#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, force_x = 0, force_y = 0, force_z = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        force_x += x;
        force_y += y;
        force_z += z;
    }
    if (force_x == 0 && force_y == 0 && force_z == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}