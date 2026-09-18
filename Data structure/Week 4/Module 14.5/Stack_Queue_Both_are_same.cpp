#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    queue<int>q;

    int n,n1;
    cin>>n;
    for(int  i = 0; i<n ; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }


    cin>>n1;
    for(int  i = 0; i<n1 ; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
     bool flag = true;
    if(n == n1)
    {
        while (!st.empty())
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
        flag = true;
    }

    if(flag == true)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}