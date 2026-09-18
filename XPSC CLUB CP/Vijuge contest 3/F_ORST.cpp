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
        int n,s;
        cin>>n>>s;
        vector<int>v(n),v1(s);
        for(int i=0;i<n;i++)
        cin>>v[i];

        for(int i=0;i<s;i++)
        {
            cin>>v1[i];
        }
        int max_v1 = *max_element(v1.begin(),v1.end());
        sort(v.end()-max_v1 , v.end());
        for(int x : v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}