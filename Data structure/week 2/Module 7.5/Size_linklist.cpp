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

    
    if(head == NULL)
    {
        head= newnode;
        tail = newnode;

    }
    tail->next=newnode;
    tail =  tail->next;
    

   
}

int get_size(Node* &head)
{
    Node* tmp = head;
    int count= 0;

    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
   

    return count;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val== -1) 
        {
            break;

        }
       insert_tail(head,tail,val);
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
        insert_tail(head1,tail1,val);
    }

    int size1 = get_size(head);
    int size2 = get_size(head1);

    if(size1 == size2)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}