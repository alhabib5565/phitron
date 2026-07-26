#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int frq[1001];
    int arr[n];

    memset(frq, 0, sizeof(frq));
    for (int i = 0; i < n; i++)
    {
        int elm;
        cin >> elm;

        frq[elm]++;

        arr[i] = elm;
    }

    vector<int> unique_arr;
    for (int i = 0; i < n; i++)
    {
        if (frq[arr[i]] == 1)
            unique_arr.push_back(arr[i]);
        frq[arr[i]]--;
    }

    cout << unique_arr.size() << '\n';

    for (int i = 0; i < unique_arr.size(); i++)
    {
        cout << unique_arr[i] << " ";
    }

    return 0;
}