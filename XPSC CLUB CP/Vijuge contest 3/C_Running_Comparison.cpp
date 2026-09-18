#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long alice[n],bob[n];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>alice[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>bob[i];
        }
        for(int i=0;i<n;i++)
        {
            if(bob[i] <= 2 * alice[i] && alice[i] <= 2 * bob[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}