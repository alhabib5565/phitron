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

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (1)
    {
        cin >> val1;
        if (val1 == -1)
            break;

        insert_at_tail(head1, tail1, val1);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head2, tail2, val);
    }

    Node *temp1 = head1;
    Node *temp2 = head2;

    int size_of_list1 = size_of_list(head1);
    int size_of_list2 = size_of_list(head2);

    if (size_of_list1 != size_of_list2)
    {
        cout << "NO";
        return 0;
    }
    bool isSame = true;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            isSame = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (isSame)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}