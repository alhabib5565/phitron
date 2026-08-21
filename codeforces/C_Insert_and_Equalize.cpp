#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    sort(arr, arr + n);

    int mx = arr[n - 1];
    long long g = 0;

    for (int i = 0; i < n; i++)
        g = gcd(g, mx - arr[i]);

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (mx - arr[i]) / g;
    }

    int i = 1;
    while (i < n)
    {
        if (arr[n - i - 1] != mx - (i * g))
            break;
        i++;
    }
    ans += i;
    cout << ans << endl;
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

/*
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<long long> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int mx = *s.rbegin();
    long long g = 0;
    for (long long x : s)
        g = __gcd(g, mx - x);
    long long ans = 0;
    for (long long x : s)
        ans += (mx - x) / g;
    for (int i = 1; i <= n; i++)
    {
        ans++;
        if (s.find(mx - (i * g)) == s.end())
            break;
    }
    cout << ans << endl;
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
 */