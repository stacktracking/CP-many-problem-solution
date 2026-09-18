#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public: 
    int val;
    Node* next;
    Node* prev;

    Node(int val)
   {
     this->val=val;
     this->next=NULL;
     this->prev = NULL;
   }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
   
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void palindrome(Node* &head,Node* &tail)
{
    Node* tmp = head;
    Node* tmp1 = tail;
      
    bool flag = true;
    while(tmp != NULL && tmp->prev !=tm)
    {
        if(tmp->val != tmp1->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->prev;
    }
       
    if(flag == true)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
   
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin>>val)
    {
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    palindrome(head,tail);
    return 0;
}