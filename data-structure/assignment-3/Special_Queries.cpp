#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            string str;
            cin >> str;
            q.push(str);
        }
        else if (!q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}