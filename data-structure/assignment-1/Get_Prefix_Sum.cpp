#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<long long int> prefix_sum(n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix_sum[i] = arr[i];
        }
        else
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}