#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        dq.push_back(v[i]);
        else
        dq.push_front(v[i]);
        
    }
    if(n%2!=0)
    reverse(dq.begin(),dq.end());
    
    for(auto ans : dq)
    cout<<ans<<" ";
    cout<<endl;
    return 0;
}