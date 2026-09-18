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

void insert_at_head(Node* &head,Node* &tail,int val)
{
    
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }else{
         newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
       
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
   
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }else{
         newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
    }

   
}
void insert_any_pos(Node* &head, int idx, int val) {
    Node* newnode = new Node(val);
    Node* tmp = head;

    for (int i = 0; i < idx - 1; i++) {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    newnode->prev = tmp;

    if (tmp->next != NULL) {
        tmp->next->prev = newnode;
    }

    tmp->next = newnode;
}

int sizecnt(Node* &head)
{
    Node* tmp = head;
    int cnt= 0 ;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void left_right_print(Node* &head, Node* &tail)
{
    Node* tmp = head;
    Node* tmp1 = tail;

    cout << "L -> ";
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    cout << "R -> ";
    while (tmp1 != NULL) {
        cout << tmp1->val << " ";
        tmp1 = tmp1->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    int t,val,idx;
    cin>>t;
    
    while(t--)
    {
        cin>>idx>>val;
        int size = sizecnt(head);
        if(idx == 0)
        {
                insert_at_head(head, tail, val);
                left_right_print(head, tail);
        }
        else if(idx > 0 && idx < size)
        {
                insert_any_pos(head, idx, val);
                left_right_print(head, tail);
        }
        else if(idx == size)
        {
            insert_at_tail(head, tail, val);
             left_right_print(head, tail);
        }
          else
        {
                cout << "Invalid" << endl;
        }

    }
     

  
    return 0;
}