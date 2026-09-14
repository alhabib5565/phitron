#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int odd_cnt = 0, divisible_by4 = 0, just_even_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
            odd_cnt++;
        else if (arr[i] % 4 == 0)
            divisible_by4++;
        else
            just_even_cnt++;
    }

    cout << max(max(odd_cnt, divisible_by4), just_even_cnt) << '\n';
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