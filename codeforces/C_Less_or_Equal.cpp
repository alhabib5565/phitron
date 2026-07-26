#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n + 1);

    if (k == 0)
    {
        if (arr[1] == 1)
            cout << -1;
        else
            cout << arr[k + 1] - 1;
    }
    else if (k == n)
        cout << arr[k];
    else if (arr[k] == arr[k + 1])
        cout << -1;
    else
        cout << arr[k];

    return 0;
}