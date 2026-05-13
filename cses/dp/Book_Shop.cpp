#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int prices[n];
    int pages[n];

    for (int i = 0; i < n; i++)
        cin >> prices[i];

    for (int i = 0; i < n; i++)
        cin >> pages[i];

    int dp[x + 1];
    dp[0] = 0;
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++)
        for (int j = x; j >= prices[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - prices[i]] + pages[i]);
        }

    cout << dp[x];
    return 0;
}