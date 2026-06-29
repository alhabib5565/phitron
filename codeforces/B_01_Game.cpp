#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    stack<char> st;
    int delete_op_count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
            st.push(s[i]);
        else if (st.top() != s[i])
        {
            st.pop();
            delete_op_count++;
        }
        else
            st.push(s[i]);
    }

    if (delete_op_count % 2 == 0)
        cout << "NET" << '\n';
    else
        cout << "DA" << '\n';
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