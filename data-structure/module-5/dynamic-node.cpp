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
int main()
{
    Node *head = new Node(12);
    Node *second = new Node(13);
    Node *third = new Node(14);

    head->next = second;
    second->next = third;

    cout << head->val << " " << second->val << " " << third->val << endl;
    cout << head->val << " " << head->next->val << " " << head->next->next->val << endl;

    return 0;
}