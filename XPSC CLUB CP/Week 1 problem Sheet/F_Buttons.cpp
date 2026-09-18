#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int sum = 0;
    if(abs(n-m)>=2 && n>m)
    {
        sum = n+(n-1);
    }else if(abs(n-m)>=2 && m>n )
    {
        sum=m+(m-1);
    }else if(abs(n-m)==1 || n==m)
    {
        sum = n+m;
    }

    cout<<sum<<endl;
    return 0;
}