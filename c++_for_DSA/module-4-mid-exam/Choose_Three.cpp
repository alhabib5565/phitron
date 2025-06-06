#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, s;
    cin >> t;
    for (int m = 0; m < t; m++)
    {
        cin >> n >> s;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool result = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        result = 1;
                        break;
                    }
                }
                if (result)
                {
                    break;
                }
            }
            if (result)
            {
                break;
            }
        }
        if (result)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
    }

    return 0;
}