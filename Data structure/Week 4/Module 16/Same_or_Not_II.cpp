#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    list<int>st;
   

    void push(int val)
    {
        st.push_back(val);
    }
    void pop()
    {
        st.pop_back();
    }
    int top()
    {
        return st.back();
    }
    bool empty()
    {
        return st.empty();
    }
};
class myQueue
{
    public: 
   list<int>l;
   void push(int val)
   {
     l.push_back(val);
   }
   void pop()
   {
        l.pop_front();
   }
   int front()
   {
      return l.front();
   }
   int back()
   {
     return l.back();
   }
   int size()
   {
       return l.size();
   }

   bool empty()
   {
      return l.empty();
   }

};


int main()
{
    mystack st;
    myQueue q;

    int n,n1;
    cin>>n>>n1;

   for(int i = 0; i<n ; i++)
   {
        int val;
        cin>>val;
       st.push(val);
   }

    
   for(int i = 0; i<n1 ; i++)
   {
        int val;
        cin>>val;
       q.push(val);
   }
    bool flag = true;
   if(n == n1)
   {
       while(!st.empty())
       {
          if(st.top() != q.front())
          {
               flag = false;
               break;
          }else{
            flag = true;
          }
          st.pop();
            q.pop();
       }
   }else{
      flag = false;
   }


   if(flag == true)
   {
      cout<<"YES";
   }else{
    cout<<"NO";
   }


    return 0;
}