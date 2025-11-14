#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> prefix_sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            prefix_sum[i] = arr[i];
        }
        else
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        int eq = prefix_sum[n - 1] - (prefix_sum[i]);
        if (eq == prefix_sum[i - 1])
        {
            cout << i << endl;
        }
    }
    return 0;
}