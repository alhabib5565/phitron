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
int getSum(Node *root)
{
    if (!root || (!root->left && !root->right))
        return 0;
    int l = getSum(root->left);
    int r = getSum(root->right);

    return l + r + root->val;
}
int main()
{
    int root_val;
    cin >> root_val;
    Node *root = new Node(root_val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int l, r;
        cin >> l >> r;
        Node *front_node = q.front();
        q.pop();
        if (l != -1)
        {
            Node *l_node = new Node(l);
            front_node->left = l_node;
            q.push(l_node);
        }
        if (r != -1)
        {
            Node *r_node = new Node(r);
            front_node->right = r_node;
            q.push(r_node);
        }
    }
    int sum = getSum(root);
    cout << sum;
    return 0;
}