#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>pre(n);
  

    for(int i=0;i<n;i++)
    {
        pre[i]=v[i]+v[i+1]+v[i+2];
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }

    return 0;
}