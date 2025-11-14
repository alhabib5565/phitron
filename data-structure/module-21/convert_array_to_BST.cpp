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

Node *convert_to_bst(int arr[], int l, int r)
{
    if (r < l)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *l_node = convert_to_bst(arr, l, mid - 1);
    Node *r_node = convert_to_bst(arr, mid + 1, r);
    root->left = l_node;
    root->right = r_node;
    return root;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    return 0;
}