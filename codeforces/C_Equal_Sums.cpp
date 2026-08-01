#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<long long> a, vector<long long> b)
{
    return a[0] < b[0];
}
int main()
{
    int k;
    cin >> k;
    vector<vector<int>> v(k);

    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int el;
            cin >> el;
            v[i].push_back(el);
        }
    }

    vector<vector<long long>> tuple;

    for (int i = 0; i < k; i++)
    {
        long long sum = 0;
        for (int j = 0; j < v[i].size(); j++)
            sum += v[i][j];
        for (int j = 0; j < v[i].size(); j++)
        {
            long long sum_without_i = sum - v[i][j];
            tuple.push_back({sum_without_i, i, j});
        }
    }

    sort(tuple.begin(), tuple.end(), cmp);

    for (int i = 0; i < tuple.size() - 1; i++)
    {
        vector<long long> t = tuple[i];
        vector<long long> t1 = tuple[i + 1];
        if (t[0] == t1[0] && t[1] != t1[1])
        {
            cout << "YES" << '\n';
            cout << t[1] + 1 << " " << t[2] + 1 << '\n';
            cout << t1[1] + 1 << " " << t1[2] + 1 << '\n';
            return 0;
        }
    }
    cout << "NO";
    return 0;
}