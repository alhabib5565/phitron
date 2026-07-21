#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int prev = arr[0];
    int tow_count = 0;
    int one_count = 0;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];

        if (prev != curr)
        {
            if (tow_count && one_count)
            {
                ans = max(ans, min(tow_count, one_count));
                if (prev == 1)
                    tow_count = 0;
                else
                    one_count = 0;
            }
            prev = curr;
        }

        if (curr == 2)
            tow_count++;
        else
            one_count++;
    }

    ans = max(ans, min(tow_count, one_count));

    cout << ans * 2;
    return 0;
}