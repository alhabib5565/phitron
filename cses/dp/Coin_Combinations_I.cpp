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

    long long int dp[x + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 1; i <= x; i++)
        for (int coin : coins)
            if (i >= coin && dp[i - coin] > 0)
                dp[i] = (dp[i] + dp[i - coin]) % 1000000007;
    cout << dp[x];
    return 0;
}