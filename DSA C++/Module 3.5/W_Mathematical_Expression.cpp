#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    char s,q;

    cin>>a>>s>>b>>q>>c;

    if(s=='+')
    {
        if(a+b==c)
        {
           cout<<"Yes";
        }else{
            int sum=a+b;
            cout<<sum;
        }
    }else if(s=='-')
    {
        if(a-b==c)
        {
            cout<<"Yes";
        }else{
            int sub=a-b;
            cout<<sub;
        }
    }else if(s=='*')
    {
        if(a*b==c)
        {
            cout<<"Yes";

        }else{
            int mul=a*b;
            cout<<mul;
        }
    }




    return 0;
}