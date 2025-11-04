#include <bits/stdc++.h>
using namespace std;

bool sort_by_name(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    list<pair<string, int>> my_list;
    for (int i = 0; i < n; i++)
    {
        string s;
        int j;
        cin >> s >> j;

        my_list.push_back({s, j});
    }

    my_list.sort(sort_by_name);
    for (auto it = my_list.begin(); it != my_list.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}