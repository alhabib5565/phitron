#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->next = NULL;
        this->val = val;
    };
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = d;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast->next != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
        cout << "Cycle Detected";
    else
        cout << "No Cycle Detected";

    return 0;
}
