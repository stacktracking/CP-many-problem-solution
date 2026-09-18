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
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head== NULL)
    {
       head = newnode;
       tail = newnode;

    }
    tail->next= newnode;
    tail = tail->next;

}
void sorting(Node* &head)
{
    
        int max = head->val;
        Node* tmp = head->next;
        
        while( tmp != NULL)
        {
             if(tmp->val>max)
            {
                max = tmp->val;
            }
            tmp = tmp->next;
        }
           

        cout<<max;
    
    
}





int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while(true){
    cin>>val;

    if(val == -1)
    {
        break;
    }
    insert_tail(head,tail,val);
}
    
  sorting(head);

  

    return 0;
}