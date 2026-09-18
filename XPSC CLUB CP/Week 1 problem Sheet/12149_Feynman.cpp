#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum = 0;
        if(n>0)
        {
            for(int i = 1 ;i <= n ; i++)
            {
                sum +=i*i;
                
            }
            
            cout<<sum<<endl;
        }else if(n==1)
        {
            cout<<1<<endl;
        }
        
    }
    return 0;
}