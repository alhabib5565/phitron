#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (grid[i - 1][j - 1] == '*')
                continue;
            if (i == 1 && j == 1)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000007;
        }
    }
    cout << dp[n][n];
    return 0;
}