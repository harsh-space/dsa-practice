#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}
};

Node *connect(Node *root)
{
    if (!root)
        return nullptr;
    deque<Node *> q;
    q.push_back(root);
    while (!q.empty())
    {
        int l = q.size();
        for (int i = 0; i < l; i++)
        {
            Node *f = q.front();
            q.pop_front();
            if (i < l - 1)
            {
                Node *s = q.front();
                f->next = s;
            }
            if (f->left)
                q.push_back(f->left);
            if (f->right)
                q.push_back(f->right);
        }
    }
    return root;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);

    cout << "Connecting next pointers...\n";
    root = connect(root);
    return 0;
}