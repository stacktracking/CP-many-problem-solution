#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,k;
    cin>>x>>y>>k;
    int sum = abs(x-y);
    if(sum <= k)
    {
        cout<<"Yes"<<endl;
    }else
    cout<<"No"<<endl;
    return 0;
}