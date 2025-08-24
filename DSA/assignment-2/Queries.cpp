#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int size_of_list(Node *head)
{
    int size = 0;
    while (head != NULL)
    {
        head = head->next;
        size++;
    }
    return size;
}

void delete_at_any(Node *&head, Node *&tail, int ind)
{
    int size = size_of_list(head);
    if (ind < 0 || ind >= size)
        return;

    if (ind == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete deleteNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < ind - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    if (deleteNode == tail)
    {
        tail = temp;
    }
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_any(head, tail, v);
        }

        print_linked_list(head);
        cout << endl;
    }

    return 0;
}