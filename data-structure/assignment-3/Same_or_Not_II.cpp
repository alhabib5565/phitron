#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    };
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    };
    int top()
    {
        return tail->val;
    }
    int size()
    {

        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

class MyQueue
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

public:
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {

        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;

    MyStack st;
    MyQueue q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    while (!st.empty() || !q.empty())
    {
        if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}