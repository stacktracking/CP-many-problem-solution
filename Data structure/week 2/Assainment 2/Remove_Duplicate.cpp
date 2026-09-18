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

void delete_dupli(Node* head) {
    Node* current = head;

    while (current != NULL) {
        Node* prev = current;
        Node* tmp = current->next;

        while (tmp != NULL) {
            if (tmp->val == current->val) {
            
                prev->next = tmp->next;
                delete tmp;
                tmp = prev->next;
            } else {
                prev = tmp;
                tmp = tmp->next;
            }
        }
        current = current->next;
    }
}

void printing(Node* head)
{
    Node* tmp= head;
    while(tmp != NULL)
    {
    cout<<tmp->val<<" ";
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
    delete_dupli(head);
    printing(head);

    return 0;
}