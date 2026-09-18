#include<bits/stdc++.h>
using namespace std;
long long  fact(int n )
{
    if(n==0 || n==1)
    return 1;
    long long mul = fact(n-1);

    return n*mul;
}
int main()
{
    int n;
    cin>>n;
    long long  ans = fact(n);
    cout<<ans;
    return 0;
}