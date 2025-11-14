#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n;
    vector<int> arr_a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr_a[i];
    }

    cin >> m;
    vector<int> arr_b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr_b[i];
    }

    cin >> x;
    arr_a.insert(arr_a.begin() + x, arr_b.begin(), arr_b.end());
    for (int i = 0; i < arr_a.size(); i++)
    {
        cout << arr_a[i] << " ";
    }

    return 0;
}