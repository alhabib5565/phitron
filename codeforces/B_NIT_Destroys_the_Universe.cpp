#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<int, int>> ranges;
    int l = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0 && l == -1)
        {
            l = i;
        }
        else if (arr[i] == 0 && l != -1)
        {
            ranges.push_back({l, i});
            l = -1;
        }
    }

    if (l != -1)
        ranges.push_back({l, n});

    cout << ranges.size() << "\n";
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