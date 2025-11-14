#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        vector<int> copyArr(arr);
        sort(copyArr.begin(), copyArr.end());

        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != copyArr[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }

    return 0;
}