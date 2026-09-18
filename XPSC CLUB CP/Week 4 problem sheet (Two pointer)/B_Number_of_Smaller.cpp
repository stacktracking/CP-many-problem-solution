#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v(n),v1(m);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    int j=0,i=0,cnt=0;
    while(i<m)
    {
        if(j < n && v[j] < v1[i])
        {
            cnt++;
            j++;
        }else{
            cout<<cnt<<" ";
            i++;
        }
        
    }
    
    return 0;
}