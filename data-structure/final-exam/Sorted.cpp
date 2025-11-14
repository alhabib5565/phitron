#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        list<int> my_list;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            my_list.push_back(val);
        }

        my_list.sort();
        my_list.unique();
        for (auto it = my_list.begin(); it != my_list.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}