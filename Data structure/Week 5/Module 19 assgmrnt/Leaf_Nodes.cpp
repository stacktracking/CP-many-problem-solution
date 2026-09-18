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
void level_order(Node* root)
{
    queue<Node*>q;
    vector<int>v;
    if(root)
    q.push(root);

    while(!q.empty())
    {
        
        Node* f = q.front();
        q.pop();
        
        if(f->left == NULL && f->right == NULL)
        {
            v.push_back(f->val);
        }
        
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
    sort(v.rbegin(),v.rend());

    for(int val : v)
    {
        cout<<val<<" ";
    }
}

int main()
{
    Node* root = tree_input();

    level_order(root);
    return 0;
}