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

void leftview(Node* root)
{
    stack<int>st;
    root = root->left;
    while(root != NULL)
    {
        st.push(root->val);
        if(root->left)
        root = root->left;
        else
        root = root->right;
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

void rightview(Node* root)
{
    queue<int>q;
    root = root->right;
    while(root != NULL)
    {
        q.push(root->val);
        if(root->right)
        root = root->right;
        else
        root = root->left;
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}


int main()
{
    Node* root = tree_input();
    leftview(root);
    cout<<root->val<<" ";
    rightview(root);
   
    return 0;
}