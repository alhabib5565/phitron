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

void print_forword(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insert_at_any_pos(Node *&head, Node *&tail, int indx, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;

    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }

    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->next = tail;
    a->prev = head;
    tail->prev = a;

    insert_at_any_pos(head, tail, 2, 100);
    print_forword(head);
    return 0;
}
