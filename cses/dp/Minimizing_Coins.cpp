#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int dp[x + 1];
    for (int i = 0; i <= x; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
        for (int coin : coins)
        {
            if (i >= coin && dp[i - coin] != INT_MAX)
                dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    if (dp[x] != INT_MAX)
        cout << dp[x];
    else
        cout << -1;
    return 0;
}