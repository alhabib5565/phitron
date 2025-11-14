#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 2, 4, 5};
    list<int> l2;

    // list<int> l2 = l1;
    l2.assign(l1.begin(), l1.end());
    // l2.push_back(12);
    // l2.push_front(10);
    // l2.pop_back();
    // l2.pop_front();

    // l2.insert(next(l2.begin(), 2), 10);
    // insert multiple value
    // l2.insert(next(l2.begin(), 2), 2, 23);

    // list<int> l = {100, 230};
    // l2.insert(next(l2.begin(), 2), l.begin(), l.end());

    // l2.erase(next(l2.begin(), 2), next(l2.begin(), 4));

    replace(l2.begin(), next(l2.begin(), 4), 2, 3230);
    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}