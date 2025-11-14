#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            pq.push(x);

            if (!pq.empty())
                cout << pq.top();
            else
                cout << "Empty";
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
                cout << pq.top();
            else
                cout << "Empty";
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top();
                else
                    cout << "Empty";
            }
            else
            {
                cout << "Empty";
            }
        }

        cout << endl;
    }

    return 0;
}
