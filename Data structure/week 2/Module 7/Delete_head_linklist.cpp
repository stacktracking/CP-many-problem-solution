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

void delete_head(Node* &head)
{
    Node* deletenode= head;
    head= head->next;
    delete deletenode;
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
    delete_head(head);
    delete_head(head);

    printing(head);

    return 0;
}