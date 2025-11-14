#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<int> st;
        string s;
        cin >> s;

        for (char c : s)
        {
            if (!st.empty() && st.top() == '0' && c == '1')
            {
                st.pop();
            }
            else
            {

                st.push(c);
            }
        }
        if (st.empty())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}