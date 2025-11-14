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

void reverse_print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverse_print(head->next);
    cout << head->val;
}

int main()
{
    Node *head = new Node(4);
    Node *a = new Node(5);
    Node *b = new Node(6);

    head->next = a;
    a->next = b;

    reverse_print(head);
    return 0;
}
