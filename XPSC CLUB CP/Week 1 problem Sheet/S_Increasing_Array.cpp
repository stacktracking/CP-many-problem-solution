#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,sum=0,cnt=0;
    cin>>n;
    ll arr[n];
    for(ll i =0;i<n;i++)
    cin>>arr[i];
    for(ll i = 1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            sum = arr[i-1]-arr[i];
            arr[i] = arr[i]+sum;
            cnt +=sum;
        }
    }
    cout<<cnt<<endl;
    return 0;
}