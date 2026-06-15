#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int elm;
        cin >> elm;

        if (elm == 1)
            arr[i] = 2;
        else
            arr[i] = elm;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % arr[i - 1] == 0)
            arr[i] = arr[i] + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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