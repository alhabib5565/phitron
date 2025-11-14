#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create a list
    list<int> list1 = {12, 3234, 23};

    int arr[5] = {1, 2, 3, 5, 5};
    vector<int> v = {13, 52, 54};
    list<int> list2(v.begin(), v.end());
    for (list<int>::iterator it = list2.begin(); it != list2.end(); it++)
    {
        cout << *it << endl;
    }
    list2.resize(1);
    cout
        << list2.size();

    return 0;
}