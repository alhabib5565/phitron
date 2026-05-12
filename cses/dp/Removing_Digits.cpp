// #include <bits/stdc++.h>
// using namespace std;

// int rec(int n)
// {
//     int steps = 1;
//     if (n == 0)
//         return 0;
//     if (n % 10 != 0)
//         steps += rec(n - (n % 10));
//     if (n % 10 == 0)
//         steps += rec(n - 1);

//     return steps;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int steps = 0;
//     while (n != 0)
//     {
//         if (n % 10 != 0)
//             n = n - (n % 10);
//         else
//             n = n - 1;

//         steps++;
//     }
//     cout << rec(n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int dp[n + 1];
    for (int i = 0; i <= n; i++)
        dp[i] = INT_MAX;

    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        string strOfI = to_string(i);
        for (char c : strOfI)
        {
            int digit = c - '0';

            dp[i] = min(dp[i], dp[i - digit] + 1);
        }
    }
    cout << dp[n];
    return 0;
}