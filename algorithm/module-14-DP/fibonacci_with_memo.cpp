#include <bits/stdc++.h>
using namespace std;
int memo[100];
int cnt = 0;
int fib(int n)
{
    cnt++;

    if (n == 1)
    {
        memo[1] = 1;
        return 1;
    }

    int value = fib(n - 1) + memo[n - 2];
    memo[n] = value;
    return value;
}

int main()
{
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    memo[0] = 0;
    int fib_val = fib(n);
    cout << fib_val << " " << cnt;
    return 0;
}