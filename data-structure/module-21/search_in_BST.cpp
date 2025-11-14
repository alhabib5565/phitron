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
bool binary_search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;

    if (root->val < val)
        return binary_search(root->right, val);
    else
        return binary_search(root->left, val);
};
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    if (binary_search(root, val))
        cout << "Value exists";
    else
        cout << "Not found";
    return 0;
}