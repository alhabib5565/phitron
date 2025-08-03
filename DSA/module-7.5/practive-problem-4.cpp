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

void insert_at_any(Node *head, int ind, int val, int *size)
{
    if (*size < ind)
    {
        cout << "Invalid" << " " << ind << endl;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < ind - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    *size++;
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
    int q;
    cin >> q;

    int freq_arr[q + 1] = {0};

    for (int i = 0; i < q; i++)
    {
        int index;
        cin >> index;
        cin >> freq_arr[index];
    }

    int size = size_of_list(head);

    for (int i = 0; i < q + 1; i++)
    {
        if (freq_arr[i] != 0)
            insert_at_any(head, i, freq_arr[i], &size);
    }
    print_linked_list(head);
    return 0;
}