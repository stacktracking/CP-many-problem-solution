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
int count_size(Node* &head)
{
    Node* tmp= head;
    int count=0;
    while(tmp != NULL)
    {
         count++;
         tmp=tmp->next;
    }

    return count;
}
int main()
{
    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(4);
    Node* d = new Node(8);
    Node* e = new Node(9);
    Node * f= new Node(3);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    int co=count_size(head);
        cout<<co<<endl;
    
    return 0;
}