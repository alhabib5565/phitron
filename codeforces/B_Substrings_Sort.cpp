#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a.size() < b.size();
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < v[i + 1].size(); j++)
        {
            if (v[i] == v[i + 1].substr(j, v[i].size()))
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES" << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}