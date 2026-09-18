#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     cout<<v[n-1];
    for(int j=n-2;j>=0;j--)
    {
        cout<<" "<<v[j];
    }
    return 0;
}