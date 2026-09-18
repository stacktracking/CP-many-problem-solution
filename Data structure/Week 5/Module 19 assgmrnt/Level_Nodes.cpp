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
void level_order(Node* root,int x)
{
    queue<pair<Node*,int>>q;
    bool flag = false;
    if(root)
    q.push({root,0});
    while(!q.empty())
    {
        
        pair<Node*,int> perent = q.front();
        q.pop();
        
        Node* node = perent.first;
        int level = perent.second;

        if(level == x)
        {
             cout<<node->val<<" ";
             flag = true;
        }
        
        if(node->left != NULL)
            q.push({node->left,level+1});
        if(node->right != NULL)
            q.push({node->right,level+1});


    }
   if(flag == false) 
   {
    cout<<"Invalid";
   }
}
int main()
{
    Node* root = tree_input();
    int x;
    cin>>x;
    level_order(root,x);
    return 0;
}