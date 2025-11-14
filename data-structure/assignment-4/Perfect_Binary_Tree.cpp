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

vector<int> v;

int depth(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;
    int l = depth(root->left);
    int r = depth(root->right);
    return max(l, r) + 1;
}
int totalNode(Node *root)
{
    if (!root)
        return 0;
    int l = totalNode(root->left);
    int r = totalNode(root->right);
    return l + r + 1;
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

    int d = depth(root);
    int nodes = totalNode(root);
    if (pow(2, d) - 1 == nodes)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}