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
    if(val == -1)root =NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root !=NULL)
    q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* myL,*myR;

        if(l == -1) myL = NULL;
        else myL = new Node (l);

        if(r == -1) myR = NULL;
        else myR = new Node (r);

        f->left = myL;
        f->right = myR;
        
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    }

    return root;
}

int count_node(Node* root)
{
    if(root == NULL)
    {
        return 0 ;
    }
    int l = count_node(root->left);
    int r = count_node(root->right);

    return 1+l+r;
}

int main()
{
    Node* root  = tree_input();

    cout<<count_node(root);
    return 0;
}