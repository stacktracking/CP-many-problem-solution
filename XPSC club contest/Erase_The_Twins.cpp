#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        stack<char>st;

        for(auto c : s)
        {
            if(!st.empty() && st.top() == c)
            {
                st.pop();

            }else{
                st.push(c);
            }
        }
       

        cout<<st.size()<<endl;
    }
    return 0;
}