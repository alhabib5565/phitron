#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<vector<int>> group(4);
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (num % 6 == 0)
            group[0].push_back(num);
        else if (num % 2 == 0)
            group[1].push_back(num);
        else if (num % 3 == 0)
            group[3].push_back(num);
        else
            group[2].push_back(num);
    }

    for (int i = 0; i < 4; i++)
    {
        int groupSize = group[i].size();
        for (int j = 0; j < groupSize; j++)
        {
            cout << group[i][j] << " ";
        }
    }

    cout << endl;
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