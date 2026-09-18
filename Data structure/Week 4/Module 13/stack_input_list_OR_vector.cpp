#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    vector<int>v;

    void push(int x)
    {
        v.push_back(x);

    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }

};
int main()
{
    mystack st;
     
    int n;
    cin>>n;
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