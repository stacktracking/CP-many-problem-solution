#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    stack<int>st;
    queue<int>q1;
   
    
    int n;
    cin>>n;
    for(int i = 0 ;i<n ; i++)
    {
        int val;
        cin>>val;

        q.push(val);

    }
    int val;
    while(!q.empty())
    {
        val = q.front();
        q.pop();
        st.push(val);
    }

    while(!st.empty())
    {
        val =st.top();
        st.pop();
        q1.push(val);
    }

    
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;
}