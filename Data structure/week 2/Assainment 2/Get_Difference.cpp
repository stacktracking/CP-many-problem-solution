#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public: 
    int val;
    Node* next;

    Node(int val)
   {
     this->val=val;
     this->next=NULL;
   }
};

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
     if(head ==NULL)
     {
        head = newnode;
        tail = newnode;

     }else{
        tail->next= newnode;
        tail= newnode;

     }
     
    
    
}

int  max_min(Node* &head)
{
    
        int max = head->val;
        int min = head->val;
        Node* tmp = head->next;
        
        while( tmp != NULL)
        {
             if(tmp->val>max)
            {
                max = tmp->val;
            }
          

             if(tmp->val<min)
            {
                min = tmp->val;
            }
            
             
            tmp = tmp->next;
        }
           

        return max-min;
    
    
}


int main()
{
    
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;

        if(val == -1)
        {
            break;
        }
            insert_at_tail(head,tail,val);

    }
    int result= max_min(head);
    cout<<result;
    
    return 0;
}