#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=0;i<n;i++)
        cin>>a[i];


        vector<int>v;
        vector<bool>seen(n+1,false);
        for(int i=n-1;i>=0;i--)
        {
            
            if(seen[a[i]])
            break;
            else{
                seen[a[i]]=true;
                v.push_back(a[i]);
                
            }
        }
        cout<<n-v.size()<<endl;
    }
    return 0;
}