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
    int val ;
    cin>>val;
    Node* root;

    if(val == -1) root = NULL;
    else root = new Node (val);
    queue<Node*>q;
    if(root != NULL)
    q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* myLeft,*myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node (l);
        
        if( r == -1) myRight = NULL;
        else myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }

    return root;
}

bool binary_search(Node* root,int val)
{
    if(root == NULL)
    return false;
    
    if(root->val == val)
    return true;
    
    if(root->val > val)
    return binary_search(root->left,val);
    else
    return binary_search(root->right,val);




}

int main()
{
    Node* root  = tree_input();
    int val;
    cin>>val;
    if(binary_search(root,val) == true)
    cout<<"Found\n";
    else
    cout<<"Not Found\n";
    return 0;
}