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

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
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

        int x;
        cin >> x;
        Node *temp = head;
        int index = 0;
        bool isExist = false;
        while (temp != NULL)
        {
            if (temp->val == x)
            {
                isExist = true;
                break;
            }
            temp = temp->next;
            index++;
        }

        if (isExist)
        {
            cout << index;
        }
        else
        {
            cout << -1;
        }
        cout << '\n';
    }

    return 0;
}