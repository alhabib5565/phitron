#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int temp = 1;
    int largest_seq = 1;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - arr[i - 1] <= k)
        {
            temp++;
        }
        else
        {
            temp = 1;
        }
        largest_seq = max(temp, largest_seq);
    }

    cout << n - largest_seq << endl;
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