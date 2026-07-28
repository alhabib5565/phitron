#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int frq[101];
    memset(frq, 0, sizeof(frq));

    for (int i = 1; i <= n; i++)
    {
        int item;
        cin >> item;

        frq[item] = i;
    }

    vector<int> indices;
    for (int i = 0; i <= 100; i++)
        if (frq[i] > 0)
            indices.push_back(frq[i]);

    if (indices.size() < k)
    {
        cout << "NO";
        return 0;
    }

    cout << "YES" << '\n';
    for (int i = 0; i < k; i++)
        cout << indices[i] << " ";

    return 0;
}