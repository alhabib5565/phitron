#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    // 2, 4,5, 8

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int x;
    for (int i = 0; i < q; i++)
    {
        int left = 0;
        int right = n - 1;
        cin >> x;
        int flag = 0;
        while (left <= right)
        {

            int middle = (left + right) / 2;
            if (arr[middle] < x)
            {
                left = middle + 1;
            }
            else if (x < arr[middle])
            {
                right = middle - 1;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}