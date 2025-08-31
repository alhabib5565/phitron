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
    }
};

int sizeOfList(Node *head)
{
    int size = 0;
    while (head != NULL)
    {
        size++;
        head = head->next;
    }
    return size;
}

void print_left_to_right(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    Node *tail = NULL;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        tail = temp;
        temp = temp->next;
    }
    cout << endl;

    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

bool insert_at_any_position(Node *&head, int val, int index)
{
    int size = sizeOfList(head);
    if (index > size)
    {
        return false;
    }

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return true;
    }

    if (index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return true;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;

    return true;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        bool ok = insert_at_any_position(head, V, X);
        if (!ok)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            print_left_to_right(head);
        }
    }
    return 0;
}
