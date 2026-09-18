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
class mystack1
{
    public:
   
    list<int>st1;

    void push(int val)
    {
        st1.push_back(val);
    }
    void pop()
    {
        st1.pop_back();
    }
    int top()
    {
        return st1.back();
    }
    bool empty()
    {
        return st1.empty();
    }
};


int main()
{
    mystack st;
    mystack1 st1;

    int n,n1;
    cin>>n;

   for(int i = 0; i<n ; i++)
   {
        int val;
        cin>>val;
       st.push(val);
   }

      cin>>n1;
   for(int i = 0; i<n1 ; i++)
   {
        int val;
        cin>>val;
       st1.push(val);
   }
    bool flag = true;
   if(n == n1)
   {
       while(!st.empty())
       {
          if(st.top() != st1.top())
          {
               flag = false;
               break;
          }else{
            flag = true;
          }
          st.pop();
            st1.pop();
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