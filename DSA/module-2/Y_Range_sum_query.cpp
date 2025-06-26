#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1);
    arr[0] = 0;
    int num;
    for (int i = 1; i <= n; i++)
    {

        cin >> num;

        arr[i] = arr[i - 1] + num;
    }

    int l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        int sum = arr[r] - arr[l - 1];

        cout << sum << endl;
    }

    return 0;
}