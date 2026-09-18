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
    Node* newnode  = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail =  newnode;

    }
    tail->next = newnode;
    tail = tail->next;

}
void reverse_singly(Node* &head,Node* &tail,Node* tmp)
{
    if(tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_singly(head,tail,tmp->next);
    tmp->next->next = tmp;
    tmp->next =  NULL;
    tail = tmp;
}
void printing(Node* &head)
{
    Node* tmp  = head;

    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
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
    reverse_singly(head,tail,head);
    printing(head);

    cout<<"head:"<<head->val<<endl;
    cout<<"tail:"<<tail->val<<endl;
    return 0;
}