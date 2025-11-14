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
void leaf_node(Node *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        v.push_back(root->val);
        return;
    }

    leaf_node(root->right);
    leaf_node(root->left);
}
bool comp(int a, int b)
{
    return a > b;
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

    leaf_node(root);
    sort(v.begin(), v.end(), comp);
    for (int val : v)
        cout << val << " ";
    return 0;
}