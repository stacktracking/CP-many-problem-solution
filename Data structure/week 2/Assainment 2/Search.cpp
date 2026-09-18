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

int main()
{
    int t;
    cin>>t;

    while(t--)
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
        int x;
        cin>>x;
  
        

        Node* tmp = head;
        int flog = 0;
        int idx  = 0;

        while(tmp != NULL)
        {
            if(tmp->val == x)
            {
                cout<<idx<<endl;
                flog = 1;
                break;
            }
            tmp = tmp->next;
            idx++;
        }

        if(flog == 0)
        {
            cout<<"-1"<<endl;
        }

         
        while (head != NULL) {
            Node* del = head;
            head = head->next;
            delete del;
        }
        
}
    
    
    
    return 0;
}