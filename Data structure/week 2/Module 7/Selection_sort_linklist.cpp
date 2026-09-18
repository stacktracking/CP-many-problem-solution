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
void selection_sort(Node* head)
{
    for(Node* i = head;i->next != NULL; i = i->next)
    {
        for(Node* j = i->next;j->next != NULL; j = j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

void printing(Node* head)
{
    Node* tmp= head;
    while(tmp != NULL)
    {
    cout<<tmp->val<<endl;
    tmp=tmp->next;
    }
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
    selection_sort(head);
    printing(head);

    return 0;
}