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

    for(int j=0;j<n;j++)
    {
        if(v[j]>0)
        {
            replace(v.begin(),v.end(),v[j],1);
            cout<<v[j]<<" ";
        }else if(v[j]<0){
             replace(v.begin(),v.end(),v[j],2);
             cout<<v[j]<<" ";
        }else if(v[j]==0)
        {
            cout<<v[j]<<" ";
        }

        
    }

    

    return 0;
}