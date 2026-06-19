#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
Node* btree(vector<int>&ar,int i){
    if(i>=ar.size())return NULL;
    Node* r=new Node(ar[i]);
    r->left=btree(ar,2*i+1);
    r->right=btree(ar,2*i+2);
    return r;
}

void inorder(Node* r){
    if(!r)return;
    if(r->left)inorder(r->left);
    cout<<r->val<<" ";
    if(r->right)inorder(r->right);
}

int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    Node* root=btree(ar,0);
    vector<vector<int>>ans;
    queue<Node*>q;
    q.push(root);
    int ptr=0;
    while(!q.empty()){
        vector<int>temp;
        int qs=q.size();
        for(int i=0;i<qs;i++){
            Node* f=q.front();
            q.pop();
            temp.push_back(f->val);
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);

        }
        if(ptr==1){
            reverse(temp.begin(),temp.end());
            ptr=0;
        }
        else ptr=1;
        ans.push_back(temp);
    }
    vector<int>newt;
    for(auto it:ans){
        for(int i:it)newt.push_back(i);
    }
    Node* ntree=btree(newt,0);
    inorder(ntree);
    return 0;
}