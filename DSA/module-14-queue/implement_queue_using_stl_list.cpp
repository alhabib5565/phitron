
#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    int n;
    cin >> n;
    MyQueue queue;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        queue.push(val);
    }

    while (!queue.empty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }

    return 0;
}