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
void printConnections(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();
            
            // Print current node value and its next target
            cout << curr->val << "->";
            if (curr->next) cout << curr->next->val;
            else cout << "NULL";
            cout << "   ";
            
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cout << "\n"; // Newline for each tier
    }
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
    printConnections(root);
    return 0;
}