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

void delete_from_any(Node *&head, Node *&tail, int indx)
{
    Node *temp = head;

    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    deleteNode->next->prev = temp;
    delete deleteNode;
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

    delete_from_any(head, tail, 2);
    print_forword(head);
    return 0;
}
