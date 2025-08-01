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

void insert_at_any_position(Node *head, int val, int index)
{
    int currentIndex = 0;
    Node *newNode = new Node(val);
    while (currentIndex < index)
    {
        if (currentIndex == index - 1)
        {
            newNode->next = head->next;
            head->next = newNode;
        }
        currentIndex++;
        head = head->next;
    }
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
    insert_at_any_position(head, 5, 1);
    insert_at_any_position(head, 15, 3);
    print_linked_list(head);
    return 0;
}