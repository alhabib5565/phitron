#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int screen_count_for_y = ceil((y * 4) / 8.0);
        int total_cell = y * 4 + x;
        int total_screen_need = ceil(total_cell / 15.0);

        if (total_screen_need > screen_count_for_y)
            cout << total_screen_need;
        else
            cout << screen_count_for_y;
        cout << endl;
    }

    return 0;
}