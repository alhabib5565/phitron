#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int root_val;
    cin >> root_val;
    queue<Node *> q;
    Node *root = new Node(root_val);
    q.push(root);

    while (!q.empty())
    {
        int l, r;
        cin >> l >> r;

        Node *front = q.front();
        q.pop();
        if (l != -1)
        {
            Node *l_node = new Node(l);
            q.push(l_node);
            front->left = l_node;
        }
        if (r != -1)
        {
            Node *r_node = new Node(r);
            q.push(r_node);
            front->right = r_node;
        }
    }
    return root;
}

void insert_in_bst(Node *&root, int val)
{
    Node *newNode = new Node(val);
    if (root == NULL)
    {
        root = newNode;
        return;
    }

    if (root->val < val)
    {
        if (root->right == NULL)
            root->right = newNode;
        else
            insert_in_bst(root->right, val);
    }
    if (root->val > val)
    {
        if (root->left == NULL)
            root->left = newNode;
        else
            insert_in_bst(root->left, val);
    }
};

void print_bst(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        cout << front->val << " ";
        if (front->left)
            q.push(front->left);

        if (front->right)
            q.push(front->right);
    }
}
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    insert_in_bst(root, val);
    print_bst(root);
    return 0;
}