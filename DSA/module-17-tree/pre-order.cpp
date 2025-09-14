#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char val;
    Node *left;
    Node *right;
    Node(char val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = new Node('R');
    Node *a = new Node('A');
    Node *b = new Node('B');
    Node *c = new Node('C');
    Node *d = new Node('D');
    Node *e = new Node('E');
    Node *f = new Node('F');
    Node *g = new Node('G');

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    f->left = g;
    preOrder(root);
    return 0;
}