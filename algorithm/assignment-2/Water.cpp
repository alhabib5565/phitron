#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    pair<int, int> h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i].first;
        h[i].second = i;
    }

    sort(h, h + n, greater<pair<int, int>>());
    int maxWater = 0;
    int leftIdx = 0;
    int rightIdx = 0;
    for (int i = 1; i < n; i++)
    {
        int height = min(h[0].first, h[i].first);
        int width = abs(h[0].second - h[i].second);
        int water = height * height * width;
        if (maxWater < water)
        {
            maxWater = water;
            leftIdx = min(h[i].second, h[0].second);
            rightIdx = max(h[i].second, h[0].second);
        }
    }

    cout << leftIdx << " " << rightIdx << endl;
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