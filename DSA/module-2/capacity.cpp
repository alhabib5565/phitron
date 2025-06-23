#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 5, 6, 98};

    cout << v.size() << v.capacity() << endl;
    v.push_back(5);
    cout << v.size() << " " << v.capacity() << endl;

    cout << v[0] << " " << v[9] << " at " << v.at(2) << " " << v.at(9);
    return 0;
}