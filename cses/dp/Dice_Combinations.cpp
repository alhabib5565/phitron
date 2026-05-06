#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
long long dp[1000001];

int main()
{
    int n;
    cin >> n;

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 0;
        for (int j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
                dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    cout << dp[n];
    return 0;
}