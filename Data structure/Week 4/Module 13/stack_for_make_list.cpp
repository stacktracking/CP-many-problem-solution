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
class mystack
{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    int cnt = 0;


    void push(int x)
    {
        cnt++;
      Node* newnode = new Node(x);

      if(head == NULL)
      {
        head = newnode;
        tail = newnode;
        return;
      }

      tail->next = newnode;
      newnode->prev = tail;
      tail = newnode;

    }
    void pop()
    {
        cnt--;
       Node* deletenode = tail;
       tail = tail->prev;
       delete deletenode;
       if(tail == NULL)
       {
        head = NULL;
        return;
       }
       tail->next = NULL;
    }
    int top()
    {
        return tail->val ;
    }
    int size()
    {
        return cnt;
    }
    bool empty()
    {
        return head == NULL;
    }

};

int main()
{
   mystack st;
     
    
     int x;
    while(cin>>x)
    {
           st.push(x);
    }
   while(!st.empty())
   {
      cout<<st.top()<<endl;
      st.pop();
   }
    return 0;
}