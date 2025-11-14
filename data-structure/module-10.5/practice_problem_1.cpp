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
    };
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *h1 = NULL;
    Node *t1 = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(h1, t1, val);
    }

    Node *h2 = NULL;
    Node *t2 = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(h2, t2, val);
    }

    bool flag = true;
    while (h1 != NULL && h2 != NULL)
    {
        if (h1->val != h2->val)
        {
            flag = false;
            break;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}