#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public: 
    int val;
    Node* left;
    Node* right;

    Node(int val)
   {
     this->val=val;
     this->left=NULL;
     this->right=NULL;
   }
};

Node* tree_input()
{
    int val;
    cin>>val;

    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root != NULL) q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        

        if(l == -1) parent->left = NULL;
        else parent->left = new Node(l);

        if(r == -1) parent->right = NULL;
        else parent->right = new Node(r);

        if(parent->left)
        q.push(parent->left);
        if(parent->right)
        q.push(parent->right);

    
    }

    return root;
}
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        
        Node* f = q.front();
        q.pop();
        
        cout<<f->val<<" ";
        
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);


    }
}

void bst_insert(Node* &root, int val)
{
    if(root == NULL)
    root = new Node(val);

    if(root->val > val)
    {
        if(root->left == NULL)
        root->left = new Node(val);
        else
        bst_insert(root->left,val);

    }
    else{

        if(root->right == NULL)
        root->right = new Node(val);
        else
        bst_insert(root->right,val);
    }
}

int main()
{
    
    Node* root = tree_input();
    int val;
    cin>>val;
    bst_insert(root,val);
    level_order(root);
    return 0;
}