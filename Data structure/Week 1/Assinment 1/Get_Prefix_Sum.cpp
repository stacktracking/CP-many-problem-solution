#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<long long int>pre(n);
    pre[0]=v[0];
    for(int j=1;j<n;j++)
    {
        pre[j]=pre[j-1]+v[j];
    }

    for(int k=n-1;k>=0;k--)
    {
        cout<<pre[k]<<" ";
    }

    return 0;
}