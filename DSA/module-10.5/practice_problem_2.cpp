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
void reverse_list(Node *head, Node *tail)
{
    while (head != tail && tail != head->prev)
    {
        swap(head->val, tail->val);
        head = head->next;
        tail = tail->prev;
    }
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
    reverse_list(h1, t1);
    print_forword(h1);
    return 0;
}