#include <bits/stdc++.h>
using namespace std;
class MySt1
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    };

    void pop()
    {
        l.pop_back();
    };

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    };

    bool empty()
    {
        return l.empty();
    }
};
class MySt2
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    };

    void pop()
    {
        l.pop_back();
    };

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    };

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    MySt1 st1;
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    MySt2 st2;
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO";
        return 0;
    }

    bool flag = true;
    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() != st1.top())
        {
            flag == false;
            break;
        }
        st1.pop();
        st2.pop();
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}