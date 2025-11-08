#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n - 1, sereja = 0, dima = 0, i = 0;

    while (left <= right)
    {
        int left_val = arr[left];
        int right_val = arr[right];
        if (left_val > right_val)
        {
            if (i % 2 == 0)
                sereja += left_val;
            else
                dima += left_val;

            left++;
        }
        else
        {
            if (i % 2 == 0)
                sereja += right_val;
            else
                dima += right_val;
            right--;
        }
        i++;
    }
    cout << sereja << " " << dima;
    return 0;
}