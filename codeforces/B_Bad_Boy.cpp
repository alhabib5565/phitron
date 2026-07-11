#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, i, j;
    cin >> n >> m >> i >> j;

    long long first_yo_pos_r = i <= n / 2 ? n : 1;
    long long first_yo_pos_c = j <= m / 2 ? 1 : m;

    long long snd_yo_pos_r = first_yo_pos_r == 1 ? n : 1;
    long long snd_yo_pos_c = first_yo_pos_c == 1 ? m : 1;

    cout << first_yo_pos_r << " " << first_yo_pos_c << " " << snd_yo_pos_r << " " << snd_yo_pos_c << '\n';
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