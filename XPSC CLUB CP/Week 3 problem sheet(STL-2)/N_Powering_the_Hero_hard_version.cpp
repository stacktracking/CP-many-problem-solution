#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        priority_queue<ll>q;
        ll mx=0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a==0)
            {
                if(!q.empty())
                {
                    mx+=q.top();
                    q.pop();
                }
            }else{
                q.push(a);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}