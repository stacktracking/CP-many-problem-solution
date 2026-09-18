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

     }
     
     tail->next= newnode;

     tail=tail->next;
    
}
int size_s(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    while(true)
    {
        cin>>val;

        if(val == -1)
        {
            break;
        }
            insert_at_tail(head1,tail1,val);

    }
    int size1 = size_s(head);
    int size2 = size_s(head1);
     
    
    if(size1 != size2)
    {
       cout<<"NO";
    }else{

         Node* tmp1=head;
         Node* tmp2 = head1;
        int flog = 0;

         while(tmp1 != NULL && tmp2 != NULL)
         {
            if(tmp1->val !=tmp2->val)
            {
                flog=1;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
         }
             if(flog != 1)
             {
             cout<<"YES";
             }else{
              cout<<"NO";
          }
        }
    

    
    
    return 0;
}