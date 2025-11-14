#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    };
    void pop()
    {
        v.pop_back();
    };
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool emtpy()
    {
        return v.empty();
    }
};

int main()
{
    int n;
    cin >> n;
    MyStack st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.emtpy())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}