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

int main()
{
    int root_val, x;
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
    cin >> x;
    queue<pair<Node *, int>> q2;
    q2.push({root, 0});
    vector<vector<int>> v;
    while (!q2.empty())
    {
        pair<Node *, int> front = q2.front();
        q2.pop();
        if (v.size() <= front.second)
        {
            v.push_back({});
        }
        v[front.second].push_back(front.first->val);
        if (front.first->left)
            q2.push({front.first->left, front.second + 1});
        if (front.first->right)
            q2.push({front.first->right, front.second + 1});
    }
    if (x >= v.size())
    {
        cout << "Invalid";
        return 0;
    }
    for (int val : v[x])
        cout << val << " ";
    return 0;
}