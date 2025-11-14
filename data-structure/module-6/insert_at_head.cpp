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

void insert_at_head(Node *&head, Node *head_copy, int val)
{
    // cout << "Head " << &head << endl;
    // cout << "Head-copy " << &head_copy;
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;
    // cout << "Main " << &head << endl;
    insert_at_head(head, head, 5);
    print_linked_list(head);
    return 0;
}