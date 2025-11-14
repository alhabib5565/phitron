#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {};

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            l.push_front(v);
        else if (x == 1)
            l.push_back(v);
        else
        {
            int sizeOfList = l.size();
            if (v < sizeOfList)
            {
                auto it = l.begin();
                l.erase(next(it, v), next(it, v + 1));
            }
        }

        // print form start
        cout << "L -> ";
        for (auto it = l.begin(); it != l.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        cout << "R -> ";
        auto it = l.end();
        while (it != l.begin())
        {
            --it;
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}