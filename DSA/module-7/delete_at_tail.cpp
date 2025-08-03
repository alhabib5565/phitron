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
    tail = newNode;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

void deleteAtTail(Node *head, Node *&tail)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *deletedNode = temp->next;
    temp->next = NULL;
    tail = temp;
    delete deletedNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, tail, val);
    }

    deleteAtTail(head, tail);
    print_linked_list(head);
    return 0;
}
