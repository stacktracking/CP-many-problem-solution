#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fun(ll cur , ll n)
{
    if(cur == n)
    return true;
    if(cur > n )
    return false;

    return fun(cur * 10 , n) || fun(cur * 20 ,n);
    

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(fun(1,n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}