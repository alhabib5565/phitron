#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p;
    cin >> n >> p;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push({x, i});
    }

    long long cost = p;
    int remaining_cnt = n - 1;

    while (remaining_cnt > 0)
    {
        int notify_cost = pq.top().first; // resident to resident notify cost
        int resident_position = pq.top().second;
        if (notify_cost < p)
        {
            cost += notify_cost * min(a[resident_position], remaining_cnt);
            remaining_cnt -= min(a[resident_position], remaining_cnt);
        }
        else
        {
            cost += remaining_cnt * p;
            break;
        }

        pq.pop();
    }

    cout << cost << endl;
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