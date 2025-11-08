#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int avaiable_min = 240 - k;
    int would_solve = 0;
    int used_min = 0;
    while (avaiable_min >= used_min + ((would_solve + 1) * 5) && n > would_solve)
    {
        would_solve++;
        used_min += would_solve * 5;
    }
    cout << would_solve;
    return 0;
}