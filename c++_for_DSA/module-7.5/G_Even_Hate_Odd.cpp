#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, even_cout = 0, odd_cout = 0;
    for (int i = 0; i < t; i++)
    {

        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        // if n is odd
        if (n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        for (int k = 0; k < n; k++)
        {
            if (arr[k] % 2 == 0)
                even_cout++;
            else
                odd_cout++;
        }
        cout << abs(even_cout - odd_cout) / 2 << endl;
        even_cout = 0;
        odd_cout = 0;
    }

    return 0;
}