
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
    Node* newnode  = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail =  newnode;

    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

}
int get_size(Node* &head)
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

void printing(Node* &head)
{
    Node* tmp  = head;

    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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
    int siz1= get_size(head);
    int siz2 = get_size(head1);
      bool flag = false;
    if(siz1==siz2)
    {
        Node* tmp = head;
        Node* tmp1 =head1;

        while(tmp !=NULL)
        {
            if(tmp->val != tmp1->val)
            {
                flag = true;
                break;
            }
            tmp = tmp->next;
            tmp1 = tmp1->next;
        }
    }
    if(flag == true)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
    

   
    return 0;
}