#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string str;
    cin >> n >> k >> str;

    int frq[26];
    memset(frq, 0, sizeof(frq));

    for (int i = 0; i < n; i++)
        frq[str[i] - 'a']++;

    for (int i = 0; i < 26 && k != 0; i++)
    {
        if (frq[i] < k)
        {
            k -= frq[i];
            frq[i] = 0;
        }
        else
        {
            frq[i] -= k;
            k = 0;
        }
    }

    string result;
    for (int i = n - 1; i >= 0; i--)
    {
        if (frq[str[i] - 'a'] > 0)
        {
            result.push_back(str[i]);
            frq[str[i] - 'a']--;
        }
    }

    reverse(result.begin(), result.end());
    cout << result;

    return 0;
}
