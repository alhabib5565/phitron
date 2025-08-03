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
    int frq_arr[2];

    for (int i = 0; i < 2; i++)
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
        frq_arr[i] = size_of_list(head);
    }
    if (frq_arr[0] == frq_arr[1])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}