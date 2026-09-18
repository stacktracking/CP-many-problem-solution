#include<bits/stdc++.h>
using namespace std;

void rev(int i,int n)
{
    if(i>n)
    {
        return;
    }
    rev(i+1,n);  //rev ta print ar age call korle reverce print hobe and print ar pore call korle suja print hobe;
    cout<<i<<endl;
    //  rev(i+1,n);
}

int main()
{
    int n=5;
    rev(1,n);

    return 0;
}