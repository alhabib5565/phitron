#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            st.push(s[i]);
        else if (st.top() != s[i])
            st.pop();
        else
            st.push(s[i]);
    }

    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}