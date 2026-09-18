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

    st.push(10);
    st.push(20);
    st.push(30);
    
    if(!st.empty())
{
     st.pop();
}
if(!st.empty())
{
    cout<<st.top()<<endl;
    st.pop();
     cout<<st.top()<<endl;
}
    return 0;
}