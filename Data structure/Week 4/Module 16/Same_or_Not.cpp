#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    queue<int>q;
    int n,m;
    cin>>n>>m;
     
    int val;
    for(int i=0 ; i<n;i++)
    {
        cin>>val;
        st.push(val);
    }
    for(int i=0 ; i<m;i++)
    {
        cin>>val;
        q.push(val);
    }
      
    bool flag =  true;
    if(n == m)
    {
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }else{
        flag = false;
    }

    if(flag ==  true)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}