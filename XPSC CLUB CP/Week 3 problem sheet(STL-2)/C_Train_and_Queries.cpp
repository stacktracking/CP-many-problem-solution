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
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>first,last;
        for(int i=0;i<n;i++)
            {
                if(first.find(v[i])==first.end())
                {
                    first[v[i]]=i;
                }
                last[v[i]]=i;
            }
        while(q--)
        {
            int a,b,srs,dis;
            cin>>a>>b;
            if(first.count(a) && last.count(b) && first[a]<last[b])
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}