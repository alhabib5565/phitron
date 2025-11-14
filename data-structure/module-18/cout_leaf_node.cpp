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

int count_node(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r;
}

int main()
{
    char r_val;
    cin >> r_val;
    Node *root = new Node(r_val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        char left, right;
        cin >> left >> right;

        Node *f_node = q.front();
        q.pop();

        if (left != 'n')
        {
            Node *left_node = new Node(left);
            f_node->left = left_node;
            q.push(left_node);
        }
        if (right != 'n')
        {
            Node *right_node = new Node(right);
            f_node->right = right_node;
            q.push(right_node);
        }
    }

    int total_node = count_node(root);

    cout << total_node;

    return 0;
}