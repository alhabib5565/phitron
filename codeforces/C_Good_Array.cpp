#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0; // 18
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
        total += val;
    }
    vector<int> index;
    for (int i = 0; i < n; i++)
    {
        int removeable_val = v[i];
        v.erase(v.begin() + i);

        int total_after_remove = total - (removeable_val - v[i]);
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] == total_after_remove)
            {
                index.push_back(j + 1);
            }
        }
        v.insert(v.begin() + i, removeable_val);
    }

    return 0;
}