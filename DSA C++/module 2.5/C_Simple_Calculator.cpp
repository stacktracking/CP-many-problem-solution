#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x >>y;
     int sum=0,sub=0;
    sum=x+y;
    long long int mul= 1ll*x*y;
    sub=x-y;

    cout<<x<<" "<<'+'<<" "<<y<<" "<<'='<<" "<<sum<<endl;
    cout<<x<<" "<<'*'<<" "<<y<<" "<<'='<<" "<<mul<<endl;
    cout<<x<<" "<<'-'<<" "<<y<<" "<<'='<<" "<<sub;

    return 0;
}