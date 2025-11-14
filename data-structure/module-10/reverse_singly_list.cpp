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

Node *reverse_list(Node *&head)
{
    Node *temp = head;
    if (temp->next == NULL)
    {
        return temp;
    }
    head = head->next;
    reverse_list(head);
    temp->next->next = temp;
    temp->next = NULL;
    return temp;
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
    tail = reverse_list(head);
    print_linked_list(head);
    return 0;
}
