#include <bits/stdc++.h>
using namespace std;

void updateValue(int *&p)
{

    *p = 100;
    cout << p << " from fun" << endl;
}

int main()
{
    int x = 10;
    int *p = &x;
    updateValue(p);
    cout << p << " " << &x << " from main" << endl;
    return 0;
}