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
        this->next = NULL;
        this->prev = NULL;
        this->val = val;
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

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    bool flag = true;

    Node *tempHead = head;
    Node *tempTail = tail;
    while (tempTail->next != tempHead && tempHead != tempTail)
    {
        if (tempHead->val != tempTail->val)
        {
            flag = false;
            break;
        }
        tempHead = tempHead->next;
        tempTail = tempTail->prev;
    }

    if (flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
