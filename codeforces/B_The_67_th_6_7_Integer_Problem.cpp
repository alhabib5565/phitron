#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 7);

    int totalNagetive = 0;
    for (int i = 0; i < 6; i++)
    {
        totalNagetive += arr[i];
    }

    cout << (-1 * totalNagetive) + arr[6] << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}